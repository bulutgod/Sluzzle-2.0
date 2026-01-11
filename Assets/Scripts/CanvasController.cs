using UnityEngine;
using UnityEngine.UI;

public class CanvasController : MonoBehaviour
{
    [Header("Buttons")]
    [SerializeField] private Button classicMode;
    [SerializeField] private Button levelMode;

    [Header("Panels")]
    [SerializeField] private GameObject classicModePanel;
    [SerializeField] private GameObject levelSelectPanel;
    [SerializeField] private GameObject menuPanel;
    [SerializeField] private GameObject sluzzleImage;

    void Start()
    {
        menuPanel.SetActive(true);
        classicModePanel.SetActive(false);
        levelSelectPanel.SetActive(false);
        sluzzleImage.SetActive(true);
    }

    
    void Update()
    {
        classicMode.onClick.AddListener(ClassicActive);
        levelMode.onClick.AddListener(LevelActive);
    }

    public void ClassicActive()
    {
        menuPanel.SetActive(false);
        classicModePanel.SetActive(true);
        sluzzleImage.SetActive(false);
    }
    public void LevelActive()
    {
        menuPanel.SetActive(false);
        levelSelectPanel.SetActive(true);
        sluzzleImage.SetActive(false);
    }
}
