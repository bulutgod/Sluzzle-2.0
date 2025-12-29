using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;
using System.Collections;

public class MainMenuLevelSelector : MonoBehaviour
{
    [Header("UI Panels")]
    [SerializeField] private GameObject mainPanel;
    [SerializeField] private GameObject levelSelectPanel;
    [SerializeField] private GameObject classicModePanel;
    [SerializeField] private CanvasGroup levelSelectCanvasGroup;

    [Header("Level Data")]
    [SerializeField] private LevelDataSO[] allLevels;

    [Header("UI")]
    [SerializeField] private Transform levelButtonsContainer;
    [SerializeField] private GameObject levelButtonPrefab;

    [Header("Panel Animasyonu")]
    [SerializeField] private float panelFadeDuration = 0.3f;
    [SerializeField] private float buttonSpawnDelay = 0.05f;

    [Header("Arka Plan")]
    [SerializeField] private Image panelBackground;
    [SerializeField] private ParticleSystem backgroundParticles;

    [Header("Scene Names")]
    [SerializeField] private string gameSceneName = "SampleScene";

    [Header("Audio")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip buttonHoverSound;
    [SerializeField] private AudioClip buttonClickSound;
    [SerializeField] private AudioClip panelOpenSound;

    [Header("Save System")]
    private const string UNLOCKED_LEVELS_KEY = "UnlockedLevels";
    private const string SELECTED_LEVEL_KEY = "SelectedLevel";
    private const string LEVEL_STARS_KEY = "LevelStars_"; // LevelStars_0, LevelStars_1, etc.

    private void Start()
    {
        ShowMainPanel();
        CreateTitleShadow();

        if (levelSelectPanel != null && levelSelectCanvasGroup == null)
        {
            levelSelectCanvasGroup = levelSelectPanel.GetComponent<CanvasGroup>();
            if (levelSelectCanvasGroup == null)
                levelSelectCanvasGroup = levelSelectPanel.AddComponent<CanvasGroup>();
        }

       
        if (levelSelectCanvasGroup != null)
        {
            levelSelectCanvasGroup.alpha = 1f;
        }
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
        if (levelSelectPanel != null)
        {
            levelSelectPanel.SetActive(true);

            
            if (levelSelectCanvasGroup != null)
            {
                levelSelectCanvasGroup.alpha = 1f;
            }
        }

        PlaySound(panelOpenSound);
        CreateLevelButtons();
    }

    private IEnumerator AnimatePanelOpen()
    {
        if (levelSelectCanvasGroup != null)
        {
            levelSelectCanvasGroup.alpha = 0f;

            float elapsed = 0f;
            while (elapsed < panelFadeDuration)
            {
                elapsed += Time.deltaTime;
                levelSelectCanvasGroup.alpha = elapsed / panelFadeDuration;
                yield return null;
            }
            levelSelectCanvasGroup.alpha = 1f;
        }
    }

    public void StartEndlessMode()
    {
        PlayerPrefs.SetInt("IsEndlessMode", 1);
        PlayerPrefs.Save();
        Debug.Log("Sonsuz mod başlatılıyor...");
        SceneManager.LoadScene(gameSceneName);
    }

    private void CreateLevelButtons()
    {
        if (levelButtonsContainer == null)
        {
            Debug.LogError("Level Buttons Container atanmamış!");
            return;
        }

        // Önceki butonları temizle
        foreach (Transform child in levelButtonsContainer)
        {
            Destroy(child.gameObject);
        }

        int unlockedLevels = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);

        for (int i = 0; i < allLevels.Length; i++)
        {
            int levelIndex = i;
            LevelDataSO level = allLevels[i];
            bool isUnlocked = levelIndex < unlockedLevels;
            bool isCurrentLevel = levelIndex == unlockedLevels - 1;
            int starCount = PlayerPrefs.GetInt(LEVEL_STARS_KEY + levelIndex, 0);

            GameObject buttonObj = CreateModernLevelButton(level, levelIndex, isUnlocked, isCurrentLevel, starCount);

            // Entrance animasyonu
            ModernLevelButton modernButton = buttonObj.GetComponent<ModernLevelButton>();
            if (modernButton != null)
            {
                modernButton.PlayEntranceAnimation(i * buttonSpawnDelay);
            }

            Button btn = buttonObj.GetComponent<Button>();
            if (btn != null && isUnlocked)
            {
                btn.onClick.AddListener(() => OnLevelButtonClicked(levelIndex));
            }
        }
    }

