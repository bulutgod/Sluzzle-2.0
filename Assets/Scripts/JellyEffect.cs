using UnityEngine;
using System.Collections;

public class JellyEffect : MonoBehaviour
{
    [Header("Jelly Settings")]
    [SerializeField] private float bounceStrength = 0.2f;
    [SerializeField] private float bounceDuration = 0.3f;
    [SerializeField] private AnimationCurve bounceCurve = AnimationCurve.EaseInOut(0, 0, 1, 1);

    private Vector3 originalScale;
    private Coroutine jellyCoroutine;
    private bool scaleInitialized = false;

    private void Start()
    {
        if (!scaleInitialized)
        {
            originalScale = transform.localScale;
            scaleInitialized = true;
        }
    }

    // Y�ne g�re jelly efekti (sa�/sol/yukar�/a�a�� �arpma)
    public void PlayJellyBounce(Vector2 direction)
    {
        EnsureScaleInitialized();

        if (jellyCoroutine != null)
        {
            StopCoroutine(jellyCoroutine);
        }

        jellyCoroutine = StartCoroutine(JellyBounceCoroutine(direction));
    }

    // Merge olurken jelly efekti (t�m y�nlerde s�k��ma-geni�leme)
    public void PlayJellyMerge()
    {
        EnsureScaleInitialized();

        if (jellyCoroutine != null)
        {
            StopCoroutine(jellyCoroutine);
        }

        jellyCoroutine = StartCoroutine(JellyMergeCoroutine());
    }

    private IEnumerator JellyBounceCoroutine(Vector2 direction)
    {
        float elapsed = 0f;

        // Y�n belirleme (x veya y ekseni)
        bool isHorizontal = Mathf.Abs(direction.x) > Mathf.Abs(direction.y);

        while (elapsed < bounceDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / bounceDuration;

            // Sin�s dalgas� ile jelly efekti
            float bounceAmount = Mathf.Sin(t * Mathf.PI * 2f) * bounceStrength * (1f - t);

            Vector3 scale = originalScale;

            if (isHorizontal)
            {
                // Yatay hareket - X ekseni s�k���r, Y ekseni geni�ler
                scale.x = originalScale.x * (1f - bounceAmount * 0.5f);
                scale.y = originalScale.y * (1f + bounceAmount);
            }
            else
            {
                // Dikey hareket - Y ekseni s�k���r, X ekseni geni�ler
                scale.x = originalScale.x * (1f + bounceAmount);
                scale.y = originalScale.y * (1f - bounceAmount * 0.5f);
            }

            transform.localScale = scale;
            yield return null;
        }

        transform.localScale = originalScale;
    }

    private IEnumerator JellyMergeCoroutine()
    {
        float elapsed = 0f;
        float halfDuration = bounceDuration / 2f;

        // Faz 1: S�k��ma (squeeze)
        while (elapsed < halfDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;

            float squeeze = bounceCurve.Evaluate(t) * bounceStrength;

            Vector3 scale = originalScale;
            scale.x = originalScale.x * (1f - squeeze);
            scale.y = originalScale.y * (1f - squeeze);

            transform.localScale = scale;
            yield return null;
        }

        elapsed = 0f;

        // Faz 2: Geni�leme (pop out)
        while (elapsed < halfDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / halfDuration;

            float pop = bounceCurve.Evaluate(1f - t) * bounceStrength * 1.5f;

            Vector3 scale = originalScale;
            scale.x = originalScale.x * (1f + pop);
            scale.y = originalScale.y * (1f + pop);

            transform.localScale = scale;
            yield return null;
        }

        transform.localScale = originalScale;
    }

    // Harici �a�r� i�in
    public void ResetScale()
    {
        if (jellyCoroutine != null)
        {
            StopCoroutine(jellyCoroutine);
        }
        transform.localScale = originalScale;
    }

    public void SetOriginalScale(Vector3 scale)
    {
        originalScale = scale;
        scaleInitialized = true;
    }

    private void EnsureScaleInitialized()
    {
        if (!scaleInitialized)
        {
            originalScale = transform.localScale;
            scaleInitialized = true;
        }
    }
}