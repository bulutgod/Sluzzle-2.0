using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseCanvasController : MonoBehaviour
{
    public Button homeButton;
    public Button resumeButton;
    public GameManager gameManagerScript;
    public InGameCanvasController inGameCanvasControllerScript;

    private void OnEnable()
    {
        homeButton.onClick.AddListener(HomeButton);
        resumeButton.onClick.AddListener(ResumeButton);
    }


    private void OnDisable()
    {
        homeButton.onClick.RemoveListener(HomeButton);
        resumeButton.onClick.RemoveListener(ResumeButton);
    }
    private void ResumeButton()
    {
        Time.timeScale = 1f;
        gameManagerScript.gameObject.SetActive(true);
        inGameCanvasControllerScript.menuPanel.SetActive(true);
        inGameCanvasControllerScript.pausePanel.SetActive(false);
    }
    private void HomeButton()
    {
        SceneManager.LoadScene("MenuScene");
    }
    
}
