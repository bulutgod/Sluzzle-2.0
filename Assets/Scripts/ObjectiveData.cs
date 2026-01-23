using UnityEngine;

[CreateAssetMenu(fileName = "ObjectiveData", menuName = "Game/Objective Data")]
public class ObjectiveData : ScriptableObject
{
    [Header("=== VISUAL ===")]
    public Sprite icon;
    public Color backgroundColor = Color.white;
    
    [Header("=== INFO ===")]
    public string objectiveName;
    public int tileLevel; 
}