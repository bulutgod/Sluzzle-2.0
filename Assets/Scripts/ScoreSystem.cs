using System;

public class ScoreSystem : IScoreSystem
{
    public int currentScore;

    public int CurrentScore => currentScore;
    public event Action<int> OnScoreChanged;

    public void AddScore(int points)
    {
        if (points <= 0) return;

        currentScore += points;
        OnScoreChanged?.Invoke(currentScore);
    }

    public void Reset()
    {
        currentScore = 0;
        OnScoreChanged?.Invoke(currentScore);
    }
}