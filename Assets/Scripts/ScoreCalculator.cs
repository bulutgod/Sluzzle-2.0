public class ScoreCalculator : IScoreCalculator
{
    private readonly TileData[] tileLevels;

    public ScoreCalculator(TileData[] levels)
    {
        tileLevels = levels;
    }

    public int CalculateMergeScore(int tileLevel, int mergeCount)
    {
        if (tileLevel < 0 || tileLevel >= tileLevels.Length)
            return 0;

        int baseScore = tileLevels[tileLevel].ScoreValue;
        return baseScore * mergeCount;
    }
}