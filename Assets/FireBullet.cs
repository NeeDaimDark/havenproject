using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class FireBullet : MonoBehaviour
{
    public GameObject bullet;
    public Transform spawnPoint;
    public float fireSpeed = 20;

    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable GRABBLE = GetComponent<XRGrabInteractable>();
        GRABBLE.activated.AddListener(FireBullett);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void FireBullett(ActivateEventArgs arg)
    {
        GameObject spawnBullet = Instantiate(bullet); 
        spawnBullet.transform.position = spawnPoint.position;   
        spawnBullet.GetComponent<Rigidbody>().velocity = spawnPoint.forward* fireSpeed;
        Destroy(spawnBullet,5);
    }
}
