using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class BestScoreManager : MonoBehaviour
{
    [Header("Animation Settings")]
    [SerializeField] private float pulseDuration = 0.3f;
    [SerializeField] private float pulseScale = 1.2f;
    private Vector3 normalScale;
    private Coroutine pulseCoroutine;

    [Header("UI References")]
    [SerializeField] private TextMeshProUGUI bestScoreText;
    [SerializeField] private GameObject newRecordPanel;
    [SerializeField] private TextMeshProUGUI newRecordText;

    [Header("Settings")]
    [SerializeField] private string bestScorePrefix = "BEST: ";
    
    private GameUIManager gameUIManager;

    // Her board size i�in ayr� key
    private const string BEST_SCORE_KEY_5X5 = "BestScore_5x5";
    private const string BEST_SCORE_KEY_6X6 = "BestScore_6x6";
    private const string BEST_SCORE_KEY_7X7 = "BestScore_7x7";

    private int currentBestScore;
    private int currentBoardSize;
    private bool hasShownNewRecordPanel = false;

    private void Start()
    {
        // normalScale'i ba�lat
        if (bestScoreText != null)
        {
            normalScale = bestScoreText.transform.localScale;
        }

        // Mevcut board size'� al
        currentBoardSize = BoardSizeManager.Instance.GetBoardSize();
        Debug.Log($"BestScoreManager initialized for {currentBoardSize}x{currentBoardSize} mode");

        LoadBestScore();
        UpdateBestScoreUI();

        if (newRecordPanel != null)
        {
            newRecordPanel.SetActive(false);
        }

        // ScoreSystem'e abone ol
        GameManager gm = FindObjectOfType<GameManager>();
        if (gm != null && gm.ScoreSystem != null)
        {
            gm.ScoreSystem.OnScoreChanged += OnScoreChanged;
        }
    }

    private void OnDestroy()
    {
        GameManager gm = FindObjectOfType<GameManager>();
        if (gm != null && gm.ScoreSystem != null)
        {
            gm.ScoreSystem.OnScoreChanged -= OnScoreChanged;
        }
    }

    private void LoadBestScore()
    {
        string key = GetBestScoreKey();
        currentBestScore = PlayerPrefs.GetInt(key, 0);
        Debug.Log($"Loaded best score for {currentBoardSize}x{currentBoardSize}: {currentBestScore}");
    }

    private void SaveBestScore(int score)
    {
        currentBestScore = score;
        string key = GetBestScoreKey();
        PlayerPrefs.SetInt(key, score);
        PlayerPrefs.Save();
        Debug.Log($"Saved new best score for {currentBoardSize}x{currentBoardSize}: {score}");
    }

    private string GetBestScoreKey()
    {
        switch (currentBoardSize)
        {
            case 5:
                return BEST_SCORE_KEY_5X5;
            case 6:
                return BEST_SCORE_KEY_6X6;
            case 7:
                return BEST_SCORE_KEY_7X7;
            default:
                Debug.LogWarning($"Unknown board size: {currentBoardSize}, using 5x5 key");
                return BEST_SCORE_KEY_5X5;
        }
    }

    private void OnScoreChanged(int newScore)
    {
        if (newScore > currentBestScore)
        {
            SaveBestScore(newScore);
            UpdateBestScoreUI();

            // Panel animasyonunu sadece ilk kez g�ster
            if (!hasShownNewRecordPanel)
            {
                ShowNewRecordAnimation();
                hasShownNewRecordPanel = true;
            }

            // Pulse animasyonunu her seferinde �al��t�r
            PlayPulseAnimation();
        }
    }

    private void UpdateBestScoreUI()
    {
        if (bestScoreText != null)
        {
            bestScoreText.text = bestScorePrefix + currentBestScore.ToString();
        }
    }

    private void PlayPulseAnimation()
    {
        if (bestScoreText == null) return;

        if (pulseCoroutine != null)
        {
            StopCoroutine(pulseCoroutine);
            bestScoreText.transform.localScale = normalScale;
        }

        pulseCoroutine = StartCoroutine(PulseCoroutine());
    }

    private IEnumerator PulseCoroutine()
    {
        float elapsed = 0f;
        float halfDuration = pulseDuration / 2f;

        // B�y�me
        while (elapsed < halfDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;
            bestScoreText.transform.localScale = Vector3.Lerp(normalScale, normalScale * pulseScale, t);
            yield return null;
        }

        elapsed = 0f;

        // K���lme
        while (elapsed < halfDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;
            bestScoreText.transform.localScale = Vector3.Lerp(normalScale * pulseScale, normalScale, t);
            yield return null;
        }

        bestScoreText.transform.localScale = normalScale;
        pulseCoroutine = null;
    }

    private void ShowNewRecordAnimation()
    {
        if (newRecordPanel != null)
        {
            StartCoroutine(NewRecordAnimationCoroutine());
        }
    }

    private IEnumerator NewRecordAnimationCoroutine()
    {
        if (gameUIManager.isEndlessMode == true)
        {
            newRecordPanel.SetActive(true);

            if (newRecordText != null)
            {
                // Ba�lang��
                newRecordText.transform.localScale = Vector3.zero;
                CanvasGroup cg = newRecordPanel.GetComponent<CanvasGroup>();
                if (cg == null) cg = newRecordPanel.AddComponent<CanvasGroup>();

                // Pop-in animasyonu
                float duration = 0.5f;
                float elapsed = 0f;

                while (elapsed < duration)
                {
                    elapsed += Time.deltaTime;
                    float t = elapsed / duration;
                    // Elastic ease-out
                    float scale = Mathf.Sin(t * Mathf.PI * 2f) * (1f - t) * 0.3f + t;
                    newRecordText.transform.localScale = Vector3.one * scale;
                    yield return null;
                }

                newRecordText.transform.localScale = Vector3.one;

                // Bekle
                yield return new WaitForSeconds(2f);

                // Fade out
                elapsed = 0f;
                duration = 0.5f;

                while (elapsed < duration)
                {
                    elapsed += Time.deltaTime;
                    float t = elapsed / duration;
                    cg.alpha = 1f - t;
                    yield return null;
                }

                newRecordPanel.SetActive(false);
                cg.alpha = 1f;
            }
        }
        else
        {
            newRecordPanel.SetActive(false);
        }
        
    }

    public int GetBestScore()
    {
        return currentBestScore;
    }

    // T�m mod high score'lar�n� g�rmek i�in (debug/stats i�in)
    public void GetAllBestScores(out int score5x5, out int score6x6, out int score7x7)
    {
        score5x5 = PlayerPrefs.GetInt(BEST_SCORE_KEY_5X5, 0);
        score6x6 = PlayerPrefs.GetInt(BEST_SCORE_KEY_6X6, 0);
        score7x7 = PlayerPrefs.GetInt(BEST_SCORE_KEY_7X7, 0);
    }

    // T�m high score'lar� s�f�rlamak i�in (settings men�s� i�in)
    public void ResetAllBestScores()
    {
        PlayerPrefs.DeleteKey(BEST_SCORE_KEY_5X5);
        PlayerPrefs.DeleteKey(BEST_SCORE_KEY_6X6);
        PlayerPrefs.DeleteKey(BEST_SCORE_KEY_7X7);
        PlayerPrefs.Save();

        LoadBestScore(); // Mevcut modu yeniden y�kle
        UpdateBestScoreUI();
        hasShownNewRecordPanel = false; // Reset flag

        Debug.Log("All best scores have been reset!");
    }

    // Sadece mevcut mod high score'unu s�f�rla
    public void ResetCurrentBestScore()
    {
        string key = GetBestScoreKey();
        PlayerPrefs.DeleteKey(key);
        PlayerPrefs.Save();

        LoadBestScore();
        UpdateBestScoreUI();
        hasShownNewRecordPanel = false; // Reset flag

        Debug.Log($"Best score for {currentBoardSize}x{currentBoardSize} has been reset!");
    }
}