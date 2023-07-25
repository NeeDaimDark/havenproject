using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class BowlingC : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI m_Score;
    [SerializeField]
    private TextMeshProUGUI m_Score2;
    [SerializeField]
    private TextMeshProUGUI TimerP1;
    [SerializeField]
    private TextMeshProUGUI TimerP2;
    [SerializeField]
    private NetworkIdentity nbpinball;
    [SerializeField]
    private NetworkIdentity nbpin2ball;
    private float time2;
    private float time;
    public static NetworkIdentity ball;
    // Start is called before the first frame update
    void Start()
    {
        time2 = 0f;
        time = 10f;
        ball = null;
    }

    // Update is called once per frame
    void Update()
    {
        if (bowlingball.Player1 && bowlingball.Player2)
        {
            m_Score.text = BowlingM.nbpin.ToString();
            m_Score2.text = BowlingM.nbpin2.ToString();
            if (time >= 0 && time <100)
            {
                time -= Time.deltaTime;
                TimerP1.text = time.ToString("f0");
                TimerP2.text = time.ToString("f0");
            }
            

            if (time < 0)
            {
                calcule();
            }
            else if (time>100)
            { 
                if (time2 < 0)
                {
                    calcule2();
                }
                if (time2 > 0 && time2<100f)
                {
                    time2 -= Time.deltaTime;
                    TimerP1.text = time2.ToString("f0");
                    TimerP2.text = time2.ToString("f0");
                }
            }
        }
    }
    public void calcule()
    {

        if (BowlingM.nbpin > BowlingM.nbpin2)
        {
            ball = nbpinball;
            time = 200f;
        }
        else
        if (BowlingM.nbpin < BowlingM.nbpin2)
        {
            ball = nbpin2ball;
            time = 200f;
        }
        else
        {
            time = 200f;
            time2 = 10f;
            Debug.Log("Playersss");
        }
    }
    public void calcule2()
    {

        if (BowlingM.nbpin > BowlingM.nbpin2)
        {
            ball = nbpinball;
            Debug.Log("check");
            time2 = 200f;
        }
        else
        if (BowlingM.nbpin < BowlingM.nbpin2)
        {
            ball = nbpin2ball;
            Debug.Log("check");
            time2 = 200f;
        }
        else
        {

            time2 = 200f;
            Debug.Log("Playersss");
        }
    }
}
