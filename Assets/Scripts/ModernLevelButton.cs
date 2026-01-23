using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;
using System.Collections;

public class ModernLevelButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
    [Header("References")]
    public Image backgroundImage;
    public Image iconImage;
    public TextMeshProUGUI levelNumberText;
    public GameObject lockIcon;
    public GameObject[] stars; // 3 y�ld�z
    public GameObject glowEffect;
    public GameObject newBadge; // Yeni a��lan level i�in "NEW" badge

    [Header("Colors")]
    public Color unlockedColor = new Color(0.4f, 0.8f, 0.4f); // Ye�il
    public Color lockedColor = new Color(0.5f, 0.5f, 0.5f); // Gri
    public Color currentLevelColor = new Color(1f, 0.8f, 0.2f); // Alt�n

    [Header("Animation Settings")]
    public float hoverScale = 1.1f;
    public float clickScale = 0.95f;
    public float animationDuration = 0.15f;
    public float bounceIntensity = 1.2f;

    private Vector3 originalScale;
    private bool isUnlocked;
    private bool isCurrentLevel;
    private int levelIndex;
    private Button button;
    private Coroutine scaleCoroutine;

    // Candy Crush tarz� renkler
    private Color[] candyColors = new Color[]
    {
        new Color(0.95f, 0.3f, 0.4f),   // K�rm�z�
        new Color(1f, 0.6f, 0.2f),       // Turuncu
        new Color(1f, 0.9f, 0.3f),       // Sar�
        new Color(0.4f, 0.85f, 0.4f),    // Ye�il
        new Color(0.3f, 0.7f, 0.95f),    // Mavi
        new Color(0.7f, 0.4f, 0.9f),     // Mor
        new Color(0.95f, 0.5f, 0.7f)     // Pembe
    };

    private void Awake()
    {
        originalScale = transform.localScale;
        button = GetComponent<Button>();
    }

    public void Setup(int index, bool unlocked, bool isCurrent, int starCount = 0)
    {
        levelIndex = index;
        isUnlocked = unlocked;
        isCurrentLevel = isCurrent;

        // Level numaras�
        if (levelNumberText != null)
        {
            levelNumberText.text = (index + 1).ToString();
            levelNumberText.gameObject.SetActive(unlocked);
        }

        // Kilit ikonu
        if (lockIcon != null)
        {
            lockIcon.SetActive(!unlocked);
        }

        // Renk ayarla
        if (backgroundImage != null)
        {
            if (!unlocked)
            {
                backgroundImage.color = lockedColor;
            }
            else if (isCurrent)
            {
                backgroundImage.color = currentLevelColor;
            }
            else
            {
                // Candy crush tarz� rastgele renk
                backgroundImage.color = candyColors[index % candyColors.Length];
            }
        }

        // Y�ld�zlar� ayarla
        SetStars(starCount);

        // Glow efekti (sadece current level i�in)
        if (glowEffect != null)
        {
            glowEffect.SetActive(isCurrent);
        }

        // NEW badge (current level i�in)
        if (newBadge != null)
        {
            newBadge.SetActive(isCurrent);
        }

        // Button interactable
        if (button != null)
        {
            button.interactable = unlocked;
        }

        // Current level ise pulse animasyonu ba�lat
        if (isCurrent && unlocked)
        {
            StartCoroutine(PulseAnimation());
        }
    }

    private void SetStars(int count)
    {
        if (stars == null) return;

        for (int i = 0; i < stars.Length; i++)
        {
            if (stars[i] != null)
            {
                stars[i].SetActive(i < count);
            }
        }
    }

    // Entrance animasyonu
    public void PlayEntranceAnimation(float delay)
    {
        transform.localScale = Vector3.zero;
        StartCoroutine(EntranceCoroutine(delay));
    }

    private IEnumerator EntranceCoroutine(float delay)
    {
        yield return new WaitForSeconds(delay);

        float elapsed = 0f;
        float duration = 0.4f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            // Bounce easing
            float bounce = BounceEaseOut(t);
            transform.localScale = originalScale * bounce;

            yield return null;
        }

        transform.localScale = originalScale;
    }

    private float BounceEaseOut(float t)
    {
        if (t < 0.5f)
        {
            return 2 * t * t;
        }
        else
        {
            float overshoot = 1.3f;
            float p = (t - 0.5f) * 2;
            return 1 + (1 - (1 - p) * (1 - p)) * (overshoot - 1) - (overshoot - 1) * (1 - p) * Mathf.Sin(p * Mathf.PI);
        }
    }

    // Pulse animasyonu (current level i�in)
    private IEnumerator PulseAnimation()
    {
        while (isCurrentLevel)
        {
            float elapsed = 0f;
            float duration = 1f;

            while (elapsed < duration)
            {
                elapsed += Time.deltaTime;
                float t = elapsed / duration;
                float scale = 1f + Mathf.Sin(t * Mathf.PI * 2) * 0.05f;
                transform.localScale = originalScale * scale;
                yield return null;
            }
        }
    }

    // Hover efektleri
    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!isUnlocked) return;
        AnimateScale(originalScale * hoverScale);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (!isUnlocked) return;
        AnimateScale(originalScale);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (!isUnlocked) return;
        AnimateScale(originalScale * clickScale);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (!isUnlocked) return;
        AnimateScale(originalScale * hoverScale);
    }

    private void AnimateScale(Vector3 targetScale)
    {
        if (scaleCoroutine != null)
            StopCoroutine(scaleCoroutine);
        scaleCoroutine = StartCoroutine(ScaleCoroutine(targetScale));
    }

    private IEnumerator ScaleCoroutine(Vector3 target)
    {
        Vector3 start = transform.localScale;
        float elapsed = 0f;

        while (elapsed < animationDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / animationDuration;
            t = 1 - (1 - t) * (1 - t); // Ease out
            transform.localScale = Vector3.Lerp(start, target, t);
            yield return null;
        }

        transform.localScale = target;
    }

    // T�klan�nca �a�r�lacak (buton click �ncesi efekt)
    public void OnButtonClick()
    {
        StartCoroutine(ClickAnimation());
    }

    private IEnumerator ClickAnimation()
    {
        // Bounce efekti
        Vector3 start = transform.localScale;
        transform.localScale = originalScale * bounceIntensity;

        float elapsed = 0f;
        while (elapsed < 0.2f)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / 0.2f;
            transform.localScale = Vector3.Lerp(originalScale * bounceIntensity, originalScale, t);
            yield return null;
        }
    }
}