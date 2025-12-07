using UnityEngine;

public class BoardGenerator : IBoardGenerator
{
    private readonly GameObject backgroundPrefab;
    private readonly Transform parent;
    private readonly BoardConfig config;

    public BoardGenerator(GameObject bgPrefab, Transform parentTransform, BoardConfig boardConfig)
    {
        backgroundPrefab = bgPrefab;
        parent = parentTransform;
        config = boardConfig;
    }

    public void Generate()
    {
        CreateBackgroundTiles();
        SetupCamera();
    }

    private void CreateBackgroundTiles()
    {
        for (int y = 0; y < config.Size; y++)
        {
            for (int x = 0; x < config.Size; x++)
            {
                Vector3 position = config.GetWorldPosition(x, y);
                position.z = 0f;
                Object.Instantiate(backgroundPrefab, position, Quaternion.identity, parent);
            }
        }
    }

    private void SetupCamera()
    {
        float boardWidth = config.GetBoardWidth();
        float camSize = Mathf.Max(boardWidth * 0.55f, (boardWidth * 0.55f) / Camera.main.aspect);
        Camera.main.orthographicSize = camSize;
    }
}