using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MoveHandler : IMoveHandler
{
    private readonly IGrid grid;
    private readonly ITileSpawner spawner;
    private readonly ITileFactory factory;
    private readonly BoardConfig config;
    private readonly IScoreSystem scoreSystem;
    private readonly IScoreCalculator scoreCalculator;
    private readonly float animationDuration;

    private bool isAnimating;

    public MoveHandler(IGrid tileGrid, ITileSpawner tileSpawner, ITileFactory tileFactory,
                       BoardConfig boardConfig, IScoreSystem score, IScoreCalculator calculator, float animDuration)
    {
        grid = tileGrid;
        spawner = tileSpawner;
        factory = tileFactory;
        config = boardConfig;
        scoreSystem = score;
        scoreCalculator = calculator;
        animationDuration = animDuration;
    }

    public void Execute(Vector2 direction)
    {
        if (isAnimating) return;

        var moveData = new MoveData(direction, grid.Size);
        var result = ProcessMovesAndMerges(moveData);

        if (result.moves.Count > 0 || result.merges.Count > 0)
        {
            CoroutineRunner.Instance.StartCoroutine(ExecuteMoveSequence(result, moveData));
        }
        else
        {
            CameraShake.Instance.Shake(0.15f, 0.1f);

            // Baþarýsýz hamle - streak sýfýrla
            if (StreakCounter.Instance != null)
            {
                StreakCounter.Instance.ResetStreak();
            }
        }
    }

    private MoveResult ProcessMovesAndMerges(MoveData moveData)
    {
        MoveResult result = new MoveResult();
        bool[,] willMerge = new bool[grid.Size, grid.Size];

        for (int primary = 0; primary < grid.Size; primary++)
        {
            List<TileInfo> lineTiles = new List<TileInfo>();

            for (int secondary = 0; secondary < grid.Size; secondary++)
            {
                int x = moveData.DX != 0 ? secondary : primary;
                int y = moveData.DX != 0 ? primary : secondary;

                if (grid[x, y] != null)
                {
                    lineTiles.Add(new TileInfo { tile = grid[x, y], x = x, y = y, level = grid[x, y].level });
                }
            }

            if (lineTiles.Count == 0) continue;

            if (moveData.DX > 0 || moveData.DY > 0)
            {
                lineTiles.Reverse();
            }

            int targetPos = (moveData.DX > 0 || moveData.DY > 0) ? grid.Size - 1 : 0;
            int step = (moveData.DX > 0 || moveData.DY > 0) ? -1 : 1;

            for (int i = 0; i < lineTiles.Count;)
            {
                if (i + 2 < lineTiles.Count &&
                    lineTiles[i].level == lineTiles[i + 1].level &&
                    lineTiles[i].level == lineTiles[i + 2].level)
                {
                    int mergeX = moveData.DX != 0 ? targetPos : lineTiles[i].x;
                    int mergeY = moveData.DX != 0 ? lineTiles[i].y : targetPos;

                    result.merges.Add(new MergeGroup
                    {
                        tiles = new List<Tile> { lineTiles[i].tile, lineTiles[i + 1].tile, lineTiles[i + 2].tile },
                        targetX = mergeX,
                        targetY = mergeY,
                        level = lineTiles[i].level
                    });

                    willMerge[lineTiles[i].x, lineTiles[i].y] = true;
                    willMerge[lineTiles[i + 1].x, lineTiles[i + 1].y] = true;
                    willMerge[lineTiles[i + 2].x, lineTiles[i + 2].y] = true;

                    targetPos += step;
                    i += 3;
                }
                else
                {
                    int newX = moveData.DX != 0 ? targetPos : lineTiles[i].x;
                    int newY = moveData.DX != 0 ? lineTiles[i].y : targetPos;

                    if (newX != lineTiles[i].x || newY != lineTiles[i].y)
                    {
                        result.moves.Add(new MoveInfo
                        {
                            tile = lineTiles[i].tile,
                            fromX = lineTiles[i].x,
                            fromY = lineTiles[i].y,
                            toX = newX,
                            toY = newY
                        });
                    }

                    targetPos += step;
                    i++;
                }
            }
        }

        return result;
    }

    private IEnumerator ExecuteMoveSequence(MoveResult result, MoveData moveData)
    {
        isAnimating = true;

        foreach (var move in result.moves)
        {
            grid[move.fromX, move.fromY] = null;
        }

        foreach (var merge in result.merges)
        {
            foreach (var tile in merge.tiles)
            {
                for (int x = 0; x < grid.Size; x++)
                {
                    for (int y = 0; y < grid.Size; y++)
                    {
                        if (grid[x, y] == tile)
                        {
                            grid[x, y] = null;
                        }
                    }
                }
            }
        }

        int completedMoves = 0;
        int totalActions = result.moves.Count + result.merges.Count * 3;

        foreach (var move in result.moves)
        {
            Vector3 targetPos = config.GetWorldPosition(move.toX, move.toY);
            move.tile.AnimateMoveTo(targetPos, animationDuration, () => completedMoves++);
        }

        foreach (var merge in result.merges)
        {
            Vector3 targetPos = config.GetWorldPosition(merge.targetX, merge.targetY);
            foreach (var tile in merge.tiles)
            {
                tile.AnimateMoveTo(targetPos, animationDuration, () => completedMoves++);
            }
        }

        while (completedMoves < totalActions)
        {
            yield return null;
        }

        foreach (var move in result.moves)
        {
            grid[move.toX, move.toY] = move.tile;
        }

        foreach (var merge in result.merges)
        {
            Tile survivor = merge.tiles[merge.tiles.Count - 1];

            for (int i = 0; i < merge.tiles.Count - 1; i++)
            {
                Object.Destroy(merge.tiles[i].gameObject);
            }

            factory.LevelUp(survivor);
            grid[merge.targetX, merge.targetY] = survivor;

            // Combo artýr
            if (ComboSystem.Instance != null)
            {
                ComboSystem.Instance.AddCombo();
            }

            // Streak artýr
            if (StreakCounter.Instance != null)
            {
                StreakCounter.Instance.IncrementStreak();
            }

            // Skor hesapla (combo multiplier ile)
            int baseScore = scoreCalculator.CalculateMergeScore(merge.level, merge.tiles.Count);
            int comboMultiplier = ComboSystem.Instance != null ? ComboSystem.Instance.GetComboMultiplier() : 1;
            int finalScore = baseScore * comboMultiplier;

            scoreSystem.AddScore(finalScore);

            // Floating text göster
            Vector3 scoreTextPos = config.GetWorldPosition(merge.targetX, merge.targetY);
            string scoreText = comboMultiplier > 1 ? $"+{finalScore} (x{comboMultiplier})" : $"+{finalScore}";
            FloatingText.Create(scoreTextPos, scoreText, Color.yellow);

            // Partikül efekti
            if (ParticleEffects.Instance != null)
            {
                Color tileColor = survivor.GetComponent<SpriteRenderer>().color;
                ParticleEffects.Instance.PlayMergeEffect(scoreTextPos, tileColor);
            }

            int animComplete = 0;
            survivor.PlayMergeAnimation(() => animComplete = 1);

            while (animComplete == 0)
            {
                yield return null;
            }
        }

        spawner.SpawnRandom();
        isAnimating = false;
    }

    private class MoveInfo
    {
        public Tile tile;
        public int fromX, fromY;
        public int toX, toY;
    }

    private class TileInfo
    {
        public Tile tile;
        public int x, y;
        public int level;
    }

    private class MergeGroup
    {
        public List<Tile> tiles;
        public int targetX, targetY;
        public int level;
    }

    private class MoveResult
    {
        public List<MoveInfo> moves = new List<MoveInfo>();
        public List<MergeGroup> merges = new List<MergeGroup>();
    }

    private readonly struct MoveData
    {
        public readonly int DX;
        public readonly int DY;

        public MoveData(Vector2 direction, int gridSize)
        {
            DX = Mathf.RoundToInt(direction.x);
            DY = Mathf.RoundToInt(direction.y);
        }
    }
}