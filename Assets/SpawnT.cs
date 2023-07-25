using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnT : MonoBehaviour
{
    public static SpawnT Instance { get; set; }

    public GameObject spawnee;
    public bool stopSpawning = false;
    public float spawnTime;
    public float spawnDelay;
    public float sphereRadius;

    // Use this for initialization
    void Start()
    {
       
        InvokeRepeating("SpawnObject", spawnTime, spawnDelay);
    }
    public void Update()
    {
        NoSpawn();
        
    }
    public void SpawnObject()
    {
        if (stopSpawning == false)
        {

            Instantiate(spawnee, transform.position, transform.rotation);
        }
      /*  if (stopSpawning)
        {
            CancelObjectSpawn();
        }*/
    }
    public void NoSpawn()
    {
        // stop the spawning of item
        if (Physics.CheckSphere(transform.position, sphereRadius))
        {
            stopSpawning = true;
        }
        else
        {
            stopSpawning = false;
            
        }
      
    }
    public void CancelObjectSpawn()
    {
        CancelInvoke("SpawnObject");
    }


}
