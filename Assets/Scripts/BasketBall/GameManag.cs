using DG.Tweening;
using Mirror;
using Mirror.Examples.Pong;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class GameManag : NetworkBehaviour 
{
    
    private GameObject ball;
    [SerializeField]
    private Transform ballTransform;
    private GameObject ball2;
    [SerializeField]
    private Transform ball2Transform;
    [SerializeField]
    private GameObject Prefab;
  
    // Start is called before the first frame update

/*    private bool thorwb;
    private bool Locked;
    public InputActionProperty L_Grab;*/

    // Start is called before the first frame update
    void Start()
    {
        /*ball = Instantiate(Prefab, ballTransform.position, Quaternion.identity);
        ball.gameObject.name = "ball1";
        ball2 = Instantiate(Prefab, ball2Transform.position, Quaternion.identity);
        ball2.gameObject.name = "ball2";*/
        /* hanging = false;
         thorwb = false;
         Locked = false;*/
    }

    // Update is called once per frame
    void Update()
    {
       /* float grabedl = L_Grab.action.ReadValue<float>();
        if (grabedl > 0.4f)
        {
            hanging = true;
            thorwb = false;
            Locked = true;
            ball.GetComponent<Rigidbody>().useGravity = true;
        }
        if (grabedl == 0) { hanging = false; thorwb = true; }
        if (hanging == false && thorwb && Locked)
        {
            
            ball.GetComponent<XRGrabInteractable>().enabled = false;
            Destroy(ball, 5f);
            ball = Instantiate(Prefab, ballTransform.position, Quaternion.identity);
            ball.gameObject.name = Prefab.name;
            hanging = false;
            thorwb = false;
            Locked=false;
        }
*/
      /*if (Ball.isDestroyed )
        {

            ball = Instantiate(Prefab, ballTransform.position, Quaternion.identity);
            ball.gameObject.name = "ball1";
            Ball.isDestroyed = false;
        }
        if (Ball.isDestroyed2)
        {

            ball2 = Instantiate(Prefab, ball2Transform.position, Quaternion.identity);
            ball2.gameObject.name = "ball2";
            Ball.isDestroyed2 = false;
        }*/
    }
   
    
}
