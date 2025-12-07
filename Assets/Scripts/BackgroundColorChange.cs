using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BackgroundColorChange : MonoBehaviour
{
    public Image backgroundPanel;
    public float transitionSpeed = 2f;

    private GameManager gameManager;
    private IScoreSystem scoreSystem;
    private int lastCheckpoint = 0;
    private Color targetColor;

    private void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        scoreSystem = gameManager.ScoreSystem;

        targetColor = backgroundPanel.color;

        scoreSystem.OnScoreChanged += OnScoreChanged;
    }

    private void OnDestroy()
    {
        if (scoreSystem != null)
            scoreSystem.OnScoreChanged -= OnScoreChanged;
    }

    private void OnScoreChanged(int score)
    {
        if (score >= lastCheckpoint + 2000)
        {
            SetRandomTargetColor();
            lastCheckpoint += 2000;
        }
    }

    private void Update()
    {
        backgroundPanel.color = Color.Lerp(
            backgroundPanel.color,
            targetColor,
            Time.deltaTime * transitionSpeed
        );
    }

    private void SetRandomTargetColor()
    {
        targetColor = new Color(
            Random.Range(0.2f, 1f),
            Random.Range(0.2f, 1f),
            Random.Range(0.2f, 1f)
        );
    }
}
