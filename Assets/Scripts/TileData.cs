using UnityEngine;

[CreateAssetMenu(fileName = "NewTile", menuName = "SlideMerge/Tile Data")]
public class TileData : ScriptableObject
{
    [SerializeField] private Color tileColor = Color.white;
    [SerializeField] private int scoreValue;

    public Color TileColor => tileColor;
    public int ScoreValue => scoreValue;
}