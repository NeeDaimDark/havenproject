using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ItemPickUp : MonoBehaviour
{

    public Item Item;

    void Pickup()
    {
        InventoryManager.Instance.Add(Item);
        Destroy(gameObject);    

    }
    private void OnMouseDown()
    {
        Pickup();

    }
}
