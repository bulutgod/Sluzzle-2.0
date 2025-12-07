using UnityEngine;
using System.Collections.Generic;

public class TileSpawner : ITileSpawner
{
    private readonly IGrid grid;
    private readonly ITileFactory factory;
    private readonly BoardConfig config;

    public TileSpawner(IGrid tileGrid, ITileFactory tileFactory, BoardConfig boardConfig)
    {
        grid = tileGrid;
        factory = tileFactory;
        config = boardConfig;
    }

    public void SpawnRandom()
    {
        List<Vector2Int> emptyPositions = GetEmptyPositions();

        if (emptyPositions.Count == 0) return;

        Vector2Int randomPos = emptyPositions[Random.Range(0, emptyPositions.Count)];
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
        Vector3 targetScale = Vector3.one * 0.9f;
        float duration = 0.2f;
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

    private List<Vector2Int> GetEmptyPositions()
    {
        List<Vector2Int> empty = new List<Vector2Int>(grid.Size * grid.Size);

        for (int x = 0; x < grid.Size; x++)
        {
            for (int y = 0; y < grid.Size; y++)
            {
                if (grid[x, y] == null)
                    empty.Add(new Vector2Int(x, y));
            }
        }

        return empty;
    }
}