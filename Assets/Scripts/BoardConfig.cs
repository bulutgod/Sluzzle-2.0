using UnityEngine;

public readonly struct BoardConfig
{
    public readonly int Size;
    public readonly float Spacing;
    public readonly float Offset;

    public BoardConfig(int size, float spacing)
    {
        Size = size;
        Spacing = spacing;
        Offset = -(size * spacing) / 2f + (spacing / 2f);
    }

    public Vector3 GetWorldPosition(int x, int y)
    {
        return new Vector3(
            Offset + x * Spacing,
            Offset + y * Spacing,
            -1f
        );
    }

    public float GetBoardWidth() => Size * Spacing;
}