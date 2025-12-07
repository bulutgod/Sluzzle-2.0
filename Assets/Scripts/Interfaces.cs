using UnityEngine;
using UnityEngine.InputSystem;

public interface IGrid
{
    Tile this[int x, int y] { get; set; }
    int Size { get; }
    bool IsValidPosition(int x, int y);
}

public interface IBoardGenerator
{
    void Generate();
}

public interface IInputHandler
{
    Vector2? GetSwipeDirection(Pointer pointer);
}

public interface ITileSpawner
{
    void SpawnRandom();
}

public interface IMoveHandler
{
    void Execute(Vector2 direction);
}

public interface ITileFactory
{
    Tile Create(Vector3 position, int levelIndex);
    void LevelUp(Tile tile);
    int GetTileScore(int levelIndex);
}