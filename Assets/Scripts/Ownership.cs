using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
public class Ownership : NetworkBehaviour
{
    [SerializeField] private NetworkIdentity object1;
    [SerializeField] private NetworkIdentity object2;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("aaaaaaaa");
        
        if (!object1.hasAuthority)
        {
            assign(object1, other.gameObject);
        }
        else if (!object2.hasAuthority && !object1.isOwned )
        {
            assign(object2, other.gameObject);
        }
    }

    [Command]
    public void assign(NetworkIdentity net,GameObject g)
    {
        net.AssignClientAuthority(g.GetComponent<NetworkIdentity>().connectionToClient);
    }
}
