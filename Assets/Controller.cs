using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller : MonoBehaviour
{
    public float speed;
    public float gravity = -20f;
    private float Hinput;
    private float Vinput;
    private Vector3 Vmove;
    CharacterController characterController;
    private Vector3 Hmove;
    public float jumpSpeed; 
    // Start is called before the first frame update
    void Start()
    {
        characterController = GetComponent<CharacterController>();  
    }

    // Update is called once per frame
    void Update()
    {
        Hinput = Input.GetAxis("Horizontal");
        Vinput = Input.GetAxis("Vertical");
        characterController.Move(Vmove * speed * Time.deltaTime);

        characterController.transform.Rotate(Vector3.up * Hinput * (100f * Time.deltaTime));

        Vmove = characterController.transform.forward * Vinput;

        if (Input.GetButtonDown("Jump")&& characterController.isGrounded)
        {
            Vmove.y = jumpSpeed * (50f*Time.deltaTime); 
        }
        Vmove.y += gravity * Time.deltaTime;
        characterController.Move(Vmove  * Time.deltaTime);
    }

}
