using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SyncGrap : NetworkBehaviour
{
    bool grapped;
    // Start is called before the first frame update
    void Start()
    {
        grapped = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (grapped)
            GrabBall();
    }
    public void GrabBall()
    {

        CmdGrabBall(transform.GetComponent<NetworkIdentity>());
    }
    [Command]
    void CmdGrabBall(NetworkIdentity ball)
    {
        ball.transform.position = transform.position;
        ball.transform.rotation = transform.rotation;
    }
    public void ongrab()
    {
        grapped = true;
    }
    public void onUngrab()
    {
        grapped = false;
    }
}
