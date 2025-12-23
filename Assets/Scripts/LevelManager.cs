using UnityEngine;
using System.Collections.Generic;
using System;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance { get; private set; }

    [Header("Level Configuration")]
    [SerializeField] private List<LevelDataSO> levels = new List<LevelDataSO>();
    [SerializeField] private int currentLevelIndex = 0;

    //[Header("Events")]
    public event Action<LevelObjective> OnObjectiveProgress;
    public event Action OnLevelComplete;
    public event Action OnLevelFailed;

    private LevelDataSO currentLevel;

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
        // Eğer sonsuz mod ise level sistemi çalışmasın
        bool isEndlessMode = PlayerPrefs.GetInt("IsEndlessMode", 0) == 1;

        if (isEndlessMode)
        {
            Debug.Log("🎮 Sonsuz Mod aktif - Level sistemi devre dışı");
            this.enabled = false; // Bu script'i devre dışı bırak
            return;
        }

        // Ana menüden seçilen level'i yükle
        int selectedLevel = MainMenuLevelSelector.GetSelectedLevel();
        LoadLevel(selectedLevel);
    }

    public void LoadLevel(int levelIndex)
    {
        if (levels == null || levels.Count == 0)
        {
            Debug.LogError("Hiç level eklenmemiş! Project'te LevelDataSO oluştur!");
            return;
        }

        if (levelIndex < 0 || levelIndex >= levels.Count)
        {
            Debug.LogError($"Level {levelIndex} bulunamadı!");
            return;
        }

        currentLevelIndex = levelIndex;
        currentLevel = levels[levelIndex];

        // Objective'leri sıfırla
        foreach (var objective in currentLevel.objectives)
        {
            objective.currentCount = 0;
        }

        Debug.Log($"✅ Level {currentLevel.levelNumber} yüklendi: {currentLevel.levelName}");
    }

    public void OnTileMerged(int tileLevel)
    {
        if (currentLevel == null) return;

        // Her objective'i kontrol et
        foreach (var objective in currentLevel.objectives)
        {
            if (objective.tileLevel == tileLevel && objective.currentCount < objective.targetCount)
            {
                objective.currentCount++;
                OnObjectiveProgress?.Invoke(objective);

                Debug.Log($"🎯 Level {tileLevel} tile oluşturuldu! ({objective.currentCount}/{objective.targetCount})");
            }
        }

        CheckLevelComplete();
    }

    // Board doldu veya hareket kalmadı mı kontrol et
    public void CheckGameOver(IGrid grid)
    {
        // Eğer level zaten tamamlandıysa game over olmaz
        if (IsLevelComplete()) return;

        // Board tamamen dolu mu?
        if (IsBoardFull(grid))
        {
            // Hala hareket edebilir mi kontrol et
            if (!CanMakeAnyMove(grid))
            {
                OnLevelFailed?.Invoke();
                Debug.Log("❌ Board dolu ve hareket kalmadı! Level başarısız.");
            }
        }
    }

    private bool IsBoardFull(IGrid grid)
    {
        for (int x = 0; x < grid.Size; x++)
        {
            for (int y = 0; y < grid.Size; y++)
            {
                if (grid[x, y] == null)
                {
                    return false;
                }
            }
        }
        return true;
    }

    private bool CanMakeAnyMove(IGrid grid)
    {
        // Her yönü kontrol et
        Vector2[] directions = { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

        foreach (var direction in directions)
        {
            if (CanMoveInDirection(grid, direction))
            {
                return true;
            }
        }

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
                        if (grid[targetX, targetY] == null)
                        {
                            return true;
                        }

                        if (CanMergeInDirection(grid, x, y, dx, dy))
                        {
                            return true;
                        }
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

            if (checkX >= 0 && checkX < grid.Size && checkY >= 0 && checkY < grid.Size)
            {
                if (grid[checkX, checkY] != null && grid[checkX, checkY].level == level)
                {
                    sameCount++;
                }
                else
                {
                    break;
                }
            }
        }

        return sameCount >= 3;
    }

    private void CheckLevelComplete()
    {
        if (IsLevelComplete())
        {
            OnLevelComplete?.Invoke();
            Debug.Log($"🎉 Level {currentLevel.levelNumber} tamamlandı!");
        }
    }

    public bool IsLevelComplete()
    {
        if (currentLevel == null) return false;

        foreach (var objective in currentLevel.objectives)
        {
            if (objective.currentCount < objective.targetCount)
            {
                return false;
            }
        }

        return true;
    }

    public void NextLevel()
    {
        if (currentLevelIndex + 1 < levels.Count)
        {
            // Bir sonraki level'i aç
            MainMenuLevelSelector.UnlockNextLevel();

            LoadLevel(currentLevelIndex + 1);
        }
        else
        {
            Debug.Log("🏆 Tüm leveller tamamlandı!");
            // Ana menüye dön veya tebrik ekranı göster
            UnityEngine.SceneManagement.SceneManager.LoadScene("MenuScene");
        }
    }

    public void RestartLevel()
    {
        // Sahneyi yeniden yükle
        UnityEngine.SceneManagement.SceneManager.LoadScene(
            UnityEngine.SceneManagement.SceneManager.GetActiveScene().name
        );
    }

    // Getter'lar
    public LevelDataSO GetCurrentLevel() => currentLevel;
    public int GetCurrentLevelIndex() => currentLevelIndex;
    public int GetTotalLevels() => levels.Count;
}