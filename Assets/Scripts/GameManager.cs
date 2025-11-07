using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject backgroundTilePrefab;

    public int boardSize = 7;

    public float tileSpacing = 1.1f;
    void Start()
    {
        GenerateGrid();
    }

    

    void GenerateGrid()
    {
        float offset = - (boardSize * tileSpacing) / 2.0f + (tileSpacing / 2.0f);

        for (int y = 0; y < boardSize; y++)
        {
            for (int x = 0; x < boardSize; x++)
            {
                float xPos = offset + (x * tileSpacing);
                float yPos = offset + (y * tileSpacing);

                Vector2 position = new Vector2(xPos, yPos);

                GameObject bgTile = Instantiate(backgroundTilePrefab, position, Quaternion.identity);

                bgTile.transform.parent = this.transform;
                bgTile.name = $"BG_Tile({ x},{ y})";
            }

        }
        float boardHeight = boardSize * tileSpacing;
        float boardWidth = boardSize * tileSpacing;

        float orthoSizeBasedOnHeight = (boardHeight / 2f) * 0.5f;

        float orthoSizeBasedOnWidth = (boardWidth / 2f / Camera.main.aspect) * 1.1f;

        Camera.main.orthographicSize = Mathf.Max(orthoSizeBasedOnHeight, orthoSizeBasedOnWidth);
       
    }
}
