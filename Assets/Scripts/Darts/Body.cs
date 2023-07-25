using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
public class Body : NetworkBehaviour
{
    // Start is called before the first frame update
    [SyncVar(hook = nameof(Onscore1Changed))]
    public int score1;
    [SyncVar(hook = nameof(Onscore2Changed))]
    public int score2;

    private void OnCollisionEnter(Collision collision)

    {
        Debug.Log("collision"); 
        if (Target.random == 0 && transform.parent.name == "target (2)")
        {
            if (collision.gameObject.name.Equals("dart2"))
            {
                Debug.Log("collision");
                //GameM.score2 += 20;
                score2 = GameM.score2+ 20;
            }
            else
            {
                Debug.Log("collision");
                //GameM.score += 20;
                score1 = GameM.score + 20;
            }
        }
        if (Target.random == 1 && transform.parent.name == "target (1)")
        {
            if (collision.gameObject.name.Equals("dart2"))
            {
                Debug.Log("collision");
                //GameM.score2 += 20;
                score2 = GameM.score2 + 20;
            }
            else
            {
                Debug.Log("collision");
                //GameM.score += 20;
                score1 = GameM.score + 20;
            }
        }
       
        if (Target.random == 2 && transform.parent.name == "target")
        {
            if (collision.gameObject.name.Equals("dart2"))
            {
                Debug.Log("collision");
                // GameM.score2 += 20;
                score2 = GameM.score2 + 20;
            }
            else
            {
                Debug.Log("collision");
                //GameM.score += 20;
                score1 = GameM.score + 20;
            }
        }
        if (Target.random == 3 && transform.parent.name == "target (3)")
        {
            if (collision.gameObject.name.Equals("dart2"))
            {
                Debug.Log("collision");
                //GameM.score2 += 20;
                score2 = GameM.score2 + 20;
            }
            else
            {
                Debug.Log("collision");
                //GameM.score += 20;
                score1 = GameM.score + 20;
            }
        }
                Destroy(collision.gameObject);
    }
    void Onscore1Changed(int _Old, int _New)
    {
        GameM.score = score1;
        
    }
    void Onscore2Changed(int _Old, int _New)
    {
        GameM.score2 = score2;
        
    }

}
