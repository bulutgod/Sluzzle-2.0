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

        
        if (gameObject.activeInHierarchy)
        {
            scaleCoroutine = StartCoroutine(MergeAnimationCoroutine(onComplete));
        }
        else
        {
            
            onComplete?.Invoke();
        }
    }

    private IEnumerator MoveCoroutine(Vector3 target, float duration, System.Action onComplete)
    {
        Vector3 startPos = transform.position;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            
            if (this == null || gameObject == null)
            {
                yield break;
            }

            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            t = EaseOutCubic(t);

            transform.position = Vector3.Lerp(startPos, target, t);
            yield return null;
        }

        
        if (this != null && gameObject != null)
        {
            transform.position = target;

            
            if (jellyEffect != null)
            {
                jellyEffect.PlayJellyBounce(lastMoveDirection);
            }

            onComplete?.Invoke();
        }
    }

    private IEnumerator MergeAnimationCoroutine(System.Action onComplete)
    {
        
        if (this == null || gameObject == null || !gameObject.activeInHierarchy)
        {
            onComplete?.Invoke();
            yield break;
        }

        
        if (jellyEffect != null)
        {
            jellyEffect.PlayJellyMerge();
        }

        
        float elapsed = 0f;
        float waitTime = 0.1f;

        while (elapsed < waitTime)
        {
            
            if (this == null || gameObject == null || !gameObject.activeInHierarchy)
            {
                onComplete?.Invoke();
                yield break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

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