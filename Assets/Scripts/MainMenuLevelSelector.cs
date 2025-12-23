using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;

public class MainMenuLevelSelector : MonoBehaviour
{
    [Header("UI Panels")]
    [SerializeField] private GameObject mainPanel;
    [SerializeField] private GameObject levelSelectPanel;

    [Header("Level Data")]
    [SerializeField] private LevelDataSO[] allLevels; // Tüm level'lar

    [Header("UI")]
    [SerializeField] private Transform levelButtonsContainer;
    [SerializeField] private GameObject levelButtonPrefab;

    [Header("Scene Names")]
    [SerializeField] private string gameSceneName = "SampleScene";
    

    [Header("Save System")]
    private const string UNLOCKED_LEVELS_KEY = "UnlockedLevels";
    private const string SELECTED_LEVEL_KEY = "SelectedLevel";

    private void Start()
    {
        // Panel'leri ayarla
        ShowMainPanel();
    }

    // Ana panel'i göster
    public void ShowMainPanel()
    {
        if (mainPanel != null) mainPanel.SetActive(true);
        if (levelSelectPanel != null) levelSelectPanel.SetActive(false);
    }

    // Level seçme panel'ini göster
    public void ShowLevelSelectPanel()
    {
        if (mainPanel != null) mainPanel.SetActive(false);
        if (levelSelectPanel != null) levelSelectPanel.SetActive(true);

        CreateLevelButtons();
    }

    // Sonsuz moda git
    public void StartEndlessMode()
    {
        // Sonsuz mod flag'i ayarla (LevelManager olmasın diye)
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

        // Kaç level açık?
        int unlockedLevels = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1); // Default: sadece level 1

        for (int i = 0; i < allLevels.Length; i++)
        {
            int levelIndex = i;
            LevelDataSO level = allLevels[i];

            GameObject buttonObj = CreateLevelButton(level, levelIndex, levelIndex < unlockedLevels);

            Button btn = buttonObj.GetComponent<Button>();
            if (btn != null)
            {
                btn.onClick.AddListener(() => OnLevelButtonClicked(levelIndex));
            }
        }
    }

    private GameObject CreateLevelButton(LevelDataSO level, int index, bool isUnlocked)
    {
        GameObject buttonObj;

        if (levelButtonPrefab != null)
        {
            // Prefab varsa kullan
            buttonObj = Instantiate(levelButtonPrefab, levelButtonsContainer);
        }
        else
        {
            // Prefab yoksa basit buton oluştur
            buttonObj = new GameObject($"LevelButton_{index}");
            buttonObj.transform.SetParent(levelButtonsContainer, false);

            // Button component
            Button btn = buttonObj.AddComponent<Button>();
            Image img = buttonObj.AddComponent<Image>();
            img.color = isUnlocked ? Color.white : Color.gray;

            // RectTransform
            RectTransform rect = buttonObj.GetComponent<RectTransform>();
            rect.sizeDelta = new Vector2(150, 150);

            // Text
            GameObject textObj = new GameObject("Text");
            textObj.transform.SetParent(buttonObj.transform, false);
            TextMeshProUGUI text = textObj.AddComponent<TextMeshProUGUI>();
            text.text = isUnlocked ? $"Level {level.levelNumber}" : "🔒";
            text.fontSize = 32;
            text.color = Color.black;
            text.alignment = TextAlignmentOptions.Center;

            RectTransform textRect = textObj.GetComponent<RectTransform>();
            textRect.anchorMin = Vector2.zero;
            textRect.anchorMax = Vector2.one;
            textRect.sizeDelta = Vector2.zero;
        }

        // Kilitli level'ı tıklanamaz yap
        Button button = buttonObj.GetComponent<Button>();
        if (button != null)
        {
            button.interactable = isUnlocked;
        }

        return buttonObj;
    }

    private void OnLevelButtonClicked(int levelIndex)
    {
        // Seçilen level'i kaydet
        PlayerPrefs.SetInt(SELECTED_LEVEL_KEY, levelIndex);
        PlayerPrefs.Save();

        Debug.Log($"Level {levelIndex + 1} seçildi! Oyun sahnesi yükleniyor...");

        // Level mod flag'i ayarla
        PlayerPrefs.SetInt("IsEndlessMode", 0);
        PlayerPrefs.Save();

        // Oyun sahnesini yükle
        SceneManager.LoadScene(gameSceneName);
    }

    // Level tamamlandığında çağrılacak (oyun sahnesinden)
    public static void UnlockNextLevel()
    {
        int currentUnlocked = PlayerPrefs.GetInt(UNLOCKED_LEVELS_KEY, 1);
        PlayerPrefs.SetInt(UNLOCKED_LEVELS_KEY, currentUnlocked + 1);
        PlayerPrefs.Save();
        Debug.Log($"Level {currentUnlocked + 1} açıldı!");
    }

    // Seçilen level'i al (oyun sahnesinde kullanılacak)
    public static int GetSelectedLevel()
    {
        return PlayerPrefs.GetInt(SELECTED_LEVEL_KEY, 0);
    }
}