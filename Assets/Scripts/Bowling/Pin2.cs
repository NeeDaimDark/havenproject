using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pin2 : MonoBehaviour
{

    [SerializeField]
    private Rigidbody m_Rigidbody;
    
    private bool m_Fallen;

    private void OnEnable()
    {
        m_Fallen = false;
    }
    void Update()
    {
       
        if (!m_Fallen)
        {
            if (m_Rigidbody.angularVelocity.magnitude > .3f)
            {
                m_Fallen = true;
                Invoke(nameof(pinc), 2f);
                AudioM.instance.playSFX("Pin");
            }

        }
    }


    /*    private void OnCollisionEnter(Collision collision)
        { if (collision.gameObject.name.Equals("ball") || collision.gameObject.name.Equals("pin"))
            {
                AudioM.instance.playSFX("Pin");

                Invoke(nameof(pinc), 2f); }

        }*/
    public void pinc()
    {
        BowlingM.nbpin2++;
        Destroy(gameObject);
        
    }
}
