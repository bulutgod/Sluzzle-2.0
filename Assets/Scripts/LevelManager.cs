using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance { get; private set; }

    [Header("Level Configuration")]
    [SerializeField] private List<LevelDataSO> levels = new List<LevelDataSO>();
    [SerializeField] private int currentLevelIndex = 0;
    
    [Header("Completion Settings")]
    [SerializeField] private float completionVerifyDelay = 0.1f;

    public event Action<LevelObjective> OnObjectiveProgress;
    public event Action OnLevelComplete;
    public event Action OnLevelFailed;

    public static bool JustCompletedLevel= false;
    
    private LevelDataSO currentLevel;
    private Coroutine levelCompleteVerifyCoroutine;
    private bool isLevelCompleted = false;
    private bool isLevelFailed = false;
    private bool isVerifying = false;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    private void Start()
    {
        bool isEndlessMode = PlayerPrefs.GetInt("IsEndlessMode", 0) == 1;

        if (isEndlessMode)
        {
            this.enabled = false;
            return;
        }

        // Seçilen level'i al, ama önce listeyi kontrol et
        if (levels == null || levels.Count == 0)
        {
            Debug.LogError("LevelManager'da hiç level tanımlanmamış! Lütfen en az bir level ekleyin.");
            return;
        }

        int selectedLevel = MainMenuLevelSelector.GetSelectedLevel();
        
        // Eğer seçilen level geçersizse (listeden büyük veya negatif), ilk level'i yükle
        if (selectedLevel < 0 || selectedLevel >= levels.Count)
        {
            selectedLevel = 0;
            Debug.LogWarning($"Geçersiz level seçildi ({selectedLevel}). İlk level yükleniyor.");
        }

        LoadLevel(selectedLevel);
    }

    public void LoadLevel(int levelIndex)
    {
        if (levels == null || levels.Count == 0)
        {
            Debug.LogError("Hiç level eklenmemiş!");
            return;
        }

        if (levelIndex < 0 || levelIndex >= levels.Count)
        {
            Debug.LogError($"Level {levelIndex} bulunamadı!");
            return;
        }

        currentLevelIndex = levelIndex;
        currentLevel = levels[levelIndex];
        isLevelCompleted = false;

        foreach (var objective in currentLevel.objectives)
        {
            objective.currentCount = 0;
        }

        Debug.Log($"Level {currentLevel.levelNumber} yüklendi: {currentLevel.levelName}");
    }
    
    public void CheckLevelCompleteByCurrentBoard(IGrid grid)
    {
        if (currentLevel == null || isLevelCompleted) return;

        // Board'daki tile'ları say
        Dictionary<int, int> currentBoardCounts = CountTilesOnBoard(grid);

        // Objective'leri güncelle
        bool allObjectivesMet = true;

        foreach (var objective in currentLevel.objectives)
        {
            int currentCount = currentBoardCounts.ContainsKey(objective.tileLevel) 
                ? currentBoardCounts[objective.tileLevel] 
                : 0;

            objective.currentCount = currentCount;
            OnObjectiveProgress?.Invoke(objective);

            if (currentCount < objective.targetCount)
            {
                allObjectivesMet = false;
            }
        }

        // Debug log
        Debug.Log($"Board kontrolü: Hedefler tuttu mu? {allObjectivesMet}");
        foreach (var kvp in currentBoardCounts)
        {
            Debug.Log($"  Level {kvp.Key}: {kvp.Value} adet");
        }

        if (allObjectivesMet)
        {
            if (levelCompleteVerifyCoroutine != null)
            {
                StopCoroutine(levelCompleteVerifyCoroutine);
            }
    
            isVerifying = true;  // Doğrulama başladı - input engelle
            levelCompleteVerifyCoroutine = StartCoroutine(VerifyLevelCompletion(grid));
        }
        else
        {
            if (levelCompleteVerifyCoroutine != null)
            {
                StopCoroutine(levelCompleteVerifyCoroutine);
                levelCompleteVerifyCoroutine = null;
            }
            isVerifying = false;  // Hedefler tutmadı - input serbest
        }
    }

    private IEnumerator VerifyLevelCompletion(IGrid grid)
    {
        yield return new WaitForSeconds(completionVerifyDelay);

        Dictionary<int, int> currentBoardCounts = CountTilesOnBoard(grid);
    
        bool stillComplete = true;
        foreach (var objective in currentLevel.objectives)
        {
            int currentCount = currentBoardCounts.ContainsKey(objective.tileLevel) 
                ? currentBoardCounts[objective.tileLevel] 
                : 0;

            objective.currentCount = currentCount;
            OnObjectiveProgress?.Invoke(objective);

            if (currentCount < objective.targetCount)
            {
                stillComplete = false;
            }
        }

        if (stillComplete)
        {
            isLevelCompleted = true;
            OnLevelComplete?.Invoke();
            Debug.Log($"✓ Level TAMAMLANDI!");
        }
        else
        {
            isVerifying = false;  // Doğrulama başarısız - input tekrar serbest
            Debug.Log("✗ Doğrulama başarısız");
        }

        levelCompleteVerifyCoroutine = null;
    }

    private Dictionary<int, int> CountTilesOnBoard(IGrid grid)
    {
        Dictionary<int, int> counts = new Dictionary<int, int>();

        for (int x = 0; x < grid.Size; x++)
        {
            for (int y = 0; y < grid.Size; y++)
            {
                if (grid[x, y] != null)
                {
                    int tileLevel = grid[x, y].level;
                    
                    if (!counts.ContainsKey(tileLevel))
                        counts[tileLevel] = 0;
                    
                    counts[tileLevel]++;
                }
            }
        }

        return counts;
    }

    public void CheckGameOver(IGrid grid)
    {
        if (isLevelCompleted || isLevelFailed) return;

        if (IsBoardFull(grid) && !CanMakeAnyMove(grid))
        {
            isLevelFailed = true;  // Flag'i set et
            OnLevelFailed?.Invoke();
            Debug.Log("Level başarısız!");
        }
    }

    private bool IsBoardFull(IGrid grid)
    {
        for (int x = 0; x < grid.Size; x++)
            for (int y = 0; y < grid.Size; y++)
                if (grid[x, y] == null) return false;
        return true;
    }

    private bool CanMakeAnyMove(IGrid grid)
    {
        Vector2[] directions = { Vector2.up, Vector2.down, Vector2.left, Vector2.right };
        foreach (var dir in directions)
            if (CanMoveInDirection(grid, dir)) return true;
        return false;
    }

    private bool CanMoveInDirection(IGrid grid, Vector2 direction)
    {
        int dx = Mathf.RoundToInt(direction.x);
        int dy = Mathf.RoundToInt(direction.y);

        for (int primary = 0; primary < grid.Size; primary++)
        {
            for (int secondary = 0; secondary < grid.Size; secondary++)
            {
                int x = dx != 0 ? secondary : primary;
                int y = dx != 0 ? primary : secondary;

                if (grid[x, y] != null)
                {
                    int targetX = x + dx;
                    int targetY = y + dy;

                    if (targetX >= 0 && targetX < grid.Size && targetY >= 0 && targetY < grid.Size)
                    {
                        if (grid[targetX, targetY] == null) return true;
                        if (CanMergeInDirection(grid, x, y, dx, dy)) return true;
                    }
                }
            }
        }
        return false;
    }

    private bool CanMergeInDirection(IGrid grid, int startX, int startY, int dx, int dy)
    {
        int level = grid[startX, startY].level;
        int sameCount = 1;

        for (int i = 1; i < 3; i++)
        {
            int checkX = startX + (dx * i);
            int checkY = startY + (dy * i);

            if (checkX >= 0 && checkX < grid.Size && checkY >= 0 && checkY < grid.Size &&
                grid[checkX, checkY] != null && grid[checkX, checkY].level == level)
            {
                sameCount++;
            }
            else break;
        }

        return sameCount >= 3;
    }

    public bool IsLevelComplete() => isLevelCompleted;
    
    // ReSharper disable Unity.PerformanceAnalysis
    public void NextLevel()
    {
        int currentLevel = PlayerPrefs.GetInt("CurrentLevel", 0);
        int nextLevel = currentLevel + 1;
        
        PlayerPrefs.SetInt("CurrentLevel", nextLevel);
        PlayerPrefs.Save();
        JustCompletedLevel = true;

        Debug.Log($"[Level] NextLevel -> CurrentLevel set to {nextLevel}");
        Debug.Log($"[LevelManager] Static flag set: {JustCompletedLevel}");
        SceneManager.LoadScene("MenuScene");
        Time.timeScale = 1f;
    }

    public void RestartLevel()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(
            UnityEngine.SceneManagement.SceneManager.GetActiveScene().name
        );
    }
    public bool IsGameOver()
    {
        return isLevelCompleted || isLevelFailed || isVerifying;
    }

    public LevelDataSO GetCurrentLevel() => currentLevel;
    public int GetCurrentLevelIndex() => currentLevelIndex;
    public int GetTotalLevels() => levels.Count;
}
