using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class keyboardButton : MonoBehaviour
{
    keyboard keyboard;
    TextMeshProUGUI buttonText;

    void Start()
    {
        keyboard = GetComponentInParent<keyboard>();
        buttonText= GetComponentInChildren<TextMeshProUGUI>();
        if (buttonText.text.Length == 1 )
        {
            NameToButtonText();
            GetComponentInChildren<ButtonVR>().onRelease.AddListener(delegate { keyboard.InsertChar(buttonText.text); });
        }
    }
    public void NameToButtonText()
    {
        buttonText.text = gameObject.name;
    }


}
