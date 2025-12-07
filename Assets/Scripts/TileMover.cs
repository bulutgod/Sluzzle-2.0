using UnityEngine;
using System.Collections;

public class TileMover : MonoBehaviour
{
    private Coroutine moveCoroutine;
    private Coroutine scaleCoroutine;

    public void MoveTo(Vector3 targetPosition, float duration, System.Action onComplete = null)
    {
        if (moveCoroutine != null)
        {
            StopCoroutine(moveCoroutine);
        }

        moveCoroutine = StartCoroutine(MoveCoroutine(targetPosition, duration, onComplete));
    }

    public void PlayMergeAnimation(System.Action onComplete = null)
    {
        if (scaleCoroutine != null)
        {
            StopCoroutine(scaleCoroutine);
        }

        scaleCoroutine = StartCoroutine(MergeAnimationCoroutine(onComplete));
    }

    private IEnumerator MoveCoroutine(Vector3 target, float duration, System.Action onComplete)
    {
        Vector3 startPos = transform.position;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            t = EaseOutCubic(t);

            transform.position = Vector3.Lerp(startPos, target, t);
            yield return null;
        }

        transform.position = target;
        onComplete?.Invoke();
    }

    private IEnumerator MergeAnimationCoroutine(System.Action onComplete)
    {
        Vector3 originalScale = transform.localScale;
        float duration = 0.2f;
        float elapsed = 0f;

        while (elapsed < duration / 2)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / (duration / 2);
            transform.localScale = Vector3.Lerp(originalScale, originalScale * 1.2f, t);
            yield return null;
        }

        elapsed = 0f;
        while (elapsed < duration / 2)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / (duration / 2);
            transform.localScale = Vector3.Lerp(originalScale * 1.2f, originalScale, t);
            yield return null;
        }

        transform.localScale = originalScale;
        onComplete?.Invoke();
    }

    private float EaseOutCubic(float t)
    {
        return 1f - Mathf.Pow(1f - t, 3f);
    }

    public void CancelMove()
    {
        if (moveCoroutine != null)
        {
            StopCoroutine(moveCoroutine);
            moveCoroutine = null;
        }
    }
}