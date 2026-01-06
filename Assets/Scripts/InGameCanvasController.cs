using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class InGameCanvasController : MonoBehaviour
{
    public GameObject menuPanel;
    public GameObject pausePanel;
    public Button pauseButton;
    public GameManager gameManagerScript;
    public GameObject levelInfoPanel;

    [Header("Animation Settings")]
    [SerializeField] private float animationDuration = 0.35f;

    private CanvasGroup pauseCanvasGroup;

    private void Awake()
    {
        Time.timeScale = 1.0f;
        menuPanel.SetActive(true);

        // Pause panel haz�rla
        SetupPausePanel();
    }

    private void SetupPausePanel()
    {
        if (pausePanel != null)
        {
            pauseCanvasGroup = pausePanel.GetComponent<CanvasGroup>();
            if (pauseCanvasGroup == null)
            {
                pauseCanvasGroup = pausePanel.AddComponent<CanvasGroup>();
            }

            pauseCanvasGroup.alpha = 0f;
            pausePanel.transform.localScale = Vector3.zero;
            pausePanel.SetActive(false);
            menuPanel.SetActive(true);
        }
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
        StartCoroutine(ShowPausePanel());
    }

    private IEnumerator ShowPausePanel()
    {
        Time.timeScale = 0.0f;
        menuPanel.SetActive(false);
        //StartCoroutine(SetMainMenuPanelClose());
        if (gameManagerScript != null) gameManagerScript.gameObject.SetActive(false);
        if (levelInfoPanel != null) levelInfoPanel.SetActive(false);

        pausePanel.SetActive(true);

        float elapsed = 0f;

        while (elapsed < animationDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = elapsed / animationDuration;

            float eased = EaseOutBack(t);

            pausePanel.transform.localScale = Vector3.LerpUnclamped(Vector3.zero, Vector3.one, eased);
            pauseCanvasGroup.alpha = Mathf.Lerp(0f, 1f, t * 2f);

            yield return null;
        }

        pausePanel.transform.localScale = Vector3.one;
        pauseCanvasGroup.alpha = 1f;
    }

    public void ResumeButton()
    {
        StartCoroutine(HidePausePanel());
    }

    private IEnumerator HidePausePanel()
    {
        float elapsed = 0f;
        float duration = animationDuration * 0.6f;

        while (elapsed < duration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = elapsed / duration;

            pausePanel.transform.localScale = Vector3.Lerp(Vector3.one, Vector3.zero, t);
            pauseCanvasGroup.alpha = Mathf.Lerp(1f, 0f, t);

            yield return null;
        }

        pausePanel.SetActive(false);
        menuPanel.SetActive(true);
        if (gameManagerScript != null) gameManagerScript.gameObject.SetActive(true);
        if (levelInfoPanel != null) levelInfoPanel.SetActive(true);

        Time.timeScale = 1.0f;
    }

    private float EaseOutBack(float t)
    {
        const float c1 = 1.70158f;
        const float c3 = c1 + 1f;
        return 1f + c3 * Mathf.Pow(t - 1f, 3f) + c1 * Mathf.Pow(t - 1f, 2f);
    }

    /*private IEnumerator SetMainMenuPanelClose()
    {
        if (pausePanel != null)
        {
            yield return new WaitForSeconds(1f);
            menuPanel.SetActive(false);
        }
        
    }*/
}