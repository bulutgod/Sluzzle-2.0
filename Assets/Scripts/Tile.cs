using UnityEngine;

public class Tile : MonoBehaviour
{
    public int level { get; set; }
    private SpriteRenderer spriteRenderer;
    private TileMover mover;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        mover = GetComponent<TileMover>();

        if (mover == null)
        {
            mover = gameObject.AddComponent<TileMover>();
        }
    }

    public void Initialize(int initialLevel, Color color)
    {
        level = initialLevel;
        SetColor(color);
    }

    public void SetColor(Color color)
    {
        if (spriteRenderer != null)
            spriteRenderer.color = color;
    }

    public void AnimateMoveTo(Vector3 targetPosition, float duration, System.Action onComplete = null)
    {
        mover.MoveTo(targetPosition, duration, onComplete);
    }

    public void PlayMergeAnimation(System.Action onComplete = null)
    {
        mover.PlayMergeAnimation(onComplete);
    }

    public void SetPositionImmediate(Vector3 position)
    {
        mover.CancelMove();
        transform.position = position;
    }
}