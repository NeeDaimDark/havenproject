using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;


public class ViewTotalFPS : MonoBehaviour
{

    public TextMeshProUGUI TheLable;
    float LastTime = 0;
    int TheFPS = 0;
    void Start()
    {
        TheLable.text = "";
    }
    void LateUpdate()
    {
        TheFPS++;
        if (Time.time > LastTime + 1)
        {
            LastTime = Time.time;
            TheLable.text = "Total Frame:" + TheFPS;
            TheFPS = 0;
        }
    }
}
