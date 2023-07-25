using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction;
using UnityEngine.InputSystem;

public class Gun : MonoBehaviour
{
    [SerializeField]
    private Transform startpos;
    [SerializeField]
    private Transform startpos2;
    private GameObject dart;
    [SerializeField]
    private GameObject Prefab;
    public InputActionProperty L_trigger;
    public InputActionProperty L_Grab;
    public InputActionProperty R_trigger;
    public InputActionProperty R_Grab;
    private bool unlocked;
    private bool unlockedr;
    // Start is called before the first frame update
    void Start()
    {
        unlocked = true;
        unlockedr = true;
    }

    // Update is called once per frame
    void Update()
    {
        startpos.rotation = transform.rotation;
        float grabedl = L_Grab.action.ReadValue<float>();  
       float shootl = L_trigger.action.ReadValue<float>();
        float grabedr = R_Grab.action.ReadValue<float>();
        float shootr = R_trigger.action.ReadValue<float>();
        if (grabedl > 0)
        { 
        if (shootl > 0 && unlocked){
               if(gameObject.name=="Gun2")
                { 
            dart = Instantiate(Prefab, startpos2.position, Quaternion.identity);
            dart.gameObject.name = "dart2";
            }
                else
                {
                    dart = Instantiate(Prefab, startpos.position, Quaternion.identity);
                    dart.gameObject.name = "dart";
                }
            AudioM.instance.playSFX("Shoot");
                Destroy(dart.gameObject, 5f);
            dart.transform.rotation = startpos.rotation;
            unlocked = false;
        }
        
        if (shootl == 0) { unlocked = true; }
        }
        if (grabedr > 0)
        {
            if (shootr > 0 && unlockedr)
            {
                if (gameObject.name == "Gun2")
                {
                    dart = Instantiate(Prefab, startpos2.position, Quaternion.identity);
                    dart.gameObject.name = "dart2";
                }
                else
                {
                    dart = Instantiate(Prefab, startpos.position, Quaternion.identity);
                    dart.gameObject.name = "dart";
                }
                AudioM.instance.playSFX("Shoot");
                Destroy(dart.gameObject, 5f);
                dart.transform.rotation = startpos.rotation;
                unlockedr = false;
            }
        
        if (shootr == 0) { unlockedr = true; }
        }
    }
   public void shoot()
    {
        AudioM.instance.playSFX("Shoot");
        dart = Instantiate(Prefab, startpos.position, Quaternion.identity);
        dart.gameObject.name = "dart2";
    }

}
