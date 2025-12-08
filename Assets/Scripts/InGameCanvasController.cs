using System;
using UnityEngine;
using UnityEngine.UI;

public class InGameCanvasController : MonoBehaviour
{
    public GameObject menuPanel;
    public GameObject pausePanel;
    public Button pauseButton;
    public GameManager gameManagerScript;

    private void Awake()
    {
        Time.timeScale = 1.0f;
        menuPanel.SetActive(true);
        pausePanel.SetActive(false);
    }
    private void OnEnable()
    {
        pauseButton.onClick.AddListener(PauseButton);
    }
    private void OnDisable()
    {
        pauseButton.onClick.RemoveListener(PauseButton);
    }

    private void PauseButton()
    {
        Time.timeScale = 0.0f;
        menuPanel.SetActive(false);
        pausePanel.SetActive(true);
        gameManagerScript.gameObject.SetActive(false);
    }
 
}
