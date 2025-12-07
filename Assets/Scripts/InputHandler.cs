using UnityEngine;
using UnityEngine.InputSystem;

public class InputHandler : IInputHandler
{
    private readonly float minSwipeDistance;
    private Vector2 startPos;
    private bool isPressed;

    public InputHandler(float minDistance)
    {
        minSwipeDistance = minDistance;
    }

    public Vector2? GetSwipeDirection(Pointer pointer)
    {
        Vector2 currentPos = pointer.position.ReadValue();

        if (pointer.press.wasPressedThisFrame)
        {
            startPos = currentPos;
            isPressed = true;
            return null;
        }

        if (pointer.press.wasReleasedThisFrame && isPressed)
        {
            isPressed = false;
            return CalculateDirection(currentPos);
        }

        return null;
    }

    private Vector2? CalculateDirection(Vector2 endPos)
    {
        Vector2 delta = endPos - startPos;

        if (delta.magnitude < minSwipeDistance)
            return null;

        float absX = Mathf.Abs(delta.x);
        float absY = Mathf.Abs(delta.y);

        if (absX > absY)
            return delta.x > 0 ? Vector2.right : Vector2.left;

        return delta.y > 0 ? Vector2.up : Vector2.down;
    }
}