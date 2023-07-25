using DG.Tweening.Core;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Follow : MonoBehaviour
{

    public Transform playerrrr;
    private NavMeshAgent agent;
    private float m_Speed = 3.5f;

    // Start is called before the first frame update


    // Update is called once per frame
    void Update()
    {
        Vector3 direction = playerrrr.position - transform.position;
        direction.y = 0F;
        direction = direction.normalized;

        if (Vector3.Distance(playerrrr.position, transform.position) > 1f)
        {
            //transform.position = Vector3.Lerp(transform.position, playerrrr.position, 10 * Time.deltaTime);
            transform.position = transform.position + direction * m_Speed * Time.deltaTime;
        }
        Quaternion newRotation = Quaternion.LookRotation(direction);
        transform.rotation = Quaternion.Lerp(transform.rotation, newRotation, 20 * Time.deltaTime);

        
    }
}
