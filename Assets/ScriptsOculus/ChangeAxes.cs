using UnityEngine;

public class ChangeAxes : MonoBehaviour
{
    // Set the new orientation for the local axes
    public Vector3 newOrientation = new Vector3(90f, 0f, 0f);

    // Update is called once per frame
    void Update()
    {
        // Get the transform component of the GameObject
        Transform objectTransform = gameObject.transform;

        // Set the new rotation for the local axes
        objectTransform.rotation = Quaternion.Euler(newOrientation);
    }
}
