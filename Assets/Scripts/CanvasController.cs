using UnityEngine;
using UnityEngine.UI;
using System.Collections;

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

    [Header("Artwork Sistemi")]
    [SerializeField] private BlockArtRevealer blockArtRevealer;
    
    [Header("Audio")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip blockRevealSound;

    void Start()
    {
        classicMode.onClick.AddListener(ClassicActive);
        levelMode.onClick.AddListener(LevelActive);
        settingsButton.onClick.AddListener(SettingsActive);

        bool justCompleted = PlayerPrefs.GetInt("LevelJustCompleted", 0) == 1;
    
        Debug.Log($"### CanvasController Start - justCompleted: {justCompleted}");
    
        if (justCompleted)
        {
            Debug.Log("### IF bloğuna GİRDİ");
        
            PlayerPrefs.SetInt("LevelJustCompleted", 0);
            PlayerPrefs.Save();
        
            menuPanel.SetActive(false);
            classicModePanel.SetActive(false);
            levelSelectPanel.SetActive(true);
            sluzzleImage.SetActive(false);
            settingsCanvas.SetActive(false);
        
            Debug.Log("### DoReveal DIREKT çağrılıyor");
            DoReveal();  // Invoke yerine direkt çağır
        }
        else
        {
            Debug.Log("### ELSE bloğuna girdi - ana menü");
            menuPanel.SetActive(true);
            classicModePanel.SetActive(false);
            levelSelectPanel.SetActive(false);
            sluzzleImage.SetActive(true);
            settingsCanvas.SetActive(false);
        }
    }

    void DoReveal()
    {
        Debug.Log("### DoReveal İÇİNDEYİZ!");
    
        if (blockArtRevealer != null)
        {
            int revealed = PlayerPrefs.GetInt("RevealedBlocks", 0);
            Debug.Log($"### RevealedBlocks: {revealed}");
        
            blockArtRevealer.CreateBlocksFromArtwork(0);
            blockArtRevealer.SetupRevealOrder();
        
            int previousBlocks = revealed - 1;
            Debug.Log($"### Önceki bloklar (instant): {previousBlocks}");
        
            if (previousBlocks > 0)
            {
                blockArtRevealer.RevealBlocksInstant(previousBlocks);
            }
        
            // Invoke SİLİNDİ - Direkt çağır
            Debug.Log("### RevealNextBlockAnimated çağrılıyor");
            blockArtRevealer.RevealNextBlockAnimated();
            Debug.Log("### Bitti!");
            
        }
        MainMenuLevelSelector selector = FindObjectOfType<MainMenuLevelSelector>();
        if (selector != null)
        {
            selector.RefreshUI();
        }
    }

    void RevealNewBlock()
    {
        Debug.Log("### RevealNewBlock ÇAĞRILDI!");
        if (blockArtRevealer != null)
        {
            Debug.Log("### RevealNextBlockAnimated çağrılıyor...");
            blockArtRevealer.RevealNextBlockAnimated();
            Debug.Log("### RevealNextBlockAnimated tamamlandı");
        }
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