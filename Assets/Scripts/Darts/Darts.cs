using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Darts : MonoBehaviour
{
    
    
    [SerializeField] private Transform selfrotate;
    [SerializeField] public Transform selfscale;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        //transform.Rotate(0f, 0f, selfangle * Time.deltaTime);
        //selfangle += selfrotate * Time.deltaTime;
        //gameObject.GetComponent<Rigidbody>().AddForce(startpos.forward * Force);
        Animation();
      /*body=  transform.GetComponent<Rigidbody>();
        body.velocity = transform.forward * Force;*/

    }
    public void Animation()
    {
        transform.DOMove(transform.position + transform.forward * 9, 2f).SetEase(Ease.Linear).OnComplete(() =>
        { Destroy(gameObject); });
       
    }
   

}
