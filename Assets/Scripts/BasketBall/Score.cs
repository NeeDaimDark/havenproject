using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Score : NetworkBehaviour
{
    [SyncVar(hook = nameof(OnmScoreUpdated))]
    private int mScore;
    [SerializeField]
    private TextMeshProUGUI _textMeshPro;
    [SerializeField]
    private TextMeshProUGUI Guest;

    // Start is called before the first frame update
    void Start()
    {
        mScore = 0;
    }

    
    void OnmScoreUpdated(int old,int newScore)
    {
        _textMeshPro.text = newScore.ToString();
        Guest.text = newScore.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (Ball.Player1 && Ball.Player2)
        { 
        if (other.CompareTag("Ball"))
        {
            mScore++;
            

        }
        }
    }
}
