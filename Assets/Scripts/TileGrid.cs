public class TileGrid : IGrid
{
    private readonly Tile[,] tiles;
    private readonly int size;

    public int Size => size;

    public Tile this[int x, int y]
    {
        get => IsValidPosition(x, y) ? tiles[x, y] : null;
        set
        {
            if (IsValidPosition(x, y))
                tiles[x, y] = value;
        }
    }

    public TileGrid(int boardSize)
    {
        size = boardSize;
        tiles = new Tile[size, size];
    }

    public bool IsValidPosition(int x, int y)
    {
        return x >= 0 && x < size && y >= 0 && y < size;
    }
}