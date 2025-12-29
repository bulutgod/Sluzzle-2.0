using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;

public class TitleAnimator : MonoBehaviour
{
    [Header("Title Text")]
    [SerializeField] private TextMeshProUGUI titleText;

    [Header("Animasyon Ayarlarý")]
    [SerializeField] private bool enableFloat = true;
    [SerializeField] private bool enableGlow = true;
    [SerializeField] private bool enableGradient = true;
    [SerializeField] private bool enableLetterAnimation = true;

    [Header("Float Ayarlarý")]
    [SerializeField] private float floatAmount = 10f;
    [SerializeField] private float floatSpeed = 2f;

    [Header("Glow Ayarlarý")]
    [SerializeField] private float glowSpeed = 1.5f;
    [SerializeField] private float minGlow = 0.3f;
    [SerializeField] private float maxGlow = 0.8f;
    [SerializeField] private Color glowColor = new Color(0.3f, 0.7f, 1f);

    [Header("Gradient Renkleri")]
    [SerializeField] private Color color1 = new Color(1f, 0.4f, 0.6f);    // Pembe
    [SerializeField] private Color color2 = new Color(0.4f, 0.8f, 1f);    // Mavi
    [SerializeField] private Color color3 = new Color(0.9f, 0.6f, 1f);    // Mor
    [SerializeField] private float gradientSpeed = 0.5f;

    [Header("Letter Animation")]
    [SerializeField] private float waveAmount = 5f;
    [SerializeField] private float waveSpeed = 3f;

    [Header("Gölge")]
    [SerializeField] private GameObject shadowObject;

    private Vector3 originalPosition;
    private RectTransform rectTransform;
    private Material textMaterial;

    // Candy Crush tarzý renkler
    private Color[] candyGradient = new Color[]
    {
        new Color(1f, 0.35f, 0.5f),     // Pembe-Kýrmýzý
        new Color(1f, 0.6f, 0.2f),      // Turuncu
        new Color(1f, 0.9f, 0.3f),      // Sarý
        new Color(0.4f, 0.9f, 0.5f),    // Yeþil
        new Color(0.3f, 0.7f, 1f),      // Mavi
        new Color(0.7f, 0.4f, 1f),      // Mor
    };

    private void Start()
    {
        rectTransform = GetComponent<RectTransform>();
        originalPosition = rectTransform.anchoredPosition;

        if (titleText == null)
            titleText = GetComponent<TextMeshProUGUI>();

        SetupTitle();
    }

    private void SetupTitle()
    {
        if (titleText == null) return;

        // Temel stil ayarlarý
        titleText.fontSize = 128;
        titleText.fontStyle = FontStyles.Bold;
        titleText.alignment = TextAlignmentOptions.Center;

        // Outline
        titleText.outlineWidth = 0.2f;
        titleText.outlineColor = new Color(0, 0, 0, 0.5f);

        // Gradient aktifse
        if (enableGradient)
        {
            titleText.enableVertexGradient = true;
            titleText.colorGradient = new VertexGradient(
                color1,                    // Sol üst
                color2,                    // Sað üst  
                color3,                    // Sol alt
                color1                     // Sað alt
            );
        }

        // Glow efekti için material ayarý
        if (enableGlow && titleText.fontMaterial != null)
        {
            // Glow için material instance oluþtur
            textMaterial = new Material(titleText.fontMaterial);
            titleText.fontMaterial = textMaterial;
        }
    }

    private void Update()
    {
        if (enableFloat)
        {
            FloatAnimation();
        }

        if (enableGlow)
        {
            GlowAnimation();
        }

        if (enableGradient)
        {
            AnimateGradient();
        }

        if (enableLetterAnimation)
        {
            WaveAnimation();
        }

        // Gölgeyi takip ettir
        if (shadowObject != null)
        {
            shadowObject.transform.position = transform.position + new Vector3(4, -4, 0);
        }
    }

    private void FloatAnimation()
    {
        float newY = originalPosition.y + Mathf.Sin(Time.time * floatSpeed) * floatAmount;
        rectTransform.anchoredPosition = new Vector2(originalPosition.x, newY);
    }

