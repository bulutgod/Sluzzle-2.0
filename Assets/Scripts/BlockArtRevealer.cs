using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlockArtRevealer : MonoBehaviour
{
    [System.Serializable]
    public class ArtWorkData
    {
        public string artworkName;
        public Sprite silhouetteSprite;
        public int pixelsPerBlock = 16;
    }

    [Header("Artwork List")] public List<ArtWorkData> allArtWorks = new List<ArtWorkData>();

    [Header("Blok Gorunumu")] public float blockSize = 30f;
    public float blockSpacing = 2f;
    public Color hiddenColor = new Color(0.15f, 0.15f, 0.2f, 1f);

    [Header("Referanslar")] public RectTransform blockContainer;
    public GameObject blockPrefab;

    private class BlockInfo
    {
        public GameObject gameObject;
        public Image image;
        public Color targetColor;
        public int gridX;
        public int gridY;
        public bool isRevealed;
    }

    private List<BlockInfo> allBlocks = new List<BlockInfo>();
    private List<int> revealOrder = new List<int>();
    private int currentArtWorkIndex = 0;
    private int revealCount = 0;

    void Start()
    {
        if (allArtWorks.Count > 0)
        {
            CreateBlocksFromArtwork(0);
        }
        else
        {
            Debug.LogWarning("Artwork listesi boş! Inspector'dan ekle.");
        }
    }

    Texture2D ConvertToReadableTexture(Sprite sprite)
    {
        Texture2D original = sprite.texture;

        RenderTexture tempRT =
            RenderTexture.GetTemporary(original.width, original.height, 0, RenderTextureFormat.ARGB32);
        Graphics.Blit(original, tempRT);

        RenderTexture previousActive = RenderTexture.active;
        RenderTexture.active = tempRT;

        Texture2D readable = new Texture2D(original.width, original.height);

        readable.ReadPixels(new Rect(0, 0, original.width, original.height), 0, 0);
        readable.Apply();
        RenderTexture.active = previousActive;
        RenderTexture.ReleaseTemporary(tempRT);
        return readable;

    }

    Color CalculateBlockColor(Texture2D texture, int blockX, int blockY, int blockPixelSize)
    {
        float totalR = 0f;
        float totalG = 0f;
        float totalB = 0f;
        float totalA = 0f;
        int pixelCount = 0;

        int startX = blockX * blockPixelSize;
        int startY = blockY * blockPixelSize;

        for (int y = 0; y < blockPixelSize; y++)
        {
            for (int x = 0; x < blockPixelSize; x++)
            {
                int pixelX = startX + x;
                int pixelY = startY + y;

                if (pixelX < texture.width && pixelY < texture.height)
                {
                    Color pixel = texture.GetPixel(pixelX, pixelY);

                    totalR += pixel.r;
                    totalG += pixel.g;
                    totalB += pixel.b;
                    totalA += pixel.a;
                    pixelCount++;
                }
            }
        }

        if (pixelCount == 0)
        {
            return Color.clear;
        }
        return new Color(totalR / pixelCount, totalG / pixelCount, totalB / pixelCount, totalA / pixelCount);
    }

    public void CreateBlocksFromArtwork(int artworkIndex)
    {
        ClearAllBlocks();
        currentArtWorkIndex = artworkIndex;
        if (artworkIndex >= allArtWorks.Count)
        {
            return;
        }
        ArtWorkData artwork = allArtWorks[artworkIndex];
        if (artwork.silhouetteSprite == null)
        {
            return;
        }
        Texture2D texture = ConvertToReadableTexture(artwork.silhouetteSprite);
        
        int gridWidth = texture.width / artwork.pixelsPerBlock;
        int gridHeight = texture.height / artwork.pixelsPerBlock;
        
        List<Vector2Int> filledPositions = new List<Vector2Int>();
        List<Color> filledColors = new List<Color>();

        for (int y = 0; y < gridHeight; y++)
        {
            for (int x = 0; x < gridWidth; x++)
            {
                Color blockColor = CalculateBlockColor(texture, x, y, artwork.pixelsPerBlock);
                
                if(blockColor.a > 0.15f)
                {
                    filledPositions.Add(new Vector2Int(x, y));
                    filledColors.Add(new Color(blockColor.r, blockColor.g, blockColor.b,1f));
                }
            }
        }

        if (filledPositions.Count == 0)
        {
            return;
        }

        float centerX = 0f;
        float centerY = 0f;

        foreach (Vector2Int position in filledPositions)
        {
            centerX += position.x;
            centerY += position.y;
        }
        centerX /= filledPositions.Count;
        centerY /= filledPositions.Count;

        for (int i = 0; i < filledPositions.Count; i++)
        {
            Vector2Int gridPos =  filledPositions[i];
            Color color = filledColors[i];
            
            GameObject blockObj = Instantiate(blockPrefab, blockContainer);
            blockObj.name = $"Block_{gridPos.x}_{gridPos.y}";
            
            RectTransform rt =  blockObj.GetComponent<RectTransform>();
            float posX = (gridPos.x - centerX) * (blockSize + blockSpacing);
            float posY = (gridPos.y - centerY) * (blockSize + blockSpacing);
            rt.anchoredPosition = new Vector2(posX, posY);
            rt.sizeDelta = new Vector2(blockSize, blockSize);
            
            Image img = blockObj.GetComponent<Image>();
            img.color = hiddenColor;
            
            BlockInfo block = new BlockInfo
            {
                gameObject = blockObj,
                image = img,
                targetColor = color,
                gridX = gridPos.x,
                gridY = gridPos.y,
                isRevealed = false
            };

            allBlocks.Add(block);
        }
    }

    void ClearAllBlocks()
    {
        foreach (BlockInfo block in allBlocks)
        {
            if (block.gameObject != null)
            {
                Destroy(block.gameObject);
            }
        }
        allBlocks.Clear();
        revealOrder.Clear();
        revealCount = 0;
    }
}


