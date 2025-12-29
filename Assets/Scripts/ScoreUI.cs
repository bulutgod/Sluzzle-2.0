using UnityEngine;
using TMPro;
using System.Collections;

public class ScoreUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private string scorePrefix = " ";

    [Header("Animation Settings")]
    [SerializeField] private float pulseDuration = 0.3f;
    [SerializeField] private float pulseScale = 1.2f;

    private Vector3 normalScale;
    private Coroutine pulseCoroutine;

    private void Start()
    {
        if (scoreText != null)
        {
            normalScale = scoreText.transform.localScale;
        }
    }

    public void UpdateScore(int score)
    {
        if (scoreText != null)
        {
            scoreText.text = scorePrefix + score.ToString();

            
            if (score > 0)
            {
                PlayPulseAnimation();
            }
        }
    }

    private void PlayPulseAnimation()
    {
        
        if (scoreText == null || !gameObject.activeInHierarchy)
        {
            return;
        }

        if (pulseCoroutine != null)
        {
            StopCoroutine(pulseCoroutine);
            scoreText.transform.localScale = normalScale;
        }

        pulseCoroutine = StartCoroutine(PulseCoroutine());
    }

    private IEnumerator PulseCoroutine()
    {
        float elapsed = 0f;
        float halfDuration = pulseDuration / 2f;

        
        while (elapsed < halfDuration)
        {
            
            if (this == null || scoreText == null || !gameObject.activeInHierarchy)
            {
                yield break;
            }

            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;
            scoreText.transform.localScale = Vector3.Lerp(normalScale, normalScale * pulseScale, t);
            yield return null;
        }

        elapsed = 0f;

        
        while (elapsed < halfDuration)
        {
            
            if (this == null || scoreText == null || !gameObject.activeInHierarchy)
            {
                yield break;
            }

            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;
            scoreText.transform.localScale = Vector3.Lerp(normalScale * pulseScale, normalScale, t);
            yield return null;
        }

        
        if (scoreText != null)
        {
            scoreText.transform.localScale = normalScale;
        }
    }

    
    private void OnDestroy()
    {
        if (pulseCoroutine != null)
        {
            StopCoroutine(pulseCoroutine);
        }
    }
}