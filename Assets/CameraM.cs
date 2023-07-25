using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraM : MonoBehaviour
{
    public float sensX;
    public float sensY;

    public Transform orientation;
    public Transform playerBody;

    float xRotation;
    float yRotation;
    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false; 
    }
    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * Time.deltaTime * sensX ;
        float mouseY = Input.GetAxis("Mouse Y") * Time.deltaTime * sensY;
        playerBody.Rotate(Vector3.up * mouseX);
        yRotation += mouseX;
        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f);
        transform.root.rotation = Quaternion.Euler(xRotation, yRotation, 0);
        orientation.rotation = Quaternion.Euler(0, yRotation, 0);

    }
}
