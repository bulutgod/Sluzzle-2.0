using UnityEngine;
using System.Collections;

public class WinScreenManager : MonoBehaviour
{
    [Header("--- SADECE KONFETÝ ---")]
    public ParticleSystem winConfetti; // Tek ihtiyacýmýz olan bu

    // Bölüm bitince bunu çaðýracaksýn
    public void StartWinSequence()
    {
        // Eðer kutucuða konfeti koyduysan çalýþtýr
        if (winConfetti != null)
        {
            winConfetti.Play();
        }
    }
}