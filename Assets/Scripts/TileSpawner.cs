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
        CoroutineRunner.Instance.StartCoroutine(SpawnAnimation(tile));
    }

    private System.Collections.IEnumerator SpawnAnimation(Tile tile)
    {
        Vector3 targetScale = new Vector3(0.9f, 0.9f, 0.9f);
        float duration = 0.15f;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;
            t = 1f - Mathf.Pow(1f - t, 3f);

            tile.transform.localScale = Vector3.Lerp(Vector3.zero, targetScale, t);
            yield return null;
        }

        tile.transform.localScale = targetScale;
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