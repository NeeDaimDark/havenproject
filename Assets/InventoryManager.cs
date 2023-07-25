using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance;
    public List<Item> Items = new List<Item>();


    public Transform ItemContent;
    public GameObject InventoryItem;
    public Toggle EnableRemove;
    public InventoryItemController[] InventoryItems;

    private void Awake()
    {
        Instance = this;
    }
    public void Add (Item item)
    {
        Items.Add(item);    
    }
    public void Remove (Item item)
    {
        Items.Remove(item); 
    }
    public void ListItems()
    {
       
        
        foreach(var item in Items)
        {
            GameObject obj = Instantiate(InventoryItem, ItemContent);
            var itemName = obj.transform.Find("ItemName").GetComponent<Text>();
            var itemIcon = obj.transform.Find("ItemIcon").GetComponent<Image>();        
            var remove  = obj.transform.Find("remove").GetComponent<Button>();

            itemName.text = item.itemName;
            itemIcon.sprite = item.icon;   
            

            if (EnableRemove.isOn)
                remove.gameObject.SetActive(true); 
                
        }
        SetInventoryItems();    
    }
    public void enableItemRemove()
    {
        if (EnableRemove.isOn)
        {
            foreach (Transform item in ItemContent)
            {
                item.Find("remove").gameObject.SetActive(true);
            }
        }
        else
        {
            foreach (Transform item in ItemContent)
            {
                item.Find("remove").gameObject.SetActive(false);
            }
        }

         
    }
   public void SetInventoryItems()
    {
        InventoryItems = ItemContent.GetComponentsInChildren<InventoryItemController>();
        for (int i = 0 ; i < Items.Count; i++)
        {
            InventoryItems[i].AddItem(Items[i]);    
        }
    }
    public void clearrr()
    {
        foreach (Transform item in ItemContent)
        {
            Destroy(item.gameObject);
        }

    }
}
