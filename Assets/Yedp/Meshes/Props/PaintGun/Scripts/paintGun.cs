using UnityEngine;
using System.Collections;
using UnityEngine.XR.Interaction.Toolkit;

public class paintGun : MonoBehaviour {

	public GameObject triggerObj;
	public GameObject sprayPart;

	void Start () 
	{
		sprayPart.active = false;
        XRGrabInteractable grab = GetComponent<XRGrabInteractable>();
        grab.activated.AddListener(StartDrawing);
        grab.deactivated.AddListener(StopDrawing);
    }
    public void StartDrawing(ActivateEventArgs arg)
    {
        triggerObj.transform.Rotate(0f, 0f, -8.5f);
        sprayPart.active = true;
    }
    public void StopDrawing(DeactivateEventArgs arg)
    {
        triggerObj.transform.Rotate(0f, 0f, 8.5f);
        	sprayPart.active = false;
    }


    //   void Update () 
    //{


    //	if (Input.GetMouseButtonDown (0)) 
    //	{
    //		triggerObj.transform.Rotate(0f, 0f, -8.5f);
    //		sprayPart.active = true;
    //	}

    //	if (Input.GetMouseButtonUp (0)) 
    //	{
    //		triggerObj.transform.Rotate(0f, 0f, 8.5f);
    //		sprayPart.active = false;
    //	}
    //}
}
