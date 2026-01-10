using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class MainMenuLevelSelector : MonoBehaviour
{
    [Header("UI Panels")]
    [SerializeField] private GameObject mainPanel;
    [SerializeField] private GameObject levelSelectPanel;
    [SerializeField] private GameObject classicModePanel;

    [Header("Level Data")]
    [SerializeField] private LevelDataSO[] allLevels;

    [Header("Button Sprites")]
    [SerializeField] private Sprite level1Sprite;
    [SerializeField] private Sprite normalLevelSprite;

    [Header("Scroll Setup")]
    [SerializeField] private ScrollRect scrollRect;
    [SerializeField] private RectTransform content;
    [SerializeField] private float buttonHeight = 600f; // DAHA BÜYÜK
    [SerializeField] private float buttonWidth = 500f; // DAHA BÜYÜK
    [SerializeField] private float chainSpacing = 5f;
    [SerializeField] private float startOffset = 1; // Level 1 daha aşağıda

    [Header("Scene Names")]
    [SerializeField] private string gameSceneName = "SampleScene";

    [Header("Audio")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip buttonClickSound;
    [SerializeField] private AudioClip panelOpenSound;

    [Header("Save System")]
    private const string UNLOCKED_LEVELS_KEY = "UnlockedLevels";
    private const string SELECTED_LEVEL_KEY = "SelectedLevel";

    private List<LevelButtonItem> buttonPool = new List<LevelButtonItem>();
    private int currentTopIndex = 0;
    private int totalLevels;
    private int visibleButtonCount = 5;

    private class LevelButtonItem
    {
        public GameObject gameObject;
        public RectTransform rectTransform;
        public Image backgroundImage;
        public TextMeshProUGUI numberText;
        public Button button;
        public int levelIndex;
    }

    private void Start()
    {
        ShowMainPanel();
        CreateTitleShadow();
        totalLevels = allLevels != null ? allLevels.Length : 100;
    }

    public void ShowMainPanel()
    {
        Time.timeScale = 1f;
        if (mainPanel != null) mainPanel.SetActive(true);
        if (levelSelectPanel != null) levelSelectPanel.SetActive(false);
        if (classicModePanel != null) classicModePanel.SetActive(false);
    }

    public void ShowLevelSelectPanel()
    {
        if (mainPanel != null) mainPanel.SetActive(false);
        if (levelSelectPanel != null) levelSelectPanel.SetActive(true);

        PlaySound(panelOpenSound);
        InitializeInfiniteScroll();
    }

    private void InitializeInfiniteScroll()
    {
        foreach (var item in buttonPool)
        {
            if (item.gameObject != null)
                Destroy(item.gameObject);
        }
        buttonPool.Clear();

        if (content != null)
        {
            float totalHeight = (totalLevels * (buttonHeight + chainSpacing)) + startOffset;
            content.sizeDelta = new Vector2(content.sizeDelta.x, totalHeight);
        }

        for (int i = 0; i < visibleButtonCount; i++)
        {
            CreateLevelButton(i);
        }

        if (scrollRect != null)
        {
            scrollRect.onValueChanged.AddListener(OnScroll);
            scrollRect.inertia = true; // Kaydırma çalışsın
            scrollRect.decelerationRate = 0.98f; // Yavaşça dursun
            scrollRect.movementType = ScrollRect.MovementType.Clamped; // Elastic YOK
        }

        if (scrollRect != null)
        {
            scrollRect.verticalNormalizedPosition = 0f;
        }

        UpdateVisibleButtons();
    }

    private void CreateLevelButton(int poolIndex)
    {
        if (content == null) return;

        GameObject buttonObj = new GameObject($"LevelButton_{poolIndex}");
        buttonObj.transform.SetParent(content, false);

        RectTransform rect = buttonObj.AddComponent<RectTransform>();
        rect.sizeDelta = new Vector2(buttonWidth, buttonHeight); // Sprite'ın boyutu
        rect.anchorMin = new Vector2(0.5f, 0f);
        rect.anchorMax = new Vector2(0.5f, 0f);
        rect.pivot = new Vector2(0.5f, 0f);
        rect.anchoredPosition = new Vector2(0, (poolIndex * (buttonHeight + chainSpacing)) + startOffset);

        Button btn = buttonObj.AddComponent<Button>();
        Image bgImage = buttonObj.AddComponent<Image>();
        bgImage.sprite = normalLevelSprite;
        bgImage.preserveAspect = false; // Sprite'ı serbest boyutlandır
        bgImage.type = Image.Type.Simple; // Normal scaling

        // Level numarası
        GameObject textObj = new GameObject("LevelNumber");
        textObj.transform.SetParent(buttonObj.transform, false);

        RectTransform textRect = textObj.AddComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.sizeDelta = Vector2.zero;
        textRect.anchoredPosition = Vector2.zero;

        TextMeshProUGUI numberText = textObj.AddComponent<TextMeshProUGUI>();
        numberText.text = (poolIndex + 1).ToString();
        numberText.fontSize = 150; // Font da büyütsün
        numberText.fontStyle = FontStyles.Bold;
        numberText.alignment = TextAlignmentOptions.Center;
        numberText.color = Color.white;
        numberText.outlineWidth = 0.3f;
        numberText.outlineColor = new Color(0, 0, 0, 0.8f);

        LevelButtonItem item = new LevelButtonItem
        {
            gameObject = buttonObj,
            rectTransform = rect,
            backgroundImage = bgImage,
            numberText = numberText,
            button = btn,
            levelIndex = poolIndex
        };

        buttonPool.Add(item);

        btn.onClick.AddListener(() => OnLevelButtonClicked(item.levelIndex));

        ColorBlock colors = btn.colors;
        colors.normalColor = Color.white;
        colors.highlightedColor = new Color(1.1f, 1.1f, 1.1f);
        colors.pressedColor = new Color(0.9f, 0.9f, 0.9f);
        btn.colors = colors;
    }

    private void OnScroll(Vector2 scrollPosition)
    {
        UpdateVisibleButtons();
    }

    private void UpdateVisibleButtons()
    {
        if (content == null || buttonPool.Count == 0) return;

        float contentY = -content.anchoredPosition.y;
        int firstVisibleIndex = Mathf.Max(0, Mathf.FloorToInt((contentY - startOffset) / (buttonHeight + chainSpacing)));

        if (firstVisibleIndex != currentTopIndex)
        {
            currentTopIndex = firstVisibleIndex;
            RepositionButtons();
        }
    }

    private void RepositionButtons()
    {
        for (int i = 0; i < buttonPool.Count; i++)
        {
            LevelButtonItem item = buttonPool[i];
            int newLevelIndex = currentTopIndex + i;

            if (newLevelIndex >= totalLevels)
            {
                item.gameObject.SetActive(false);
                continue;
            }

            item.gameObject.SetActive(true);
            item.levelIndex = newLevelIndex;

            // Pozisyon güncelle
            item.rectTransform.anchoredPosition = new Vector2(0, (newLevelIndex * (buttonHeight + chainSpacing)) + startOffset);

            // Sprite değiştir
            if (newLevelIndex == 0)
            {
                item.backgroundImage.sprite = level1Sprite;
            }
            else
            {
                item.backgroundImage.sprite = normalLevelSprite;
            }

            // NUMARA GÜNCELLE
            item.numberText.text = (newLevelIndex + 1).ToString();
        }
    }

    public void StartEndlessMode()
    {
        PlayerPrefs.SetInt("IsEndlessMode", 1);
        PlayerPrefs.Save();
        SceneManager.LoadScene(gameSceneName);
    }

    private void OnLevelButtonClicked(int levelIndex)
    {
        StartCoroutine(LevelSelectAnimation(levelIndex));
    }

    private IEnumerator LevelSelectAnimation(int levelIndex)
    {
        PlaySound(buttonClickSound);
        yield return new WaitForSeconds(0.3f);

        PlayerPrefs.SetInt(SELECTED_LEVEL_KEY, levelIndex);
        PlayerPrefs.SetInt("IsEndlessMode", 0);
        PlayerPrefs.Save();

        Debug.Log($"Level {levelIndex + 1} başlatılıyor!");
        SceneManager.LoadScene(gameSceneName);
    }

    private void PlaySound(AudioClip clip)
    {
        if (audioSource != null && clip != null)
        {
            audioSource.PlayOneShot(clip);
        }
    }

    public static void UnlockNextLevel()
    {
        int currentUnlocked = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);
        PlayerPrefs.SetInt(UNLOCKED_LEVELS_KEY, currentUnlocked + 1);
        PlayerPrefs.Save();
    }

    public static int GetSelectedLevel()
    {
        return PlayerPrefs.GetInt(SELECTED_LEVEL_KEY, 0);
    }

    void CreateTitleShadow()
    {
        TextMeshProUGUI title = FindObjectOfType<TitleAnimator>()?.GetComponent<TextMeshProUGUI>();
        if (title == null) return;

        GameObject shadow = Instantiate(title.gameObject, title.transform.parent);
        shadow.name = "TitleShadow";

        TextMeshProUGUI shadowText = shadow.GetComponent<TextMeshProUGUI>();
        shadowText.color = new Color(0, 0, 0, 0.3f);
        shadowText.enableVertexGradient = false;

        RectTransform rect = shadow.GetComponent<RectTransform>();
        rect.anchoredPosition += new Vector2(4, -4);

        shadow.transform.SetAsFirstSibling();

        Destroy(shadow.GetComponent<TitleAnimator>());
    }

    void Update()
    {
        UpdateVisibleButtons();
    }
}