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
    [SerializeField] private GameObject sluzzleImage;
    
    [Header("Level Data")]
    [SerializeField] private LevelDataSO[] allLevels;

    [Header("Button Sprite")]
    [SerializeField] private Sprite buttonSprite;

    [Header("Scroll Setup")]
    [SerializeField] private ScrollRect scrollRect;
    [SerializeField] private RectTransform content;
    [SerializeField] private GameObject levelButtonPrefab; // Senin hazırladığın prefab

    [Header("Scene Names")]
    [SerializeField] private string gameSceneName = "SampleScene";

    [Header("Audio")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip buttonClickSound;
    [SerializeField] private AudioClip panelOpenSound;

    [Header("Save System")]
    private const string UNLOCKED_LEVELS_KEY = "UnlockedLevels";
    private const string SELECTED_LEVEL_KEY = "SelectedLevel";

    private List<GameObject> levelButtons = new List<GameObject>();
    private int totalLevels;

    private void Start()
    {
        ShowMainPanel();
        CreateTitleShadow();
        totalLevels = allLevels != null ? allLevels.Length : 100;
    }

    public void ShowMainPanel()
    {
        Time.timeScale = 1f;
        if (mainPanel != null)
        {
            mainPanel.SetActive(true); 
            sluzzleImage.SetActive(true);
        }
        if (levelSelectPanel != null) levelSelectPanel.SetActive(false);
        if (classicModePanel != null) classicModePanel.SetActive(false);
    }

    public void ShowLevelSelectPanel()
    {
        if (mainPanel != null) mainPanel.SetActive(false);
        if (levelSelectPanel != null) levelSelectPanel.SetActive(true);

        PlaySound(panelOpenSound);
        CreateAllLevels();
    }

    private void CreateAllLevels()
    {
        // NULL kontrol
        if (levelButtonPrefab == null)
        {
            Debug.LogError("levelButtonPrefab atanmamış! Inspector'dan bir prefab ata.");
            return;
        }
        if (content == null)
        {
            Debug.LogError("content atanmamış! LevelButtonsContainer'ı ata.");
            return;
        }

        // Önceki butonları temizle
        foreach (var btn in levelButtons)
        {
            if (btn != null) Destroy(btn);
        }
        levelButtons.Clear();

        // Grid Layout Group kullan (zaten var)
        GridLayoutGroup gridLayout = content.GetComponent<GridLayoutGroup>();
        if (gridLayout == null)
        {
            gridLayout = content.gameObject.AddComponent<GridLayoutGroup>();
        }
        gridLayout.constraint = GridLayoutGroup.Constraint.FixedColumnCount;
        gridLayout.constraintCount = 1; // Tek sütun
        gridLayout.childAlignment = TextAnchor.LowerCenter; // Aşağıdan başla
        gridLayout.startAxis = GridLayoutGroup.Axis.Vertical;
        gridLayout.startCorner = GridLayoutGroup.Corner.LowerLeft; // AŞAĞIDAN YUKARI

        // Content Size Fitter ekle
        ContentSizeFitter fitter = content.GetComponent<ContentSizeFitter>();
        if (fitter == null)
        {
            fitter = content.gameObject.AddComponent<ContentSizeFitter>();
        }
        fitter.verticalFit = ContentSizeFitter.FitMode.PreferredSize;

        int unlockedLevels = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);

        // Tüm levelleri oluştur
        for (int i = 0; i < totalLevels; i++)
        {
            int levelIndex = i;
            bool isUnlocked = levelIndex < unlockedLevels;
            
            GameObject buttonObj = Instantiate(levelButtonPrefab, content);
            
            // Sprite'ı ayarla (hepsi aynı)
            Image bgImage = buttonObj.GetComponent<Image>();
            if (bgImage != null)
            {
                bgImage.sprite = buttonSprite;
            }

            // Numarayı ayarla - TÜM TextMeshPro bileşenlerini kontrol et
            TextMeshProUGUI[] allTexts = buttonObj.GetComponentsInChildren<TextMeshProUGUI>(true);
            
            if (allTexts.Length > 0)
            {
                foreach (var txt in allTexts)
                {
                    txt.text = (levelIndex + 1).ToString();
                    txt.transform.SetAsLastSibling(); // En üste çıkar (render sırasında)
                    txt.color = Color.firebrick;// Rengi beyaz yap
                    txt.fontSize = 80; // Font büyüt
                }
            }
            else
            {
                Debug.LogWarning($"Level {levelIndex + 1} butonunda TextMeshProUGUI bulunamadı!");
            }

            // Button click - SADECE UNLOCK ISE
            Button btn = buttonObj.GetComponent<Button>();
            if (btn != null)
            {
                btn.interactable = isUnlocked;
                if (isUnlocked)
                {
                    btn.onClick.AddListener(() => OnLevelButtonClicked(levelIndex));
                }
            }

            // Kilitli görünüm
            if (!isUnlocked)
            {
                if (bgImage != null)
                {
                    bgImage.color = new Color(0.5f, 0.5f, 0.5f); // Gri yap
                }
            }

            levelButtons.Add(buttonObj);
        }

        // Scroll'u en alta al (Level 1'den başla)
        Canvas.ForceUpdateCanvases();
        scrollRect.verticalNormalizedPosition = 0f;
    }

    private void OnLevelButtonClicked(int levelIndex)
    {
        int unlockedLevels = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);
        
        // Kilitli level kontrolü
        if (levelIndex >= unlockedLevels)
        {
            Debug.Log($"Level {levelIndex + 1} kilitli!");
            return;
        }

        StartCoroutine(LevelSelectAnimation(levelIndex));
    }

    private IEnumerator LevelSelectAnimation(int levelIndex)
    {
        PlaySound(buttonClickSound);
        yield return new WaitForSeconds(0.3f);

        PlayerPrefs.SetInt(SELECTED_LEVEL_KEY, levelIndex);
        PlayerPrefs.SetInt("IsEndlessMode", 0);
        
        // LEVEL MODE HER ZAMAN 6x6
        BoardSizeManager.Instance.SetBoardSize(6);
        
        PlayerPrefs.Save();

        Debug.Log($"Level {levelIndex + 1} başlatılıyor! (6x6 grid)");
        SceneManager.LoadScene(gameSceneName);
    }

    public void StartEndlessMode()
    {
        PlayerPrefs.SetInt("IsEndlessMode", 1);
        
        // Classic mode → Kullanıcının seçtiği size'ı kullan (5, 6, veya 7)
        // BoardSizeManager zaten seçilen değeri tutuyor, değiştirme
        
        PlayerPrefs.Save();
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
}