using DG.Tweening;
using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : NetworkBehaviour
{
    [SerializeField]
    Transform m_transform;
 
    private Rigidbody m_Rigidbody;
    // Start is called before the first frame update
    void Start()
    {
       // m_Rigidbody= transform.GetComponent<Rigidbody>();
        //m_Rigidbody.velocity = transform.forward * 30f;
    }

    // Update is called once per frame
    void Update()
    {
        
        /* transform.DOMove(transform.position + m_transform.forward * 9, 2f).SetEase(Ease.Linear).OnComplete(() =>
         { Destroy(gameObject); });*/
       
        //m_Rigidbody = transform.GetComponent<Rigidbody>();
        //m_Rigidbody.velocity = m_transform.forward * 20f;


    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("source1"))
        {
            gameObject.name = "dart1";
        }
        else if (other.CompareTag("source2"))
        {
            gameObject.name = "dart2";
            
        }
    }

}
