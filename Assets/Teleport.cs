using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    public Vector3 place;
    private RaycastHit hit;
    public Camera Camera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Physics.Raycast(Camera.ScreenPointToRay(Input.mousePosition), out hit)) 
        {
            place = new Vector3(hit.point.x, hit.point.y, hit.point.z); 
            if(hit.transform.tag == "ground")
            {
                if (Input.GetMouseButtonDown(0))
                {
                    this.gameObject.SetActive(false);
                    transform.position = place;
                    this.gameObject.SetActive(true);
                }
            }
        }
    }
}
