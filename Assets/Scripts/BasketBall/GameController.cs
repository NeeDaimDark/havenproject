using Mirror;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameController : NetworkBehaviour
{
    
    [SerializeField]
    private TextMeshProUGUI TimerP1; 
    [SerializeField]
    private TextMeshProUGUI TimerP2; 
    [SerializeField]
    private TextMeshProUGUI ScoreP1;
    [SerializeField]
    private TextMeshProUGUI ScoreP2;
    private float time;
    // Start is called before the first frame update
    void Start()
    {
        time = 10f;
    }

    // Update is called once per frame
    void Update()
    { if (Ball.Player2 && Ball.Player1)
        { 
        TimerP1.text = time.ToString("f0") ;
        TimerP2.text = time.ToString("f0") ;
        time -= Time.deltaTime;
        if (time < 0)
        {
            calcule();
        }
        }
    }

    public void calcule()
    {
        
        if (int.Parse(ScoreP1.text.ToString()) > int.Parse(ScoreP2.text.ToString()))
        {
            Debug.Log("Player1");
        }
        else
        if (int.Parse(ScoreP1.text.ToString()) < int.Parse(ScoreP2.text.ToString()))
        {
            Debug.Log("Player2");
        }
        else
        {
            time += 5f;
            Debug.Log("Playersss");
        }
    }
}
