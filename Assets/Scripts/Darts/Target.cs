using DG.Tweening;
using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class Target : NetworkBehaviour
{   Vector3 v =new Vector3(-90, 0, 0);
    [SerializeField]
    private TextMeshProUGUI R1;
    [SerializeField]
    private TextMeshProUGUI R2;
    public static int random;
    private GameObject target;
    private bool endA;
    private bool Player1;
    private bool Player2;
    public static bool Ready;
    [SyncVar(hook = nameof(Onpnetwork1Changed))]
    public bool pnetwork1;
    [SyncVar(hook = nameof(Onpnetwork2Changed))]
    public bool pnetwork2;
    // Start is called before the first frame update
    private void Awake()
    {
       
    }
    void Start()
    {
        Ready = false;
        random = 0;
        endA = false;
        Player1 = false;    
        Player2 = false;    
    }

    
    // Update is called once per frame
    void Update()
    {   
        if (endA)
        { 
            StartCoroutine(targetanim());
            
        }
        else
        {
            Checkready();
        }


    }
 
    public IEnumerator targetanim()
    {
        
        endA = false;
        Debug.Log(random);
        target = transform.GetChild(random).gameObject;
        target.transform.DOLocalRotate(v, 2f).SetEase(Ease.Linear).OnComplete(() => {
            target.transform.DOLocalRotate(Vector3.zero, .5f).SetEase(Ease.Linear);
            random++;
        });
        yield return new WaitForSeconds(5);
        if (random == 4) { random = 0; }
        endA = true;
    }
   public void animT()
    {
        Player1 = true;
    }
      public void animT2()
    {
        Player2 = true;
    }
    public void Checkready()
    {
        if (Player1 && Player2 && !endA)
        {
            endA = true;
            Player1 = false;
            Player2 = false;
            Ready = true;
            GameMan.time=30f;

             }
    }
    void Onpnetwork1Changed(bool _Old, bool _New)
    {
        Player1 = pnetwork1;
        R1.text = "I'm Ready";
    }
    void Onpnetwork2Changed(bool _Old, bool _New)
    {
        Player2 = pnetwork2;
        R2.text = "I'm Ready";
    }
}
