using UnityEngine;
using System.Collections;

public class TileMover : MonoBehaviour
{
    private Coroutine moveCoroutine;
    private Coroutine scaleCoroutine;
    private JellyEffect jellyEffect;
    private Vector3 lastMoveDirection;

    private void Awake()
    {
        jellyEffect = GetComponent<JellyEffect>();
        if (jellyEffect == null)
        {
            jellyEffect = gameObject.AddComponent<JellyEffect>();
        }
    }

    public void MoveTo(Vector3 targetPosition, float duration, System.Action onComplete = null)
    {
        if (moveCoroutine != null)
        {
            StopCoroutine(moveCoroutine);
        }

        // Hareket yönünü hesapla
        lastMoveDirection = (targetPosition - transform.position).normalized;

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

        // Varýnca jelly bounce efekti
        if (jellyEffect != null)
        {
            jellyEffect.PlayJellyBounce(lastMoveDirection);
        }

        onComplete?.Invoke();
    }

    private IEnumerator MergeAnimationCoroutine(System.Action onComplete)
    {
        // Jelly merge efekti oynat
        if (jellyEffect != null)
        {
            jellyEffect.PlayJellyMerge();
        }

        // Jelly efektinin bitmesini bekle
        yield return new WaitForSeconds(0.4f);

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

        if (jellyEffect != null)
        {
            jellyEffect.ResetScale();
        }
    }
}