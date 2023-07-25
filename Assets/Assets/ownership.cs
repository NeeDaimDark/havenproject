using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
public class ownership : NetworkBehaviour
{
    [SerializeField] private NetworkIdentity object1;
    [SerializeField] private NetworkIdentity object2;
    public static NetworkIdentity id;
    public static NetworkIdentity idr;
    public  NetworkIdentity idw;
    // Start is called before the first frame update
    void Start()
    {
        id = null;
        idr = null;
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("trig");
        if (other.GetComponent<NetworkIdentity>().isLocalPlayer)
        { 
        if (!object1.hasAuthority)
        {
                Debug.Log("trig1");
                id = object1;
                idw = id;
        }
        else if (!object2.hasAuthority && object1.connectionToClient != other.GetComponent<NetworkIdentity>().connectionToClient)
        {
                Debug.Log("trig2");
                id = object2;
        }
        }
    }
    //private void OnTriggerExit(Collider other)
    //{
    //    Debug.Log("exit");
    //    idr = idw;
    //    idw = null;
    //}


}