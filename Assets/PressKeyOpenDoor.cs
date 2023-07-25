using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PressKeyOpenDoor : MonoBehaviour
{
    public GameObject Instruction;
    public GameObject Load;

    public bool Action = false;

    void Start()
    {
        Instruction.SetActive(false);
        Load.SetActive(false);  

    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.tag == "Player")
        {
            Instruction.SetActive(true);
            Load.SetActive(true);

            Action = true;
        }
    }

    void OnTriggerExit(Collider collision)
    {
        Instruction.SetActive(false);
        Load.SetActive(false);
        Action = false;
    }


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (Action == true)
            {
                Instruction.SetActive(false);
                
                Action = false;
            }
        }

    }
}


