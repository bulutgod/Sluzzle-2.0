using UnityEngine;

public class ModernTileVisuals : MonoBehaviour
{
    [Header("3D Effect Settings")]
    [SerializeField] private float shadowOffset = 0.12f;
    [SerializeField] private Color shadowColor = new Color(0f, 0f, 0f, 0.4f);
    [SerializeField] private float cornerRadius = 0.2f; // Daha yumuþak köþeler

    private GameObject shadowObject;
    private SpriteRenderer mainRenderer;
    private SpriteRenderer shadowRenderer;

    private void Awake()
    {
        mainRenderer = GetComponent<SpriteRenderer>();
        CreateShadow();
        ApplyRoundedCorners();
    }

    private void CreateShadow()
    {
        // Gölge objesi oluþtur
        shadowObject = new GameObject("Shadow");
        shadowObject.transform.SetParent(transform);
        shadowObject.transform.localPosition = new Vector3(0, -shadowOffset, 0.1f);
        shadowObject.transform.localScale = Vector3.one;

        shadowRenderer = shadowObject.AddComponent<SpriteRenderer>();
        shadowRenderer.sprite = mainRenderer.sprite;
        shadowRenderer.color = shadowColor;
        shadowRenderer.sortingOrder = mainRenderer.sortingOrder - 1;
    }

    private void ApplyRoundedCorners()
    {
        // Fotoðraftaki gibi yumuþak köþeli square sprite
        Texture2D texture = new Texture2D(256, 256);
        Color[] pixels = new Color[256 * 256];

        float radius = 256 * cornerRadius;
        Vector2 center = new Vector2(128, 128);

        for (int y = 0; y < 256; y++)
        {
            for (int x = 0; x < 256; x++)
            {
                Vector2 pos = new Vector2(x, y);
                bool isInside = IsInsideRoundedSquare(pos, center, 120, radius); // 120 = biraz daha küçük

                pixels[y * 256 + x] = isInside ? Color.white : Color.clear;
            }
        }

        texture.SetPixels(pixels);
        texture.filterMode = FilterMode.Bilinear;
        texture.Apply();

        Sprite roundedSprite = Sprite.Create(
            texture,
            new Rect(0, 0, 256, 256),
            new Vector2(0.5f, 0.5f),
            100f
        );

        mainRenderer.sprite = roundedSprite;
        if (shadowRenderer != null)
        {
            shadowRenderer.sprite = roundedSprite;
        }
    }

    private bool IsInsideRoundedSquare(Vector2 pos, Vector2 center, float halfSize, float radius)
    {
        float dx = Mathf.Abs(pos.x - center.x);
        float dy = Mathf.Abs(pos.y - center.y);

        // Merkez bölge
        if (dx <= halfSize - radius && dy <= halfSize - radius)
            return true;

        // Dýþarýda
        if (dx > halfSize || dy > halfSize)
            return false;

        // Köþeler - yumuþak geçiþ
        if (dx > halfSize - radius && dy > halfSize - radius)
        {
            float cornerDist = Vector2.Distance(
                pos,
                new Vector2(
                    center.x + Mathf.Sign(pos.x - center.x) * (halfSize - radius),
                    center.y + Mathf.Sign(pos.y - center.y) * (halfSize - radius)
                )
            );
            return cornerDist <= radius;
        }

        return true;
    }

    public void UpdateColor(Color newColor)
    {
        if (mainRenderer != null)
        {
            mainRenderer.color = newColor;
        }
    }
}