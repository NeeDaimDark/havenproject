using Mirror;
using Oculus.Interaction;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Head : NetworkBehaviour
{
    [SyncVar(hook = nameof(Onscoreb1Changed))]
    public int scoreb1;
    [SyncVar(hook = nameof(Onscoreb2Changed))]
    public int scoreb2;
    // Start is called before the first frame update
    private void OnCollisionEnter(Collision other)
    {
        Debug.Log("collision");
        if (Target.random == 0 && transform.parent.name == "target (2)")
        {
            if (other.gameObject.name.Equals("dart2"))
            {
                // GameM.score2 = GameM.score2 + 30;
                scoreb2 = GameM.score2 + 30;
                Debug.Log("collision");
            }

            else
            {
                // GameM.score = GameM.score + 30;
                scoreb1 = GameM.score + 30;
                Debug.Log("collision");
            }
        }
        if (Target.random == 3 && transform.parent.name == "target (3)")
        {
            if
                (other.gameObject.name.Equals("dart2"))
                scoreb2 = GameM.score2 + 30;
            else
                scoreb1 = GameM.score + 30;
        }
        Destroy(other.gameObject);
    }
    void Onscoreb1Changed(int _Old, int _New)
    {
        GameM.score += scoreb1;
        
    }
    void Onscoreb2Changed(int _Old, int _New)
    {
        GameM.score2 += scoreb2;
        
    }
}

/* private void OnCollisionExit(Collision collision)
 {
     Debug.Log("collision");
     if (Target.random == 0 && transform.parent.name == "target (2)")
     {   if (collision.gameObject.name.Equals("dart2"))
         {
             GameM.score2 = GameM.score2 + 30;
             Debug.Log("collision");
         }

         else
         {
             GameM.score = GameM.score + 30;
             Debug.Log("collision");
         }
     }
     if (Target.random == 3 && transform.parent.name == "target (3)")
     {
         if 
             (collision.gameObject.name.Equals("dart2"))
             GameM.score2 = GameM.score2 + 30;
         else
             GameM.score = GameM.score + 30;
     }
     Destroy(collision.gameObject);
 }
}*/
