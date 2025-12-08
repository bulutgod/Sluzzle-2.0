using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour
{
    [Header("Board Size Buttons")]
    [SerializeField] private Button button5x5;
    [SerializeField] private Button button6x6;
    [SerializeField] private Button button7x7;

    [Header("Visual Feedback (Optional)")]
    [SerializeField] private Color selectedColor = Color.green;
    [SerializeField] private Color normalColor = Color.white;

    private int currentSelectedSize = 5;

    void Start()
    {
        currentSelectedSize = BoardSizeManager.Instance.GetBoardSize();

        button5x5.onClick.AddListener(() => OnBoardSizeSelected(5));
        button6x6.onClick.AddListener(() => OnBoardSizeSelected(6));
        button7x7.onClick.AddListener(() => OnBoardSizeSelected(7));

        UpdateButtonVisuals();
    }

    private void OnBoardSizeSelected(int size)
    {
        currentSelectedSize = size;
        BoardSizeManager.Instance.SetBoardSize(size);
        UpdateButtonVisuals();

        LoadGameScene();
    }

    private void UpdateButtonVisuals()
    {
        SetButtonColor(button5x5, normalColor);
        SetButtonColor(button6x6, normalColor);
        SetButtonColor(button7x7, normalColor);

        switch (currentSelectedSize)
        {
            case 5:
                SetButtonColor(button5x5, selectedColor);
                break;
            case 6:
                SetButtonColor(button6x6, selectedColor);
                break;
            case 7:
                SetButtonColor(button7x7, selectedColor);
                break;
        }
    }

    private void SetButtonColor(Button button, Color color)
    {
        if (button != null)
        {
            var colors = button.colors;
            colors.normalColor = color;
            colors.highlightedColor = color;
            colors.selectedColor = color;
            button.colors = colors;
        }
    }

    private void LoadGameScene()
    {
        SceneManager.LoadScene("SampleScene");
    }

    public void OnPlayButtonClicked()
    {
        LoadGameScene();
    }
}