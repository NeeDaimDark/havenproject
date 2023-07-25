using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
using UnityEngine;
using Mirror;
using Telepathy;

public class BowlingM : MonoBehaviour
{
    
    public static  int nbpin;
    
    public static int nbpin2;
    [SerializeField]
    private TextMeshProUGUI m_Score;
    [SerializeField]
    private TextMeshProUGUI m_Score2;
    private GameObject pins;
    private GameObject pins2;
    [SerializeField]
    private GameObject pinsContainer;
    [SerializeField]
    private GameObject pinsContainer2;
    public GameObject prefab;
    private int lastnb;
    private int lastnb2;
    private bool init;
    // Start is called before the first frame update
    void Start()
    {
        nbpin = 0;
        lastnb = nbpin;
        nbpin2 = 0;
        lastnb2 = nbpin;
        init = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (bowlingball.Player1 && bowlingball.Player2)
        { 
            m_Score.text = nbpin.ToString();
            if (nbpin % 10 == 0 && nbpin > lastnb)
            {
                pins = Instantiate(prefab);
                pins.transform.parent = pinsContainer.transform;
                pins.transform.localPosition = Vector3.zero;
                pins.transform.localEulerAngles = Vector3.zero;
                pins.gameObject.name = "container";
                lastnb = nbpin;
                //CmdShoot(nbpin);
            }
            m_Score2.text = nbpin2.ToString();
            if (nbpin2 % 10 == 0 && nbpin2 > lastnb2)
            {
                pins2 = Instantiate(prefab);
                pins2.transform.parent = pinsContainer2.transform;
                pins2.transform.localPosition = Vector3.zero;
                pins2.transform.localEulerAngles = Vector3.zero;
                pins2.gameObject.name = "container";
                lastnb2 = nbpin2;


            }
        }
        if (bowlingball.Player1 && bowlingball.Player2 && !init)
        {
            nbpin = 0;
            lastnb = nbpin;
            nbpin2 = 0;
            lastnb2 = nbpin;
            init = true;
        }
        }
}
