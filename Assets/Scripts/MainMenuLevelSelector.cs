using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;
using System.Collections;

public class MainMenuLevelSelector : MonoBehaviour
{
    [Header("Panels")]
    [SerializeField] private GameObject mainPanel;
    [SerializeField] private GameObject artworkPanel;
    [SerializeField] private GameObject settingsCanvas;
    [SerializeField] private GameObject sluzzleImage;

    [Header("Artwork Sistemi")]
    [SerializeField] private BlockArtRevealer blockArtRevealer;

    [Header("Level Butonu")]
    [SerializeField] private Button levelButton;
    [SerializeField] private TextMeshProUGUI levelButtonText;

    [Header("Audio")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip buttonClickSound;
    [SerializeField] private AudioClip blockRevealSound;

    [Header("Scene")]
    [SerializeField] private string gameSceneName = "SampleScene";

    private const string CURRENT_LEVEL_KEY = "CurrentLevel";
    private const string REVEALED_BLOCKS_KEY = "RevealedBlocks";

    private int currentLevel = 1;
    private int revealedBlocks = 0;

    

    void Start()
    {
        
        int currentLevel = PlayerPrefs.GetInt("CurrentLevel", 1); 
        int revealedBlocks = currentLevel; 
        
        SetPanel(mainPanel, true);
        SetPanel(sluzzleImage, false);
        SetPanel(artworkPanel, false);
        
        if (blockArtRevealer != null)
        {
            blockArtRevealer.CreateBlocksFromArtwork(0);
            blockArtRevealer.SetupRevealOrder();
            
            blockArtRevealer.RevealBlocksInstant(revealedBlocks);
        }

        UpdateLevelButton();
    }

    void OnEnable()
    {
        RefreshUI();
    }

    public void RefreshUI()
    {
        currentLevel = PlayerPrefs.GetInt("CurrentLevel", 1);
        
        if (levelButtonText != null)
        {
            levelButtonText.text = $"Level {currentLevel}";
        }
    }

    public void OnLevelButtonClick()
    {
        PlayerPrefs.SetInt("SelectedLevel", currentLevel);
        PlayerPrefs.Save();
        UnityEngine.SceneManagement.SceneManager.LoadScene("GameScene");
    }

    void LoadProgress()
    {
        currentLevel = PlayerPrefs.GetInt(CURRENT_LEVEL_KEY, 0);
        revealedBlocks = PlayerPrefs.GetInt(REVEALED_BLOCKS_KEY, 0);
    }

    public void ShowMainPanel()
    {
        SetPanel(mainPanel, true);
        SetPanel(sluzzleImage, true);
        SetPanel(artworkPanel, false);
        SetPanel(settingsCanvas, false);
    }

    public void ShowArtworkPanel()
    {
        PlaySound(buttonClickSound);
        SetPanel(mainPanel, false);
        SetPanel(sluzzleImage, false);
        SetPanel(artworkPanel, true);

        
        if (blockArtRevealer != null)
        {
            blockArtRevealer.CreateBlocksFromArtwork(0);
            blockArtRevealer.SetupRevealOrder();
            blockArtRevealer.RevealBlocksInstant(0); 
        }

        UpdateLevelButton();
    }

    void ShowArtworkPanelWithReveal()
    {
    
        SetPanel(mainPanel, false);
        SetPanel(sluzzleImage, false);
        SetPanel(artworkPanel, true);
        
        if (blockArtRevealer != null)
        {
            blockArtRevealer.CreateBlocksFromArtwork(0);
            blockArtRevealer.SetupRevealOrder();
        
            int previousRevealed = revealedBlocks - 1;
            if (previousRevealed > 0)
            {
                blockArtRevealer.RevealBlocksInstant(previousRevealed);
            }
        
            StartCoroutine(RevealNewBlockWithDelay());
        }

        UpdateLevelButton();
    }

    IEnumerator RevealNewBlockWithDelay()
    {
        yield return new WaitForSeconds(0.5f);
        
        PlaySound(blockRevealSound);
        
        if (blockArtRevealer != null)
        {
            blockArtRevealer.RevealNextBlockAnimated();
        }
    }

    void UpdateLevelButton()
    {
        if (levelButtonText != null)
        {
            levelButtonText.text = $"Level {currentLevel + 1}";
        }
    }

    public void OnLevelButtonClicked()
    {
        PlaySound(buttonClickSound);

        PlayerPrefs.SetInt("SelectedLevel", currentLevel);
        PlayerPrefs.SetInt("IsEndlessMode", 0);
        BoardSizeManager.Instance.SetBoardSize(6);
        PlayerPrefs.Save();

        SceneManager.LoadScene(gameSceneName);
    }

    public void BackToMain()
    {
        ShowMainPanel();
        artworkPanel.SetActive(false);
    }

    void SetPanel(GameObject panel, bool active)
    {
        if (panel != null) panel.SetActive(active);
    }

    void PlaySound(AudioClip clip)
    {
        if (audioSource != null && clip != null)
        {
            audioSource.PlayOneShot(clip);
        }
    }

    public static int GetSelectedLevel()
    {
        return PlayerPrefs.GetInt("SelectedLevel", 0);
    }
    IEnumerator DoRevealAnimation()
    {
        yield return new WaitForSeconds(0.3f);
        
        if (blockArtRevealer != null)
        {
            int revealed = PlayerPrefs.GetInt("RevealedBlocks", 0);
        
            blockArtRevealer.CreateBlocksFromArtwork(0);
            blockArtRevealer.SetupRevealOrder();
        
            if (revealed > 1)
            {
                blockArtRevealer.RevealBlocksInstant(revealed - 1);
            }
        
            yield return new WaitForSeconds(0.3f);
            blockArtRevealer.RevealNextBlockAnimated();
        }
    }
    
}