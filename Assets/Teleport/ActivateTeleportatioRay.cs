using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ActivateTeleportatioRay : MonoBehaviour
{
    public GameObject leftTeleportation;
    public GameObject rightTeleportation;

    public InputActionProperty leftActivate;
    public InputActionProperty RightActivate;
    public InputActionProperty leftCannel;  
    public InputActionProperty rightCannal; 

    void Update()
    {
        leftTeleportation.SetActive(leftCannel.action.ReadValue<float>() ==0 && leftActivate.action.ReadValue<float>() > 0.1f);
        rightTeleportation.SetActive(rightCannal.action.ReadValue<float>() == 0 && RightActivate.action.ReadValue<float>() > 0.1f);
    }


}
