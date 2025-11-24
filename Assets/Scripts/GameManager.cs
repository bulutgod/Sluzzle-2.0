using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject backgroundTilePrefab;
    public GameObject colorTilePrefab;

    public TileData[] tileLevels;

    public int boardSize = 7;
    public float tileSpacing = 1.1f;

    private GameObject[,] boardTiles;

    public float minSwipeDistance = 50f;

    private Vector2 startPos;
    private Vector2 endPos;
    void Start()
    {
        GenerateGrid();
        SpawnRandomTile();
        SpawnRandomTile();
    }

    void Update()
    {
        if(Pointer.current == null) return;
        if (Pointer.current.press.wasPressedThisFrame)
        {
            startPos = Pointer.current.position.ReadValue();
        }

        if (Pointer.current.press.wasReleasedThisFrame)
        {
            endPos = Pointer.current.position.ReadValue();

            CalculateSwipe();
        }
    }

    void GenerateGrid()
    {
        boardTiles = new GameObject[boardSize, boardSize];

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

                //boardTiles[x, y] = bgTile;
            }

        }
        float boardHeight = boardSize * tileSpacing;
        float boardWidth = boardSize * tileSpacing;
        float orthoSizeBasedOnHeight = (boardHeight / 2f) * 0.5f;
        float orthoSizeBasedOnWidth = (boardWidth / 2f / Camera.main.aspect) * 1.1f;
        Camera.main.orthographicSize = Mathf.Max(orthoSizeBasedOnHeight, orthoSizeBasedOnWidth);
       
    }

    void CalculateSwipe()
    {
        Vector2 swipeVector = endPos - startPos;

        if (swipeVector.magnitude < minSwipeDistance)
        {
            return;     
        }
        swipeVector.Normalize();

        if (Mathf.Abs(swipeVector.x) > Mathf.Abs(swipeVector.y))
        {
            if(swipeVector.x > 0)
            {
                Debug.Log("Saða Kaydirdin");
            }
            else
            {
                Debug.Log("Sola Kaydirdin");
            }

            if(swipeVector.y > 0)
            {
                Debug.Log("Yukari Kaydirdin");
            }
            else
            {
                Debug.Log("Asagi Kaydirdin");
            }
        }
    }

    void SpawnTile(int x, int y, int levelIndex)
    {
        float offset = -(boardSize * tileSpacing) / 2.0f + (tileSpacing / 2.0f);
        
        float xPos = offset + (x * tileSpacing);
        float yPos = offset + (y * tileSpacing);
        Vector3 position = new Vector3(xPos, yPos, -1f);

        GameObject newTile = Instantiate(colorTilePrefab, position, Quaternion.identity);

        newTile.transform.parent = this.transform;
        newTile.name = $"Tile({x},{y}_{levelIndex})";

        boardTiles[x, y] = newTile;
            
        newTile.GetComponent<SpriteRenderer>().color = tileLevels[levelIndex].tileColor;
       
    }
    void SpawnRandomTile()
    {
        List<Vector2Int> emptySpots = new List<Vector2Int>();

        for (int x = 0; x < boardSize; x++)
        {
            for (int y = 0; y < boardSize; y++)
            {
                if (boardTiles[x, y] == null)
                {
                    emptySpots.Add(new Vector2Int(x, y));

                }
            }
        }

        if (emptySpots.Count > 0)
        {
            int randomIndex = Random.Range(0, emptySpots.Count);

            Vector2Int randomSpot = emptySpots[randomIndex];

            SpawnTile(randomSpot.x, randomSpot.y, 0);
        }
    }
}
