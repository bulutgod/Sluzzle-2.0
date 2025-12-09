using UnityEngine;

public class Tile : MonoBehaviour
{
    public int level { get; set; }
    private SpriteRenderer spriteRenderer;
    private TileMover mover;
    private ModernTileVisuals modernVisuals;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        mover = GetComponent<TileMover>();
        modernVisuals = GetComponent<ModernTileVisuals>();

        if (mover == null)
        {
            mover = gameObject.AddComponent<TileMover>();
        }

        if (modernVisuals == null)
        {
            modernVisuals = gameObject.AddComponent<ModernTileVisuals>();
        }
    }

    public void Initialize(int initialLevel, Color color)
    {
        level = initialLevel;
        SetColor(color);
    }

    public void SetColor(Color color)
    {
        if (modernVisuals != null)
        {
            modernVisuals.UpdateColor(color);
        }
        else if (spriteRenderer != null)
        {
            spriteRenderer.color = color;
        }
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