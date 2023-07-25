using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerMen : MonoBehaviour
{
    public float speed;
    public float gravity = -20f;
    private float Hinput;
    private float Vinput;
    private Vector3 Vmove;
    CharacterController characterController;
    private Vector3 Hmove;
    public float jumpHeight = 3f;
     Animator anim;
    public AudioSource walkGrass;

    // Start is called before the first frame update
    void Start()
    {
        characterController = GetComponent<CharacterController>();
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        Hinput = Input.GetAxis("Horizontal");
        Vinput = Input.GetAxis("Vertical") ;
        characterController.Move(Vmove * speed * Time.deltaTime);

        characterController.transform.Rotate(Vector3.up * Hinput * (100f * Time.deltaTime));

        Vmove = characterController.transform.forward * Vinput ;
        anim.SetFloat("Walk", Vinput);
        anim.SetFloat("WalkB", Vinput);
        anim.SetFloat("WalkL", Hinput);
        anim.SetFloat("WalkR", Hinput);
        anim.SetFloat("Left",Hinput);
       


        if (Input.GetButtonDown("Jump") && characterController.isGrounded)
        {
            Vmove.y = Mathf.Sqrt(jumpHeight * gravity * -2f);
            anim.SetTrigger("Jump");
        }
        Vmove.y += gravity * Time.deltaTime;
        characterController.Move(Vmove * Time.deltaTime);
        if (Input.GetKeyDown(KeyCode.P))
        {
            anim.SetTrigger("Salute");
        }
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.DownArrow))
        {
            walkGrass.enabled = true;  
        }
        else
        {
            walkGrass.enabled = false;
        }
    }


}
