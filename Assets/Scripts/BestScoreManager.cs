using UnityEngine;
using TMPro;
using System.Collections;

public class BestScoreManager : MonoBehaviour
{
    [Header("UI References")]
    [SerializeField] private TextMeshProUGUI bestScoreText;
    [SerializeField] private GameObject newRecordPanel;
    [SerializeField] private TextMeshProUGUI newRecordText;

    [Header("Settings")]
    [SerializeField] private string bestScorePrefix = "BEST: ";

    private const string BEST_SCORE_KEY = "BestScore";
    private int currentBestScore;
    private bool hasShownNewRecord = false;

    private void Start()
    {
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
        currentBestScore = PlayerPrefs.GetInt(BEST_SCORE_KEY, 0);
    }

    private void SaveBestScore(int score)
    {
        currentBestScore = score;
        PlayerPrefs.SetInt(BEST_SCORE_KEY, score);
        PlayerPrefs.Save();
    }

    private void OnScoreChanged(int newScore)
    {
        if (newScore > currentBestScore)
        {
            SaveBestScore(newScore);
            UpdateBestScoreUI();

            if (!hasShownNewRecord)
            {
                ShowNewRecordAnimation();
                hasShownNewRecord = true;
            }
        }
    }

    private void UpdateBestScoreUI()
    {
        if (bestScoreText != null)
        {
            bestScoreText.text = bestScorePrefix + currentBestScore.ToString();
        }
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
        newRecordPanel.SetActive(true);

        if (newRecordText != null)
        {
            // Baþlangýç
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

    public int GetBestScore()
    {
        return currentBestScore;
    }
}