using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using System;
public class PlayerInv : MonoBehaviour
{
    public static PlayerInv Instance { get; set; }
    public int Power;
    public int Water;
    public float Charm ;
    private int Charmez = 200;
    private double b;   
  


    public Text PowerText;
    public Text WaterText;
    public Text CharmText;

    public void Awake()
    {
        Instance = this;
    }
  

    public void IncreasePower(int value)
    {
        Power += value;
        PowerText.text = $"Robt Power : {Power}";
    }   
    public void IncreaseWater(int value)
    {
        Water += value;
        WaterText.text = $"Water : {Water}";
    }
    public void IncreaseCharm(int value)
    {
        
        Charm += value;
        CharmText.text = $"Charm : {Charm}";
        Debug.Log("charm"+Charm);
       

    }
    public void Update()
    {

        if (Charm > 0)
        {
            Charm = Charm - 1 *  Time.deltaTime;
            CharmText.text = $"Robot Power : {System.Math.Round(Charm,1)}";

        }
    }
    public void Desc()
    {
        Charm -= 5;

    }
   

    // public getter and setter for other classes to use
   /* public int Charme
    {
        get
        {
            return this.Charm;
        }
        set
        {
            // include any checks you want to take place in here before setting the value
            Charmez = value;
        }
    }*/
}
