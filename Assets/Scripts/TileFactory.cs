using UnityEngine;

public class TileFactory : ITileFactory
{
    private readonly GameObject prefab;
    private readonly TileData[] tileLevels;
    private readonly Transform parent;

    public TileFactory(GameObject tilePrefab, TileData[] levels, Transform parentTransform)
    {
        prefab = tilePrefab;
        tileLevels = levels;
        parent = parentTransform;
    }

    public Tile Create(Vector3 position, int levelIndex)
    {
        GameObject obj = Object.Instantiate(prefab, position, Quaternion.identity, parent);
        Tile tile = obj.GetComponent<Tile>();

        tile.Initialize(levelIndex, tileLevels[levelIndex].TileColor);

        return tile;
    }

    public void LevelUp(Tile tile)
    {
        tile.level++;
        if (tile.level < tileLevels.Length)
        {
            tile.SetColor(tileLevels[tile.level].TileColor);
        }
    }

    public int GetTileScore(int levelIndex)
    {
        if (levelIndex < 0 || levelIndex >= tileLevels.Length)
            return 0;

        return tileLevels[levelIndex].ScoreValue;
    }
}