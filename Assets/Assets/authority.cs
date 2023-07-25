using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class authority : NetworkBehaviour
{ public static NetworkIdentity playerid;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();
        playerid = GetComponent<NetworkIdentity>();
    }

    // Update is called once per frame
    void Update()
    { if (isLocalPlayer && ownership.id!=null)
        {
            Debug.Log("ownerr");
        assign(ownership.id);
        ownership.id = null;
        }
        //if (isLocalPlayer && ownership.idr != null)
        //{
        //    Debug.Log("remove");
        //    Remove(ownership.idr);
        //    ownership.idr = null;
        //}
        if (isLocalPlayer && BowlingC.ball != null)
        {
            if (BowlingC.ball.isOwned)
            {
                
                Debug.Log("winner");
            }
            BowlingC.ball = null;
        }

    }
    [Command]
    public void assign(NetworkIdentity id)
    {
        id.AssignClientAuthority(connectionToClient);
    }
    [Command]
    public void Remove(NetworkIdentity idr)
    {
        idr.RemoveClientAuthority();
    }
}
