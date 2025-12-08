using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class StreakCounter : MonoBehaviour
{
    public static StreakCounter Instance { get; private set; }

    [Header("UI References")]
    [SerializeField] private TextMeshProUGUI streakText;
    [SerializeField] private Image streakIcon;
    [SerializeField] private CanvasGroup canvasGroup;

    [Header("Settings")]
    [SerializeField] private int currentStreak = 0;
    [SerializeField] private int bestStreak = 0;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        if (canvasGroup != null)
        {
            canvasGroup.alpha = 0;
        }
    }

    public void IncrementStreak()
    {
        currentStreak++;

        if (currentStreak > bestStreak)
        {
            bestStreak = currentStreak;
        }

        UpdateUI();
        ShowStreak();
    }

    public void ResetStreak()
    {
        currentStreak = 0;
        UpdateUI();
        HideStreak();
    }

    private void UpdateUI()
    {
        if (streakText != null)
        {
            streakText.text = currentStreak.ToString();

            // Renk deðiþimi
            if (currentStreak >= 10)
            {
                streakText.color = new Color(1f, 0.2f, 0.2f); // Kýrmýzý
                if (streakIcon != null) streakIcon.color = new Color(1f, 0.2f, 0.2f);
            }
            else if (currentStreak >= 5)
            {
                streakText.color = new Color(1f, 0.5f, 0f); // Turuncu
                if (streakIcon != null) streakIcon.color = new Color(1f, 0.5f, 0f);
            }
            else
            {
                streakText.color = Color.white;
                if (streakIcon != null) streakIcon.color = Color.white;
            }
        }
    }

    private void ShowStreak()
    {
        if (canvasGroup != null && currentStreak >= 2)
        {
            StopAllCoroutines();
            StartCoroutine(FadeIn());
        }
    }

    private void HideStreak()
    {
        if (canvasGroup != null)
        {
            StopAllCoroutines();
            StartCoroutine(FadeOut());
        }
    }

    private System.Collections.IEnumerator FadeIn()
    {
        while (canvasGroup.alpha < 1f)
        {
            canvasGroup.alpha += Time.deltaTime * 3f;
            yield return null;
        }
    }

    private System.Collections.IEnumerator FadeOut()
    {
        yield return new WaitForSeconds(1f);

        while (canvasGroup.alpha > 0f)
        {
            canvasGroup.alpha -= Time.deltaTime * 2f;
            yield return null;
        }
    }

    public int GetCurrentStreak() => currentStreak;
    public int GetBestStreak() => bestStreak;
}