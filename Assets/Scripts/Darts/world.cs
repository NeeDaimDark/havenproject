using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class world : MonoBehaviour
{
    // Start is called before the first frame update
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name== "dart")
        Destroy(collision.gameObject);
       
    }
}
