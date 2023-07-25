using Oculus.Interaction.GrabAPI;
using Oculus.Platform.Samples.VrHoops;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Guns : NetworkBehaviour
{
    [SerializeField]
    private Transform startpos;
    private GameObject dart;
    [SerializeField]
    private GameObject Prefab;
    private bool grab;
    
    private bool Shoot;
  
    private bool locked;
    // Start is called before the first frame update
    void Start()
    {
        grab = false;
        Shoot = false;
        locked = false;
    }

    // Update is called once per frame
    void Update()
    {

        startpos.rotation = transform.rotation;
       
        if (grab && Shoot && !locked)
            {
                if (gameObject.name == "Gun2")
                {
                dart = Instantiate(Prefab, startpos.position, Quaternion.identity);
                dart.GetComponent<Rigidbody>().velocity = startpos.transform.forward * 20f;
                dart.GetComponent<Rigidbody>().collisionDetectionMode =CollisionDetectionMode.Continuous;
                NetworkServer.Spawn(dart);


                locked = true;
                }
                else
                {
                dart = Instantiate(Prefab, startpos.position, Quaternion.identity);
                dart.GetComponent<Rigidbody>().velocity = startpos.transform.forward * 20f;
                dart.GetComponent<Rigidbody>().collisionDetectionMode = CollisionDetectionMode.Continuous;
                NetworkServer.Spawn(dart);


                locked = true;
                }
                AudioM.instance.playSFX("Shoot");
            dart.transform.rotation = startpos.rotation;
            Destroy(dart.gameObject, 5f);
                
            }
       
        
    }



    public void Grabbed ()
    {
        grab = true;
    }
    public void Ungrabbed()
    {
        grab = false;
    }
    public void shoot()
    {
        Shoot = true;
    }
    public void Unshoot()
    {
        Shoot = false;
        locked = false;
    }

}
