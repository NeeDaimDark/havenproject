using DG.Tweening;
using Mirror;
using Mirror.Examples.Pong;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;

public class Ball : NetworkBehaviour
{
    public static bool isDestroyed;
    public static bool isDestroyed2;
    [SerializeField]
    private Transform ballTransform;
    [SerializeField]
    private Transform ball2Transform;
    public static bool Player1;
    public static bool Player2;
    [SyncVar(hook = nameof(Onpnetworkp1Changed))]
    public bool pnetworkp1;
    [SyncVar(hook = nameof(Onpnetworkp2Changed))]
    public bool pnetworkp2;
    private void Start()
    {

        Player1 = false;
        Player2 = false;
        isDestroyed = false;
        isDestroyed2 = false;
    }
    public void OnGrap()
    {
        transform.GetComponent<Rigidbody>().useGravity = true;

    }
    public void Onthrow()
    {
        transform.GetComponent<Rigidbody>().useGravity = true;
        Invoke(nameof(ResetBall), 10f);

    }
    public void ResetBall()
    {

        if (transform.gameObject.name.Equals("ball1"))
        {

            transform.position = ballTransform.position;
            gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            GetComponent<Rigidbody>().isKinematic = true;
            
            gameObject.GetComponent<Rigidbody>().isKinematic = false;
            
        }
        else
        {
            transform.position = ball2Transform.position;
            gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            GetComponent<Rigidbody>().isKinematic = true;
            gameObject.GetComponent<Rigidbody>().isKinematic = false;
        } 
    }
    public void animT()
    {
        Player1 = true;
        pnetworkp1 = true;
        //p1R.text = "I'm Ready";
    }
    public void animT2()
    {
        Player2 = true;
        pnetworkp2 = true;
        //p2R.text = "I'm Ready";
    }

    void Onpnetworkp1Changed(bool _Old, bool _New)
    {
        Player1 = pnetworkp1;
     //   p1R.text = "I'm Ready";
    }
    void Onpnetworkp2Changed(bool _Old, bool _New)
    {
        Player2 = pnetworkp2;
        //p2R.text = "I'm Ready";
    }
    private void OnCollisionEnter(Collision collision)
    {
        Invoke(nameof(ResetBall), 3f);
    }
}
