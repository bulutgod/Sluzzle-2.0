using UnityEngine;
using System.Collections.Generic;

public class TileSpawner : ITileSpawner
{
    private readonly IGrid grid;
    private readonly ITileFactory factory;
    private readonly BoardConfig config;

    private List<Vector2Int> emptyPositionsCache;
    private WaitForSeconds spawnDelay;

    public TileSpawner(IGrid tileGrid, ITileFactory tileFactory, BoardConfig boardConfig)
    {
        grid = tileGrid;
        factory = tileFactory;
        config = boardConfig;

        emptyPositionsCache = new List<Vector2Int>(boardConfig.Size * boardConfig.Size);
        spawnDelay = new WaitForSeconds(0.05f);
    }

    public void SpawnRandom()
    {
        GetEmptyPositions();

        if (emptyPositionsCache.Count == 0) return;

        Vector2Int randomPos = emptyPositionsCache[Random.Range(0, emptyPositionsCache.Count)];
        Spawn(randomPos.x, randomPos.y, 0);
    }

    private void Spawn(int x, int y, int levelIndex)
    {
        if (grid[x, y] != null) return;

        Vector3 worldPos = config.GetWorldPosition(x, y);
        Tile tile = factory.Create(worldPos, levelIndex);
        grid[x, y] = tile;

        tile.transform.localScale = Vector3.zero;
        CoroutineRunner.Instance.StartCoroutine(ImprovedSpawnAnimation(tile));
    }

    private System.Collections.IEnumerator ImprovedSpawnAnimation(Tile tile)
    {
        Vector3 targetScale = new Vector3(0.9f, 0.9f, 0.9f);
        float duration = 0.25f;
        float elapsed = 0f;

        // Baþlangýç rotasyonu
        float startRotation = Random.Range(-180f, 180f);
        tile.transform.rotation = Quaternion.Euler(0, 0, startRotation);

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            // Elastik ease-out efekti
            float scale = t < 0.5f
                ? 2f * t * t
                : 1f - Mathf.Pow(-2f * t + 2f, 2f) / 2f;

            // Overshoot efekti
            if (t > 0.8f)
            {
                scale = 1f + Mathf.Sin((t - 0.8f) * 25f) * 0.1f * (1f - t);
            }

            tile.transform.localScale = targetScale * scale;

            // Rotasyonu düzelt
            float rotation = Mathf.Lerp(startRotation, 0f, t * t);
            tile.transform.rotation = Quaternion.Euler(0, 0, rotation);

            yield return null;
        }

        tile.transform.localScale = targetScale;
        tile.transform.rotation = Quaternion.identity;
    }

    private void GetEmptyPositions()
    {
        emptyPositionsCache.Clear();

        for (int x = 0; x < grid.Size; x++)
        {
            for (int y = 0; y < grid.Size; y++)
            {
                if (grid[x, y] == null)
                    emptyPositionsCache.Add(new Vector2Int(x, y));
            }
        }
    }
}