    private GameObject CreateModernLevelButton(LevelDataSO level, int index, bool isUnlocked, bool isCurrentLevel, int starCount)
    {
        // Ana buton objesi
        GameObject buttonObj = new GameObject($"LevelButton_{index + 1}");
        buttonObj.transform.SetParent(levelButtonsContainer, false);

        // RectTransform
        RectTransform rect = buttonObj.AddComponent<RectTransform>();
        rect.sizeDelta = new Vector2(140, 140);

        // Button component
        Button btn = buttonObj.AddComponent<Button>();

        // Ana arka plan (yuvarlak köşeli)
        Image bgImage = buttonObj.AddComponent<Image>();
        bgImage.color = Color.white;

        // Gölge efekti için child obje
        GameObject shadowObj = CreateShadow(buttonObj.transform);

        // İç kısım (gradient efekti için)
        GameObject innerBg = CreateInnerBackground(buttonObj.transform);

        // Glow efekti
        GameObject glowObj = CreateGlowEffect(buttonObj.transform);

        // Kilit ikonu
        GameObject lockObj = CreateLockIcon(buttonObj.transform);

        // Level numarası
        GameObject textObj = CreateLevelText(buttonObj.transform, index + 1);

        // Yıldızlar
        GameObject[] starsArray = CreateStars(buttonObj.transform);

        // NEW badge
        GameObject newBadge = CreateNewBadge(buttonObj.transform);

        // ModernLevelButton component ekle
        ModernLevelButton modernButton = buttonObj.AddComponent<ModernLevelButton>();
        modernButton.backgroundImage = innerBg.GetComponent<Image>();
        modernButton.levelNumberText = textObj.GetComponent<TextMeshProUGUI>();
        modernButton.lockIcon = lockObj;
        modernButton.stars = starsArray;
        modernButton.glowEffect = glowObj;
        modernButton.newBadge = newBadge;

        // Setup çağır
        modernButton.Setup(index, isUnlocked, isCurrentLevel, starCount);

        // Button transition ayarları
        ColorBlock colors = btn.colors;
        colors.normalColor = Color.white;
        colors.highlightedColor = Color.white;
        colors.pressedColor = new Color(0.9f, 0.9f, 0.9f);
        colors.disabledColor = new Color(0.6f, 0.6f, 0.6f);
        btn.colors = colors;
        btn.transition = Selectable.Transition.ColorTint;

        return buttonObj;
    }

    private GameObject CreateShadow(Transform parent)
    {
        GameObject shadow = new GameObject("Shadow");
        shadow.transform.SetParent(parent, false);

        RectTransform rect = shadow.AddComponent<RectTransform>();
        rect.sizeDelta = new Vector2(145, 145);
        rect.anchoredPosition = new Vector2(3, -3);

        Image img = shadow.AddComponent<Image>();
        img.color = new Color(0, 0, 0, 0.3f);

        // Shadow arkada kalsın
        shadow.transform.SetAsFirstSibling();

        return shadow;
    }

    private GameObject CreateInnerBackground(Transform parent)
    {
        GameObject inner = new GameObject("InnerBackground");
        inner.transform.SetParent(parent, false);

        RectTransform rect = inner.AddComponent<RectTransform>();
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.sizeDelta = new Vector2(-8, -8);
        rect.anchoredPosition = Vector2.zero;

        Image img = inner.AddComponent<Image>();
        img.color = Color.white;

        return inner;
    }

    private GameObject CreateGlowEffect(Transform parent)
    {
        GameObject glow = new GameObject("Glow");
        glow.transform.SetParent(parent, false);

        RectTransform rect = glow.AddComponent<RectTransform>();
        rect.sizeDelta = new Vector2(160, 160);
        rect.anchoredPosition = Vector2.zero;

        Image img = glow.AddComponent<Image>();
        img.color = new Color(1f, 0.9f, 0.3f, 0.5f);

        // Glow arkada kalsın
        glow.transform.SetAsFirstSibling();

        return glow;
    }

    private GameObject CreateLockIcon(Transform parent)
    {
        GameObject lockObj = new GameObject("LockIcon");
        lockObj.transform.SetParent(parent, false);

        RectTransform rect = lockObj.AddComponent<RectTransform>();
        rect.sizeDelta = new Vector2(50, 50);
        rect.anchoredPosition = Vector2.zero;

        TextMeshProUGUI text = lockObj.AddComponent<TextMeshProUGUI>();
        text.text = "🔒";
        text.fontSize = 40;
        text.alignment = TextAlignmentOptions.Center;
        text.color = new Color(0.3f, 0.3f, 0.3f);

        return lockObj;
    }

