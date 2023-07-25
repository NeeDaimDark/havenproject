using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;
using Oculus.Interaction;
using TMPro;
using Mirror;
using QuickStart;

public class bowlingball : NetworkBehaviour
{
  
    [SerializeField]
    private GameObject ball;
    private float m_Timer;
    private bool m_Thrown;
    [SerializeField]
    private Rigidbody m_Rigidbody;
    Vector3 startpos;
    [SerializeField]
    private Transform m_barriere;
    private bool bariiereup;
    public static bool Player1;
    public static bool Player2;
    [SyncVar(hook = nameof(Onpnetwork1Changed))]
    public bool pnetwork1;
    [SyncVar(hook = nameof(Onpnetwork2Changed))]
    public bool pnetwork2;
    [SerializeField]
    private TextMeshProUGUI p1R;
    [SerializeField]
    private TextMeshProUGUI p2R;



    private Sequence sequence;
    // Start is called before the first frame update
    void Start()
    {
        m_Timer = 0;
        m_Thrown = false;
        startpos = ball.transform.position;
        bariiereup=false;
        Player1 = false;
        Player2 = false;

    }

    // Update is called once per frame
    void Update()
    {   
            // invoke(nameof())
            if (m_Thrown)
            {
                m_Timer += Time.deltaTime;
                if (m_Timer > 9 || BallReset.collision)
                {
                    ResetBallBCoroutine();
                    m_Thrown = false;
                    BallReset.collision = false;
                }
                if (m_Rigidbody.velocity.magnitude < .3f)
                {
                    ResetBallBCoroutine();
                    m_Thrown = false;
                }
            }
        


    }
    
   
    public void ResetBallBCoroutine()
    {
        m_barriere.DOLocalMoveY(0, 0.5f).SetEase(Ease.Linear).OnComplete(() => {
            bariiereup = false;
        });
        ball.transform.position = startpos;
        ball.GetComponent<Rigidbody>().velocity = Vector3.zero;
        ball.GetComponent<Rigidbody>().isKinematic = true; 
        ball.GetComponent<Rigidbody>().isKinematic = false;

    }
    public void reset()
    {
        if (Player1 && Player2)
        {
            m_barriere.DOLocalMoveY(0.0005f, 1f).SetEase(Ease.Linear).OnComplete(() =>
            {
                bariiereup = true;
            });
            AudioM.instance.playSFX("Ball");
        }
        m_Timer = 0;
        m_Thrown = true;
        
    }
  
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("ground"))
         {
            Debug.Log("col");
            ResetBallBCoroutine();
        }
    }
    public void animT()
    { 
        Player1 = true;
        pnetwork1 = true;
        p1R.text = "I'm Ready";
    }
    public void animT2()
    {
        Player2 = true;
        pnetwork2 = true;
        p2R.text = "I'm Ready";
    }

    void Onpnetwork1Changed(bool _Old, bool _New)
    {
        Player1 = pnetwork1;
        p1R.text = "I'm Ready";
    }
    void Onpnetwork2Changed(bool _Old, bool _New)
    {
        Player2 = pnetwork2;
        p2R.text = "I'm Ready";
    }

}
