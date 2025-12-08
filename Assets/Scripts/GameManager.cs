using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    [Header("Prefabs")]
    [SerializeField] private GameObject backgroundTilePrefab;
    [SerializeField] private GameObject colorTilePrefab;
    [SerializeField] private TileData[] tileLevels;

    [Header("Board Settings")]
    [SerializeField] private int defaultBoardSize = 5;
    [SerializeField] private float tileSpacing = 1.1f;

    [Header("Input Settings")]
    [SerializeField] private float minSwipeDistance = 50f;

    [Header("Animation Settings")]
    [SerializeField] private float moveAnimationDuration = 0.15f;

    [Header("Performance")]
    [SerializeField] private bool useMaxRefreshRate = true;
    [SerializeField] private int fallbackFrameRate = 60;

    private int boardSize; 
    private IGrid grid;
    private IBoardGenerator boardGenerator;
    private IInputHandler inputHandler;
    private ITileSpawner tileSpawner;
    private IMoveHandler moveHandler;
    private IScoreSystem scoreSystem;
    private ScoreUI scoreUI;

    public IScoreSystem ScoreSystem => scoreSystem;

    void Awake()
    {
        SetOptimalFrameRate();
        Input.multiTouchEnabled = false;
        QualitySettings.vSyncCount = 0;

        boardSize = BoardSizeManager.Instance.GetBoardSize();

        if (boardSize < 5 || boardSize > 7)
        {
            boardSize = defaultBoardSize;
            Debug.LogWarning($"Invalid board size, using default: {defaultBoardSize}");
        }

        Debug.Log($"Initializing game with board size: {boardSize}x{boardSize}");

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

        if (Pointer.current.press.isPressed || Pointer.current.press.wasReleasedThisFrame)
        {
            Vector2? direction = inputHandler.GetSwipeDirection(Pointer.current);
            if (direction.HasValue)
            {
                moveHandler.Execute(direction.Value);
            }
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

    private void SetOptimalFrameRate()
    {
        if (useMaxRefreshRate)
        {
            int maxRefreshRate = Screen.currentResolution.refreshRate;
            if (maxRefreshRate > 60)
            {
                Application.targetFrameRate = maxRefreshRate;
                Debug.Log($"High refresh rate detected: {maxRefreshRate}Hz");
            }
            else
            {
                Application.targetFrameRate = fallbackFrameRate;
                Debug.Log($"Standard refresh rate: {fallbackFrameRate}Hz");
            }
        }
        else
        {
            Application.targetFrameRate = fallbackFrameRate;
        }
    }
}