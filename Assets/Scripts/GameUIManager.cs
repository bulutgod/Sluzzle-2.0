using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
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

    [Header("=== ANIMATION SETTINGS ===")]
    [SerializeField] private float panelAnimationDuration = 0.4f;
    [SerializeField] private float objectivePulseScale = 1.3f;
    [SerializeField] private float objectiveAnimDuration = 0.3f;

    private List<ObjectiveUIItem> objectiveItems = new List<ObjectiveUIItem>();
    private bool isEndlessMode;

    // Objective UI Item class
    private class ObjectiveUIItem
    {
        public GameObject gameObject;
        public TextMeshProUGUI text;
        public Image icon;
        public int lastCount;
        public Coroutine animCoroutine;
        
    }

    private void Start()
    {
        isEndlessMode = PlayerPrefs.GetInt("IsEndlessMode", 0) == 1;

        if (debugMode)
        {
            Debug.Log($"🎮 GAME MODE: {(isEndlessMode ? "ENDLESS/CLASSIC" : "LEVEL")}");
        }

        if (pauseButton != null) pauseButton.SetActive(true);

        // ✅ Panelleri başlangıçta gizle
        HidePanelImmediate(levelCompletePanel);
        HidePanelImmediate(levelFailedPanel);
        HidePanelImmediate(pausePanel);

        // ✅ Objective container'ı temizle (sahne yeniden yüklendiğinde)
        if (objectivesContainer != null)
        {
            for (int i = objectivesContainer.childCount - 1; i >= 0; i--)
            {
                DestroyImmediate(objectivesContainer.GetChild(i).gameObject);
            }
        }
        objectiveItems.Clear();

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
        Debug.Log("Setting up ENDLESS mode UI");

        SetActiveIfNotNull(scorePanel, true);
        SetActiveIfNotNull(highScoreText, true);
        SetActiveIfNotNull(timerText, true);

        SetActiveIfNotNull(levelInfoPanel, false);
    }

    private void SetupLevelMode()
    {
        Debug.Log("Setting up LEVEL mode UI");

        SetActiveIfNotNull(scorePanel, false);
        SetActiveIfNotNull(highScoreText, false);
        SetActiveIfNotNull(timerText, false);

        SetActiveIfNotNull(levelInfoPanel, true);

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

    #region === PANEL ANIMATIONS ===

    private void HidePanelImmediate(GameObject panel)
    {
        if (panel == null) return;

        CanvasGroup cg = panel.GetComponent<CanvasGroup>();
        if (cg == null) cg = panel.AddComponent<CanvasGroup>();

        cg.alpha = 0f;
        panel.transform.localScale = Vector3.zero;
        panel.SetActive(false);
    }

    private IEnumerator ShowPanelAnimation(GameObject panel)
    {
        if (panel == null) yield break;

        panel.SetActive(true);

        CanvasGroup cg = panel.GetComponent<CanvasGroup>();
        if (cg == null) cg = panel.AddComponent<CanvasGroup>();

        float elapsed = 0f;
        cg.alpha = 0f;
        panel.transform.localScale = Vector3.zero;

        while (elapsed < panelAnimationDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = elapsed / panelAnimationDuration;

            // Ease Out Back
            float eased = EaseOutBack(t);

            panel.transform.localScale = Vector3.LerpUnclamped(Vector3.zero, Vector3.one, eased);
            cg.alpha = Mathf.Lerp(0f, 1f, t * 2f); // Fade daha hızlı

            yield return null;
        }

        panel.transform.localScale = Vector3.one;
        cg.alpha = 1f;
    }

    private IEnumerator HidePanelAnimation(GameObject panel)
    {
        if (panel == null) yield break;

        CanvasGroup cg = panel.GetComponent<CanvasGroup>();
        if (cg == null) cg = panel.AddComponent<CanvasGroup>();

        float elapsed = 0f;
        float duration = panelAnimationDuration * 0.5f;

        while (elapsed < duration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = elapsed / duration;

            panel.transform.localScale = Vector3.Lerp(Vector3.one, Vector3.zero, t);
            cg.alpha = Mathf.Lerp(1f, 0f, t);

            yield return null;
        }

        panel.SetActive(false);
    }

    #endregion

    #region === LEVEL MODE ===

    public void RefreshLevelUI()
    {
        if (isEndlessMode || LevelManager.Instance == null) return;

        LevelDataSO level = LevelManager.Instance.GetCurrentLevel();
        if (level == null) return;

        if (levelNameText != null)
        {
            levelNameText.text = $"Level {level.levelNumber}";
        }

        CreateObjectiveUI(level);
    }

    private void CreateObjectiveUI(LevelDataSO level)
    {
        if (objectivesContainer == null) return;

        // ✅ ÖNCEKİ OBJECTIVE'LERİ TEMİZLE
        // Önce listeyi temizle
        foreach (var item in objectiveItems)
        {
            if (item.animCoroutine != null)
            {
                StopCoroutine(item.animCoroutine);
            }
        }
        objectiveItems.Clear();

        // Sonra tüm child'ları yok et
        for (int i = objectivesContainer.childCount - 1; i >= 0; i--)
        {
            DestroyImmediate(objectivesContainer.GetChild(i).gameObject);
        }

        // Yeni objective'leri oluştur
        foreach (var objective in level.objectives)
        {
            GameObject itemGO = new GameObject($"Objective_{objective.tileLevel}");
            itemGO.transform.SetParent(objectivesContainer, false);
            itemGO.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
            
            RectTransform itemRect = itemGO.AddComponent<RectTransform>();
            itemRect.sizeDelta = new Vector2(200, 50);

            HorizontalLayoutGroup hlg = itemGO.AddComponent<HorizontalLayoutGroup>();
            hlg.spacing = -20;
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

            // Item kaydet
            ObjectiveUIItem item = new ObjectiveUIItem
            {
                gameObject = itemGO,
                text = text,
                icon = icon,
                lastCount = 0,
                
            };

            UpdateObjectiveText(item, objective);
            objectiveItems.Add(item);
        }

        Debug.Log($"✅ {level.objectives.Count} objective oluşturuldu");
    }

    private void OnObjectiveProgress(LevelObjective obj)
    {
        LevelDataSO level = LevelManager.Instance?.GetCurrentLevel();
        if (level == null) return;

        for (int i = 0; i < level.objectives.Count && i < objectiveItems.Count; i++)
        {
            var objective = level.objectives[i];
            var item = objectiveItems[i];

            // Sayı değiştiyse animasyon oynat
            if (item.lastCount != objective.currentCount)
            {
                bool isIncrease = objective.currentCount > item.lastCount;
                bool isComplete = objective.currentCount >= objective.targetCount;

                // Önceki animasyonu durdur
                if (item.animCoroutine != null)
                {
                    StopCoroutine(item.animCoroutine);
                }

                item.animCoroutine = StartCoroutine(AnimateObjectiveChange(item, objective, isIncrease, isComplete));
                item.lastCount = objective.currentCount;
            }
        }
    }

    private IEnumerator AnimateObjectiveChange(ObjectiveUIItem item, LevelObjective objective, bool isIncrease, bool isComplete)
    {
        if (item.icon == null || item.text == null) yield break;

        Transform iconTransform = item.icon.transform;
        Vector3 originalScale = Vector3.one;
        Vector3 targetScale = originalScale * objectivePulseScale;

        Color originalTextColor = item.text.color;
        Color flashColor = isIncrease ? Color.green : Color.red;
        Color originalIconColor = item.icon.color;

        float elapsed = 0f;

        // Animasyon - Büyüme + Renk flash
        while (elapsed < objectiveAnimDuration)
        {
            if (iconTransform == null) yield break;

            elapsed += Time.deltaTime;
            float t = elapsed / objectiveAnimDuration;

            // Scale: büyü sonra küçül
            float scaleT;
            if (t < 0.5f)
            {
                scaleT = t * 2f;
                iconTransform.localScale = Vector3.Lerp(originalScale, targetScale, EaseOutCubic(scaleT));
            }
            else
            {
                scaleT = (t - 0.5f) * 2f;
                iconTransform.localScale = Vector3.Lerp(targetScale, originalScale, EaseOutCubic(scaleT));
            }

            // Text renk flash
            item.text.color = Color.Lerp(flashColor, originalTextColor, EaseOutCubic(t));

            yield return null;
        }

        iconTransform.localScale = originalScale;

        // Text güncelle
        UpdateObjectiveText(item, objective);

        // Tamamlandıysa özel animasyon
        if (isComplete)
        {
            yield return StartCoroutine(PlayObjectiveCompleteAnimation(item));
        }
    }

    private IEnumerator PlayObjectiveCompleteAnimation(ObjectiveUIItem item)
    {
        if (item.icon == null) yield break;

        Transform iconTransform = item.icon.transform;
        Color goldColor = new Color(1f, 0.84f, 0f);

        item.text.color = goldColor;

        float elapsed = 0f;
        float duration = 0.5f;

        // Döndürme + Scale bounce
        while (elapsed < duration)
        {
            if (iconTransform == null) yield break;

            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            // Döndür
            iconTransform.rotation = Quaternion.Euler(0, 0, Mathf.Lerp(0, 360, t));

            // Bounce scale
            float bounce = EaseOutBounce(t);
            iconTransform.localScale = Vector3.one * (1f + 0.3f * (1f - bounce));

            yield return null;
        }

        iconTransform.rotation = Quaternion.identity;
        iconTransform.localScale = Vector3.one;
    }

    private void UpdateObjectiveText(ObjectiveUIItem item, LevelObjective objective)
    {
        if (item.text == null) return;

        string status = objective.currentCount >= objective.targetCount ? " ✓" : "";
        item.text.text = $"{objective.currentCount}/{objective.targetCount}{status}";
        item.text.color = objective.currentCount >= objective.targetCount ? Color.green : Color.white;
    }

    private void OnLevelComplete()
    {
        Debug.Log("🎉 Level Complete!");
        StartCoroutine(ShowLevelCompleteSequence());
    }

    private IEnumerator ShowLevelCompleteSequence()
    {
        // Küçük bir gecikme
        yield return new WaitForSecondsRealtime(0.3f);

        if (gameManagerObject != null) gameManagerObject.SetActive(false);
        Time.timeScale = 0f;

        yield return StartCoroutine(ShowPanelAnimation(levelCompletePanel));
    }

    private void OnLevelFailed()
    {
        Debug.Log("💀 Level Failed!");
        StartCoroutine(ShowLevelFailedSequence());
    }

    private IEnumerator ShowLevelFailedSequence()
    {
        yield return new WaitForSecondsRealtime(0.3f);

        if (gameManagerObject != null) gameManagerObject.SetActive(false);
        Time.timeScale = 0f;

        yield return StartCoroutine(ShowPanelAnimation(levelFailedPanel));
    }

    #endregion

    #region === PAUSE MENU ===

    public void OnPauseButton()
    {
        StartCoroutine(ShowPauseSequence());
    }

    private IEnumerator ShowPauseSequence()
    {
        Time.timeScale = 0f;
        yield return StartCoroutine(ShowPanelAnimation(pausePanel));
    }

    public void OnResumeButton()
    {
        StartCoroutine(HidePauseSequence());
    }

    private IEnumerator HidePauseSequence()
    {
        yield return StartCoroutine(HidePanelAnimation(pausePanel));
        Time.timeScale = 1f;
    }

    #endregion

    #region === BUTTONS ===

    public void OnNextLevelButton()
    {
        StartCoroutine(NextLevelSequence());
    }

    private IEnumerator NextLevelSequence()
    {
        yield return StartCoroutine(HidePanelAnimation(levelCompletePanel));

        Time.timeScale = 1f;
        if (gameManagerObject != null) gameManagerObject.SetActive(true);
        LevelManager.Instance?.NextLevel();
        RefreshLevelUI();
    }

    public void OnRestartButton()
    {
        StartCoroutine(RestartSequence());
    }

    private IEnumerator RestartSequence()
    {
        // Aktif paneli kapat
        if (levelCompletePanel != null && levelCompletePanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(levelCompletePanel));
        }
        if (levelFailedPanel != null && levelFailedPanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(levelFailedPanel));
        }
        if (pausePanel != null && pausePanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(pausePanel));
        }

        Time.timeScale = 1f;
        if (gameManagerObject != null) gameManagerObject.SetActive(true);

        if (isEndlessMode)
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene(
                UnityEngine.SceneManagement.SceneManager.GetActiveScene().name
            );
        }
        else
        {
            LevelManager.Instance?.RestartLevel();
        }
    }

    public void OnMainMenuButton()
    {
        StartCoroutine(MainMenuSequence());
    }

    private IEnumerator MainMenuSequence()
    {
        // Aktif paneli kapat
        if (pausePanel != null && pausePanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(pausePanel));
        }
        if (levelCompletePanel != null && levelCompletePanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(levelCompletePanel));
        }
        if (levelFailedPanel != null && levelFailedPanel.activeSelf)
        {
            yield return StartCoroutine(HidePanelAnimation(levelFailedPanel));
        }

        Time.timeScale = 1f;
        UnityEngine.SceneManagement.SceneManager.LoadScene("MainMenu");
    }

    #endregion

    #region === EASING FUNCTIONS ===

    private float EaseOutBack(float t)
    {
        const float c1 = 1.70158f;
        const float c3 = c1 + 1f;
        return 1f + c3 * Mathf.Pow(t - 1f, 3f) + c1 * Mathf.Pow(t - 1f, 2f);
    }

    private float EaseOutCubic(float t)
    {
        return 1f - Mathf.Pow(1f - t, 3f);
    }

    private float EaseOutBounce(float t)
    {
        const float n1 = 7.5625f;
        const float d1 = 2.75f;

        if (t < 1f / d1)
        {
            return n1 * t * t;
        }
        else if (t < 2f / d1)
        {
            return n1 * (t -= 1.5f / d1) * t + 0.75f;
        }
        else if (t < 2.5f / d1)
        {
            return n1 * (t -= 2.25f / d1) * t + 0.9375f;
        }
        else
        {
            return n1 * (t -= 2.625f / d1) * t + 0.984375f;
        }
    }

    #endregion
}