    private void GlowAnimation()
    {
        if (textMaterial != null)
        {
            float glow = Mathf.Lerp(minGlow, maxGlow, (Mathf.Sin(Time.time * glowSpeed) + 1f) / 2f);

            // TMP'nin glow özelliklerini kullan
            textMaterial.SetFloat(ShaderUtilities.ID_GlowPower, glow);
            textMaterial.SetColor(ShaderUtilities.ID_GlowColor, glowColor);
        }
    }

    private void AnimateGradient()
    {
        if (titleText == null) return;

        float t = Time.time * gradientSpeed;

        // Renkleri döngüsel olarak deðiþtir
        int index1 = Mathf.FloorToInt(t) % candyGradient.Length;
        int index2 = (index1 + 1) % candyGradient.Length;
        int index3 = (index1 + 2) % candyGradient.Length;
        int index4 = (index1 + 3) % candyGradient.Length;

        float lerp = t - Mathf.Floor(t);

        Color c1 = Color.Lerp(candyGradient[index1], candyGradient[index2], lerp);
        Color c2 = Color.Lerp(candyGradient[index2], candyGradient[index3], lerp);
        Color c3 = Color.Lerp(candyGradient[index3], candyGradient[index4], lerp);
        Color c4 = Color.Lerp(candyGradient[index4], candyGradient[index1], lerp);

        titleText.colorGradient = new VertexGradient(c1, c2, c3, c4);
    }

    private void WaveAnimation()
    {
        if (titleText == null) return;

        titleText.ForceMeshUpdate();

        TMP_TextInfo textInfo = titleText.textInfo;

        for (int i = 0; i < textInfo.characterCount; i++)
        {
            if (!textInfo.characterInfo[i].isVisible)
                continue;

            int vertexIndex = textInfo.characterInfo[i].vertexIndex;
            int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;

            Vector3[] vertices = textInfo.meshInfo[materialIndex].vertices;

            // Her harf için wave offset hesapla
            float offset = Mathf.Sin(Time.time * waveSpeed + i * 0.5f) * waveAmount;

            // 4 vertex'i de hareket ettir (her karakter 4 vertex)
            vertices[vertexIndex + 0].y += offset;
            vertices[vertexIndex + 1].y += offset;
            vertices[vertexIndex + 2].y += offset;
            vertices[vertexIndex + 3].y += offset;
        }

        // Mesh'i güncelle
        for (int i = 0; i < textInfo.meshInfo.Length; i++)
        {
            textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
            titleText.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
        }
    }

    // Entrance animasyonu (sahne açýlýþýnda çaðýr)
    public void PlayEntranceAnimation()
    {
        StartCoroutine(EntranceCoroutine());
    }

    private IEnumerator EntranceCoroutine()
    {
        // Baþlangýçta görünmez ve yukarýda
        titleText.alpha = 0f;
        Vector2 startPos = originalPosition + new Vector3(0, 100, 0);
        rectTransform.anchoredPosition = startPos;

        float duration = 0.8f;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            // Ease out bounce
            float bounce = EaseOutBounce(t);

            rectTransform.anchoredPosition = Vector2.Lerp(startPos, originalPosition, bounce);
            titleText.alpha = t;

            yield return null;
        }

        rectTransform.anchoredPosition = originalPosition;
        titleText.alpha = 1f;
    }

    private float EaseOutBounce(float t)
    {
        if (t < 1 / 2.75f)
        {
            return 7.5625f * t * t;
        }
        else if (t < 2 / 2.75f)
        {
            t -= 1.5f / 2.75f;
            return 7.5625f * t * t + 0.75f;
        }
        else if (t < 2.5f / 2.75f)
        {
            t -= 2.25f / 2.75f;
            return 7.5625f * t * t + 0.9375f;
        }
        else
        {
            t -= 2.625f / 2.75f;
            return 7.5625f * t * t + 0.984375f;
        }
    }

    // Parýltý efekti (özel anlarda çaðýr)
    public void PlaySparkle()
    {
        StartCoroutine(SparkleCoroutine());
    }

    private IEnumerator SparkleCoroutine()
    {
        float originalSize = titleText.fontSize;

        // Hýzlý scale up-down
        float duration = 0.3f;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;
            float scale = 1f + Mathf.Sin(t * Mathf.PI) * 0.1f;
            titleText.fontSize = originalSize * scale;
            yield return null;
        }

        titleText.fontSize = originalSize;
    }
}