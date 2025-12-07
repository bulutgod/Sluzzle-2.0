using UnityEngine;
using TMPro;
using System;

public class GameTimer : MonoBehaviour
{
    public static GameTimer instance;

    public TextMeshProUGUI timerText;

    private float elapsedTime = 0f;
    private bool isRunning = true;

    public float pulseDuration = 0.3f;
    public float scaleMultiplier = 1.3f;

    private Vector3 normalScale;
    private bool isPulsing = false;
    private float pulseTimer = 0f;
    private int lastPulseSecond = 0;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        normalScale = timerText.transform.localScale;
    }

    void Update()
    {
        if (!isRunning) return;

        elapsedTime += Time.deltaTime;
        UpdateTimerUI();

        int currentSecond = Mathf.FloorToInt(elapsedTime);

        if (currentSecond % 10 == 0 && currentSecond != 0 && currentSecond != lastPulseSecond)
        {
            StartPulse();
            lastPulseSecond = currentSecond;
        }

        if (isPulsing)
        {
            PulseAnimation();
        }
    }

    void UpdateTimerUI()
    {
        int minutes = Mathf.FloorToInt(elapsedTime / 60);
        int seconds = Mathf.FloorToInt(elapsedTime % 60);

        timerText.text = $"{minutes:00}:{seconds:00}";
    }

    void StartPulse()
    {
        isPulsing = true;
        pulseTimer = 0f;
    }

    void PulseAnimation()
    {
        pulseTimer += Time.deltaTime;

        float half = pulseDuration / 2f;

        if (pulseTimer <= half)
        {
            float t = pulseTimer / half;
            timerText.transform.localScale = Vector3.Lerp(normalScale, normalScale * scaleMultiplier, t);
        }
        else if (pulseTimer <= pulseDuration)
        {
            float t = (pulseTimer - half) / half;
            timerText.transform.localScale = Vector3.Lerp(normalScale * scaleMultiplier, normalScale, t);
        }
        else
        {
            isPulsing = false;
            timerText.transform.localScale = normalScale;
        }
    }

    public void StopTimer()
    {
        isRunning = false;
        timerText.transform.localScale = normalScale;
    }

    public void ResetTimer()
    {
        elapsedTime = 0f;
        isRunning = true;
        lastPulseSecond = 0;
    }
}
