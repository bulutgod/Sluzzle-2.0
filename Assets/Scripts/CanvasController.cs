using UnityEngine;
using UnityEngine.UI;

public class CanvasController : MonoBehaviour
{
    [Header("Buttons")]
    [SerializeField] private Button classicMode;
    [SerializeField] private Button levelMode;
    [SerializeField] private Button settingsButton;

    [Header("Panels")]
    [SerializeField] private GameObject classicModePanel;
    [SerializeField] private GameObject levelSelectPanel;
    [SerializeField] private GameObject menuPanel;
    [SerializeField] private GameObject sluzzleImage;
    [SerializeField] private GameObject settingsCanvas;

    void Start()
    {
        menuPanel.SetActive(true);
        classicModePanel.SetActive(false);
        levelSelectPanel.SetActive(false);
        sluzzleImage.SetActive(true);
        settingsCanvas.SetActive(false);
    }

    
    void Update()
    {
        classicMode.onClick.AddListener(ClassicActive);
        levelMode.onClick.AddListener(LevelActive);
        settingsButton.onClick.AddListener(SettingsActive);
    }

    public void ClassicActive()
    {
        menuPanel.SetActive(false);
        classicModePanel.SetActive(true);
        sluzzleImage.SetActive(false);
        settingsCanvas.SetActive(false);
    }
    public void LevelActive()
    {
        menuPanel.SetActive(false);
        levelSelectPanel.SetActive(true);
        sluzzleImage.SetActive(false);
        settingsCanvas.SetActive(false);
    }
    public void SettingsActive()
    { 
        menuPanel.SetActive(false);
        settingsCanvas.SetActive(true);
    }
}
