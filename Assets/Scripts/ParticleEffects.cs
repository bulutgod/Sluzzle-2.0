using UnityEngine;
using System.Collections.Generic;

public class ParticleEffects : MonoBehaviour
{
    public static ParticleEffects Instance { get; private set; }

    [Header("Particle Settings")]
    [SerializeField] private int particleCount = 12;
    [SerializeField] private float particleSpeed = 3f;
    [SerializeField] private float particleLifetime = 0.5f;

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
    }

    public void PlayMergeEffect(Vector3 position, Color color)
    {
        for (int i = 0; i < particleCount; i++)
        {
            CreateParticle(position, color);
        }
    }

    private void CreateParticle(Vector3 position, Color color)
    {
        GameObject particle = new GameObject("Particle");
        particle.transform.position = position;

        SpriteRenderer sr = particle.AddComponent<SpriteRenderer>();
        sr.sprite = CreateCircleSprite();
        sr.color = color;
        sr.sortingOrder = 99;

        ParticleMover mover = particle.AddComponent<ParticleMover>();
        mover.Initialize(particleSpeed, particleLifetime);
    }

    private Sprite CreateCircleSprite()
    {
        // Basit daire sprite oluþtur
        Texture2D texture = new Texture2D(32, 32);
        Color[] pixels = new Color[32 * 32];

        for (int y = 0; y < 32; y++)
        {
            for (int x = 0; x < 32; x++)
            {
                float dx = x - 16f;
                float dy = y - 16f;
                float distance = Mathf.Sqrt(dx * dx + dy * dy);

                if (distance <= 12f)
                {
                    pixels[y * 32 + x] = Color.white;
                }
                else
                {
                    pixels[y * 32 + x] = Color.clear;
                }
            }
        }

        texture.SetPixels(pixels);
        texture.Apply();

        return Sprite.Create(texture, new Rect(0, 0, 32, 32), new Vector2(0.5f, 0.5f), 100f);
    }
}

public class ParticleMover : MonoBehaviour
{
    private Vector3 velocity;
    private float lifetime;
    private float elapsed;
    private SpriteRenderer sr;
    private Vector3 initialScale;

    public void Initialize(float speed, float life)
    {
        // Rastgele yön
        float angle = Random.Range(0f, 360f) * Mathf.Deg2Rad;
        velocity = new Vector3(Mathf.Cos(angle), Mathf.Sin(angle), 0f) * speed;

        lifetime = life;
        sr = GetComponent<SpriteRenderer>();
        initialScale = transform.localScale * 0.15f;
        transform.localScale = initialScale;
    }

    private void Update()
    {
        elapsed += Time.deltaTime;

        if (elapsed >= lifetime)
        {
            Destroy(gameObject);
            return;
        }

        // Hareket et
        transform.position += velocity * Time.deltaTime;

        // Yavaþla
        velocity *= 0.95f;

        // Fade out ve küçül
        float t = elapsed / lifetime;
        Color c = sr.color;
        c.a = 1f - t;
        sr.color = c;

        transform.localScale = initialScale * (1f - t);
    }
}