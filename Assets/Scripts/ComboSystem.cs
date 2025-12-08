using UnityEngine;
using TMPro;
using System.Collections;

public class ComboSystem : MonoBehaviour
{
    public static ComboSystem Instance { get; private set; }

    [Header("UI References")]
    [SerializeField] private TextMeshProUGUI comboText;
    [SerializeField] private CanvasGroup comboCanvasGroup;

    [Header("Settings")]
    [SerializeField] private float comboResetTime = 2f;
    [SerializeField] private float fadeSpeed = 3f;

    private int currentCombo = 0;
    private float lastMergeTime;
    private Coroutine fadeCoroutine;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        if (comboCanvasGroup != null)
        {
            comboCanvasGroup.alpha = 0;
        }
    }

    private void Update()
    {
        if (currentCombo > 0 && Time.time - lastMergeTime > comboResetTime)
        {
            ResetCombo();
        }
    }

    public void AddCombo()
    {
        currentCombo++;
        lastMergeTime = Time.time;

        if (currentCombo >= 2)
        {
            UpdateComboUI();
            ShowCombo();
        }
    }

    public int GetComboMultiplier()
    {
        if (currentCombo >= 5) return 3;
        if (currentCombo >= 3) return 2;
        return 1;
    }

    public int GetCurrentCombo()
    {
        return currentCombo;
    }

    private void UpdateComboUI()
    {
        if (comboText != null)
        {
            comboText.text = $"COMBO x{currentCombo}!";

            
            if (currentCombo >= 5)
                comboText.color = new Color(1f, 0.3f, 0.3f); 
            else if (currentCombo >= 3)
                comboText.color = new Color(1f, 0.6f, 0f);
            else
                comboText.color = Color.yellow;
        }
    }

    private void ShowCombo()
    {
        if (fadeCoroutine != null)
        {
            StopCoroutine(fadeCoroutine);
        }

        fadeCoroutine = StartCoroutine(FadeInAndPulse());
    }

    private IEnumerator FadeInAndPulse()
    {
        
        while (comboCanvasGroup.alpha < 1f)
        {
            comboCanvasGroup.alpha += Time.deltaTime * fadeSpeed;
            yield return null;
        }

       
        Vector3 originalScale = comboText.transform.localScale;
        float pulseDuration = 0.2f;
        float elapsed = 0f;

        while (elapsed < pulseDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / pulseDuration;
            float scale = 1f + Mathf.Sin(t * Mathf.PI) * 0.3f;
            comboText.transform.localScale = originalScale * scale;
            yield return null;
        }

        comboText.transform.localScale = originalScale;
    }

    private void ResetCombo()
    {
        currentCombo = 0;

        if (fadeCoroutine != null)
        {
            StopCoroutine(fadeCoroutine);
        }

        fadeCoroutine = StartCoroutine(FadeOut());
    }

    private IEnumerator FadeOut()
    {
        while (comboCanvasGroup.alpha > 0f)
        {
            comboCanvasGroup.alpha -= Time.deltaTime * fadeSpeed;
            yield return null;
        }
    }
}