    private GameObject CreateLevelText(Transform parent, int levelNumber)
    {
        GameObject textObj = new GameObject("LevelNumber");
        textObj.transform.SetParent(parent, false);

        RectTransform rect = textObj.AddComponent<RectTransform>();
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.sizeDelta = Vector2.zero;
        rect.anchoredPosition = new Vector2(0, 10);

        TextMeshProUGUI text = textObj.AddComponent<TextMeshProUGUI>();
        text.text = levelNumber.ToString();
        text.fontSize = 48;
        text.fontStyle = FontStyles.Bold;
        text.alignment = TextAlignmentOptions.Center;
        text.color = Color.white;

        // Outline efekti
        text.outlineWidth = 0.2f;
        text.outlineColor = new Color(0, 0, 0, 0.5f);

        return textObj;
    }

    private GameObject[] CreateStars(Transform parent)
    {
        GameObject starsContainer = new GameObject("Stars");
        starsContainer.transform.SetParent(parent, false);

        RectTransform containerRect = starsContainer.AddComponent<RectTransform>();
        containerRect.anchorMin = new Vector2(0.5f, 0);
        containerRect.anchorMax = new Vector2(0.5f, 0);
        containerRect.pivot = new Vector2(0.5f, 0);
        containerRect.sizeDelta = new Vector2(100, 30);
        containerRect.anchoredPosition = new Vector2(0, 8);

        // Horizontal Layout
        HorizontalLayoutGroup layout = starsContainer.AddComponent<HorizontalLayoutGroup>();
        layout.spacing = 2;
        layout.childAlignment = TextAnchor.MiddleCenter;
        layout.childControlWidth = false;
        layout.childControlHeight = false;

        GameObject[] stars = new GameObject[3];

        for (int i = 0; i < 3; i++)
        {
            GameObject star = new GameObject($"Star_{i}");
            star.transform.SetParent(starsContainer.transform, false);

            RectTransform starRect = star.AddComponent<RectTransform>();
            starRect.sizeDelta = new Vector2(25, 25);

            TextMeshProUGUI starText = star.AddComponent<TextMeshProUGUI>();
            starText.text = "⭐";
            starText.fontSize = 20;
            starText.alignment = TextAlignmentOptions.Center;

            stars[i] = star;
        }

        return stars;
    }

    private GameObject CreateNewBadge(Transform parent)
    {
        GameObject badge = new GameObject("NewBadge");
        badge.transform.SetParent(parent, false);

        RectTransform rect = badge.AddComponent<RectTransform>();
        rect.anchorMin = new Vector2(1, 1);
        rect.anchorMax = new Vector2(1, 1);
        rect.pivot = new Vector2(1, 1);
        rect.sizeDelta = new Vector2(45, 25);
        rect.anchoredPosition = new Vector2(5, 5);

        Image bg = badge.AddComponent<Image>();
        bg.color = new Color(1f, 0.3f, 0.3f);

        // NEW yazısı
        GameObject textObj = new GameObject("Text");
        textObj.transform.SetParent(badge.transform, false);

        RectTransform textRect = textObj.AddComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.sizeDelta = Vector2.zero;

        TextMeshProUGUI text = textObj.AddComponent<TextMeshProUGUI>();
        text.text = "NEW";
        text.fontSize = 14;
        text.fontStyle = FontStyles.Bold;
        text.alignment = TextAlignmentOptions.Center;
        text.color = Color.white;

        return badge;
    }

    private void OnLevelButtonClicked(int levelIndex)
    {
        StartCoroutine(LevelSelectAnimation(levelIndex));
    }

    private IEnumerator LevelSelectAnimation(int levelIndex)
    {
        PlaySound(buttonClickSound);

        // Kısa bir bekleme (animasyon için)
        yield return new WaitForSeconds(0.3f);

        // Level'i kaydet ve sahneyi yükle
        PlayerPrefs.SetInt(SELECTED_LEVEL_KEY, levelIndex);
        PlayerPrefs.SetInt("IsEndlessMode", 0);
        PlayerPrefs.Save();

        Debug.Log($"Level {levelIndex + 1} seçildi!");
        SceneManager.LoadScene(gameSceneName);
    }

    private void PlaySound(AudioClip clip)
    {
        if (audioSource != null && clip != null)
        {
            audioSource.PlayOneShot(clip);
        }
    }

    // Static metodlar
    public static void UnlockNextLevel()
    {
        int currentUnlocked = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);
        PlayerPrefs.SetInt(UNLOCKED_LEVELS_KEY, currentUnlocked + 1);
        PlayerPrefs.Save();
        Debug.Log($"Level {currentUnlocked + 1} açıldı!");
    }

    public static void SetLevelStars(int levelIndex, int stars)
    {
        int currentStars = PlayerPrefs.GetInt(LEVEL_STARS_KEY + levelIndex, 0);
        if (stars > currentStars)
        {
            PlayerPrefs.SetInt(LEVEL_STARS_KEY + levelIndex, stars);
            PlayerPrefs.Save();
        }
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
}