using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamH : MonoBehaviour
{
    float mouseX;
    float mouseY;

    public float sensitivity = 100f;
    public Transform player;
    public Transform viseur;
    float rotation = 0f;
    float rotationY = 0f;
    private float v;
    public float minAngle = -90f;
    public float maxAngle = 90f;
    // Start is called before the first frame update

    private void Awake()
    {
        v = transform.rotation.y;
        //Debug.Log(v);
    }
    private void OnEnable()
    {

    }
    // Update is called once per frame
    void Update()
    {
        mouseX = Input.GetAxis("Mouse X") * sensitivity * Time.deltaTime;
        mouseY = Input.GetAxis("Mouse Y") * sensitivity * Time.deltaTime;
        mouseY = Mathf.Clamp(mouseY, -2, 2);
        mouseX = Mathf.Clamp(mouseX, -2, 2);
        rotationY += mouseX;
        rotation -= mouseY;
        rotation = Mathf.Clamp(rotation, minAngle, maxAngle);
        rotationY = Mathf.Clamp(rotationY, -45, 45);
        transform.rotation = Quaternion.Euler(rotation, rotationY, 0);
        player.rotation = transform.rotation;
        viseur.rotation = transform.rotation;

        //player.Rotate(Vector3.right * (-mouseY) + Vector3.up * mouseX);

    }
}
