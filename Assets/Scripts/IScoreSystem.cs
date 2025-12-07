using System;

public interface IScoreSystem
{
    int CurrentScore { get; }
    void AddScore(int points);
    void Reset();
    event Action<int> OnScoreChanged;
}

public interface IScoreCalculator
{
    int CalculateMergeScore(int tileLevel, int mergeCount);
}