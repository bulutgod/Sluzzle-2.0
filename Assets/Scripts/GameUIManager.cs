using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class GameUIManager : MonoBehaviour
{
    [Header("=== MODE DETECTION ===")]
    [SerializeField] private bool debugMode = true;

    [Header("=== ENDLESS MODE UI ===")]
    [SerializeField] private GameObject scorePanel;
    [SerializeField] private GameObject highScoreText;
    [SerializeField] private GameObject timerText;
    

    [Header("=== LEVEL MODE UI ===")]
    [SerializeField] private GameObject levelInfoPanel;
    [SerializeField] private TextMeshProUGUI levelNameText;
    [SerializeField] private Transform objectivesContainer;
    [SerializeField] private GameObject levelCompletePanel;
    [SerializeField] private GameObject levelFailedPanel;
    [SerializeField] private TileData[] tileLevels;

    [Header("=== SHARED UI ===")]
    [SerializeField] private GameObject pauseButton;
    [SerializeField] private GameObject pausePanel;

    [Header("=== REFERENCES ===")]
    [SerializeField] private GameObject gameManagerObject;

    private List<TextMeshProUGUI> objectiveTexts = new List<TextMeshProUGUI>();
    private bool isEndlessMode;

    private void Start()
    {
        // Modu belirle
        isEndlessMode = PlayerPrefs.GetInt("IsEndlessMode", 0) == 1;

        if (debugMode)
        {
            Debug.Log($"🎮 GAME MODE: {(isEndlessMode ? "ENDLESS/CLASSIC" : "LEVEL")}");
            Debug.Log($"   PlayerPrefs IsEndlessMode = {PlayerPrefs.GetInt("IsEndlessMode", -1)}");
        }

        // PAUSE her zaman aktif
        if (pauseButton != null) pauseButton.SetActive(true);

        if (isEndlessMode)
        {
            SetupEndlessMode();
        }
        else
        {
            SetupLevelMode();
        }
    }

    private void SetupEndlessMode()
    {
        Debug.Log("🎮 Setting up ENDLESS mode UI");

        // Endless UI AÇ
        SetActiveIfNotNull(scorePanel, true);
        SetActiveIfNotNull(highScoreText, true);
        SetActiveIfNotNull(timerText, true);
        

        // Level UI KAPAT
        SetActiveIfNotNull(levelInfoPanel, false);
        SetActiveIfNotNull(levelCompletePanel, false);
        SetActiveIfNotNull(levelFailedPanel, false);
    }

    private void SetupLevelMode()
    {
        Debug.Log("🎯 Setting up LEVEL mode UI");

        // Endless UI KAPAT
        SetActiveIfNotNull(scorePanel, false);
        SetActiveIfNotNull(highScoreText, false);
        SetActiveIfNotNull(timerText, false);
        

        // Level UI AÇ
        SetActiveIfNotNull(levelInfoPanel, true);
        SetActiveIfNotNull(levelCompletePanel, false);
        SetActiveIfNotNull(levelFailedPanel, false);

        // Event'lere abone ol
        if (LevelManager.Instance != null)
        {
            LevelManager.Instance.OnObjectiveProgress += OnObjectiveProgress;
            LevelManager.Instance.OnLevelComplete += OnLevelComplete;
            LevelManager.Instance.OnLevelFailed += OnLevelFailed;
        }

        Invoke(nameof(RefreshLevelUI), 0.1f);
    }

    private void SetActiveIfNotNull(GameObject obj, bool active)
    {
        if (obj != null) obj.SetActive(active);
    }

    private void OnDestroy()
    {
        if (LevelManager.Instance != null)
        {
            LevelManager.Instance.OnObjectiveProgress -= OnObjectiveProgress;
            LevelManager.Instance.OnLevelComplete -= OnLevelComplete;
            LevelManager.Instance.OnLevelFailed -= OnLevelFailed;
        }
    }

    #region === LEVEL MODE ===

    public void RefreshLevelUI()
    {
        if (isEndlessMode || LevelManager.Instance == null) return;

        LevelDataSO level = LevelManager.Instance.GetCurrentLevel();
        if (level == null) return;

        if (levelNameText != null)
        {
            levelNameText.text = $"Level {level.levelNumber}: {level.levelName}";
        }

        CreateObjectiveUI(level);
    }

    private void CreateObjectiveUI(LevelDataSO level)
    {
        if (objectivesContainer == null) return;

        foreach (Transform child in objectivesContainer)
        {
            Destroy(child.gameObject);
        }
        objectiveTexts.Clear();

        foreach (var objective in level.objectives)
        {
            GameObject itemGO = new GameObject($"Objective_{objective.tileLevel}");
            itemGO.transform.SetParent(objectivesContainer, false);

            RectTransform itemRect = itemGO.AddComponent<RectTransform>();
            itemRect.sizeDelta = new Vector2(200, 50);

            HorizontalLayoutGroup hlg = itemGO.AddComponent<HorizontalLayoutGroup>();
            hlg.spacing = 10;
            hlg.childAlignment = TextAnchor.MiddleLeft;
            hlg.childControlWidth = false;
            hlg.childControlHeight = false;

            // Icon
            GameObject iconGO = new GameObject("Icon");
            iconGO.transform.SetParent(itemGO.transform, false);
            Image icon = iconGO.AddComponent<Image>();

            if (tileLevels != null && objective.tileLevel < tileLevels.Length)
            {
                icon.color = tileLevels[objective.tileLevel].TileColor;
            }

            iconGO.GetComponent<RectTransform>().sizeDelta = new Vector2(40, 40);

            // Text
            GameObject textGO = new GameObject("Count");
            textGO.transform.SetParent(itemGO.transform, false);

            TextMeshProUGUI text = textGO.AddComponent<TextMeshProUGUI>();
            text.fontSize = 28;
            text.color = Color.white;
            text.alignment = TextAlignmentOptions.MidlineLeft;
            textGO.GetComponent<RectTransform>().sizeDelta = new Vector2(100, 40);

            UpdateObjectiveText(text, objective);
            objectiveTexts.Add(text);
        }
    }

    private void OnObjectiveProgress(LevelObjective obj)
    {
        LevelDataSO level = LevelManager.Instance?.GetCurrentLevel();
        if (level == null) return;

        for (int i = 0; i < level.objectives.Count && i < objectiveTexts.Count; i++)
        {
            UpdateObjectiveText(objectiveTexts[i], level.objectives[i]);
        }
    }

    private void UpdateObjectiveText(TextMeshProUGUI text, LevelObjective objective)
    {
        string status = objective.currentCount >= objective.targetCount ? " ✓" : "";
        text.text = $"{objective.currentCount}/{objective.targetCount}{status}";
        text.color = objective.currentCount >= objective.targetCount ? Color.green : Color.white;
    }

    private void OnLevelComplete()
    {
        Debug.Log("🎉 Level Complete!");
        SetActiveIfNotNull(levelCompletePanel, true);
        if (gameManagerObject != null) gameManagerObject.SetActive(false);
        Time.timeScale = 0f;
    }

    private void OnLevelFailed()
    {
        Debug.Log("💀 Level Failed!");
        SetActiveIfNotNull(levelFailedPanel, true);
        if (gameManagerObject != null) gameManagerObject.SetActive(false);
        Time.timeScale = 0f;
    }

    #endregion

    #region === BUTTONS ===

    public void OnNextLevelButton()
    {
        Time.timeScale = 1f;
        SetActiveIfNotNull(levelCompletePanel, false);
        if (gameManagerObject != null) gameManagerObject.SetActive(true);
        LevelManager.Instance?.NextLevel();
        RefreshLevelUI();
    }

    public void OnRestartButton()
    {
        Time.timeScale = 1f;
        SetActiveIfNotNull(levelCompletePanel, false);
        SetActiveIfNotNull(levelFailedPanel, false);
        if (gameManagerObject != null) gameManagerObject.SetActive(true);

        if (isEndlessMode)
        {
            // Endless modda sahneyi yeniden yükle
            UnityEngine.SceneManagement.SceneManager.LoadScene(
                UnityEngine.SceneManagement.SceneManager.GetActiveScene().name
            );
        }
        else
        {
            LevelManager.Instance?.RestartLevel();
        }
    }

    public void OnPauseButton()
    {
        Time.timeScale = 0f;
        SetActiveIfNotNull(pausePanel, true);
    }

    public void OnResumeButton()
    {
        Time.timeScale = 1f;
        SetActiveIfNotNull(pausePanel, false);
    }

    public void OnMainMenuButton()
    {
        Time.timeScale = 1f;
        UnityEngine.SceneManagement.SceneManager.LoadScene("MainMenu");
    }

    #endregion
}