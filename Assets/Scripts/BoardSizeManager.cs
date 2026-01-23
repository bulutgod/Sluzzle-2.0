using UnityEngine;

public class BoardSizeManager : MonoBehaviour
{
    private static BoardSizeManager instance;
    public static BoardSizeManager Instance
    {
        get
        {
            if (instance == null)
            {
                GameObject go = new GameObject("BoardSizeManager");
                instance = go.AddComponent<BoardSizeManager>();
                DontDestroyOnLoad(go);
            }
            return instance;
        }
    }

    private const string BOARD_SIZE_KEY = "BoardSize";
    private int currentBoardSize = 5;

    void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(gameObject);

        LoadBoardSize();
    }

    public void SetBoardSize(int size)
    {
        currentBoardSize = size;
        PlayerPrefs.SetInt(BOARD_SIZE_KEY, size);
        PlayerPrefs.Save();
        Debug.Log($"Board size set to: {size}x{size}");
    }

    public int GetBoardSize()
    {
        return currentBoardSize;
    }

    private void LoadBoardSize()
    {
        if (PlayerPrefs.HasKey(BOARD_SIZE_KEY))
        {
            currentBoardSize = PlayerPrefs.GetInt(BOARD_SIZE_KEY);
        }
        else
        {
            currentBoardSize = 5; 
        }
        Debug.Log($"Loaded board size: {currentBoardSize}x{currentBoardSize}");
    }
}