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

    void Start()
    {
        menuPanel.SetActive(true);
        classicModePanel.SetActive(false);
        levelSelectPanel.SetActive(false);
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
    }
    public void LevelActive()
    {
        menuPanel.SetActive(false);
        levelSelectPanel.SetActive(true);
    }
}
