using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CubeController : MonoBehaviour
{
    private int _score=0;
    public Text _scoreText;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 100.0f) && hit.transform.gameObject != null)
            {
                // here you need to insert a check if the object is really a tree
                // for example by tagging all trees with "Tree" and checking hit.transform.tag
                if (hit.transform.tag == "Cube")
                {
                    
                    GameObject.Destroy(hit.transform.gameObject);
                    AddScore(10);
                }
                if (hit.transform.tag == "RedCube")
                {

                    GameObject.Destroy(hit.transform.gameObject);
                    AddScore(-20);
                }
            }
        }

    }
    public void updateScore(int playerScore)
    {
        _scoreText.text = "Score: " + playerScore.ToString();
    }
    public void AddScore(int points)
    {
        _score += points;
        updateScore(_score);
    }
}
