using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Grabbed : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI textMeshProUGUI;    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionStay(Collision collision)
    {
        textMeshProUGUI.text = "grabbing";
    }
}
