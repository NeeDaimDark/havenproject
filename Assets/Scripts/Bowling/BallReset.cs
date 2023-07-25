using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallReset : MonoBehaviour
{
    public static bool collision;
    private void Start()
    {
        collision = false;
    }
    // Start is called before the first frame update
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("ground"))
        {
            Debug.Log("col");
            collision = true;
        }
    }
}
