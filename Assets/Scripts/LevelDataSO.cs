using UnityEngine;
using System.Collections.Generic;

[System.Serializable]
public class LevelObjective
{
    [Header("Hedef")]
    public int tileLevel; 
    public int targetCount; 

    [HideInInspector] public int currentCount; 
}

[CreateAssetMenu(fileName = "NewLevel", menuName = "Sluzzle/Level Data")]
public class LevelDataSO : ScriptableObject
{
    [Header("Level Bilgileri")]
    public int levelNumber = 1;
    public string levelName = "Yeni Level";

    [Header("Hedefler")]
    public List<LevelObjective> objectives = new List<LevelObjective>();

    [Header("Açýklama (Opsiyonel)")]
    [TextArea(3, 5)]
    public string description = "";
}