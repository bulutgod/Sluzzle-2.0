using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    [Header("Prefabs")]
    [SerializeField] private GameObject backgroundTilePrefab;
    [SerializeField] private GameObject colorTilePrefab;
    [SerializeField] private TileData[] tileLevels;

    [Header("Board Settings")]
    [SerializeField] private int boardSize = 7;
    [SerializeField] private float tileSpacing = 1.1f;

    [Header("Input Settings")]
    [SerializeField] private float minSwipeDistance = 50f;

    [Header("Animation Settings")]
    [SerializeField] private float moveAnimationDuration = 0.15f;

    private IGrid grid;
    private IBoardGenerator boardGenerator;
    private IInputHandler inputHandler;
    private ITileSpawner tileSpawner;
    private IMoveHandler moveHandler;
    private IScoreSystem scoreSystem;
    private ScoreUI scoreUI;

    void Awake()
    {
        Input.multiTouchEnabled = false;
        InitializeSystems();
    }

    void Start()
    {
        boardGenerator.Generate();
        tileSpawner.SpawnRandom();
        tileSpawner.SpawnRandom();
    }

    void Update()
    {
        if (Pointer.current == null) return;

        Vector2? direction = inputHandler.GetSwipeDirection(Pointer.current);
        if (direction.HasValue)
        {
            moveHandler.Execute(direction.Value);
        }
    }

    private void InitializeSystems()
    {
        var config = new BoardConfig(boardSize, tileSpacing);
        grid = new TileGrid(boardSize);

        var factory = new TileFactory(colorTilePrefab, tileLevels, transform);
        scoreSystem = new ScoreSystem();
        var scoreCalculator = new ScoreCalculator(tileLevels);

        boardGenerator = new BoardGenerator(backgroundTilePrefab, transform, config);
        inputHandler = new InputHandler(minSwipeDistance);
        tileSpawner = new TileSpawner(grid, factory, config);
        moveHandler = new MoveHandler(grid, tileSpawner, factory, config, scoreSystem, scoreCalculator, moveAnimationDuration);

        scoreUI = GetComponent<ScoreUI>();
        if (scoreUI != null)
        {
            scoreSystem.OnScoreChanged += scoreUI.UpdateScore;
            scoreUI.UpdateScore(0);
        }
    }
}