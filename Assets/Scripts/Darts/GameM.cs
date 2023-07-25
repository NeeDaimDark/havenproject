using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameM : NetworkBehaviour
{
    
    public static int score;
    public static int score2;
    [SerializeField]
    TextMeshProUGUI scoret;
        [SerializeField]
    TextMeshProUGUI scoret2;
    [SerializeField]
    TextMeshProUGUI scoretv2;
    [SerializeField]
    TextMeshProUGUI scoretv1;
    // Start is called before the first frame update
    void Start()
    {
        score = 0;
        score2 = 0;
    }
    
    // Update is called once per frame
    void Update()
    {

        scoret.text = score.ToString(); 
        scoret2.text=score2.ToString();
        scoretv2.text = score.ToString();
        scoretv1.text = score2.ToString();
    }
}
