using UnityEngine;
using TMPro;

public class FloatingText : MonoBehaviour
{
    public static void Create(Vector3 position, string text, Color color)
    {
        GameObject obj = new GameObject("FloatingText");
        obj.transform.position = position;

        TextMeshPro tmp = obj.AddComponent<TextMeshPro>();
        tmp.text = text;
        tmp.fontSize = 4;
        tmp.color = color;
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.sortingOrder = 100; 

        FloatingText ft = obj.AddComponent<FloatingText>();
        ft.StartAnimation();
    }

    private void StartAnimation()
    {
        StartCoroutine(AnimateCoroutine());
    }

    private System.Collections.IEnumerator AnimateCoroutine()
    {
        float duration = 1f;
        float elapsed = 0f;
        Vector3 startPos = transform.position;

        TextMeshPro tmp = GetComponent<TextMeshPro>();

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            
            transform.position = startPos + Vector3.up * t * 3f;

            
            Color c = tmp.color;
            c.a = 0.5f - t;
            tmp.color = c;

            yield return null;
        }

        Destroy(gameObject);
    }
}