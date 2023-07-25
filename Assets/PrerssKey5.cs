using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrerssKey5 : MonoBehaviour
{
    
    public GameObject Load;

    public bool Action = false;

    void Start()
    {
        
        Load.SetActive(false);

    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.tag == "Player")
        {
            
            Load.SetActive(true);

            Action = true;
        }
    }

    void OnTriggerExit(Collider collision)
    {
        
        Load.SetActive(false);
        Action = false;
    }


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (Action == true)
            {
               

                Action = false;
            }
        }

    }
}
