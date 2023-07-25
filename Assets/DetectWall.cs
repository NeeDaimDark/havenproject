using UnityEngine;

public class DetectWall : MonoBehaviour
{
    public ParticleSystem paintParticleSystem; // Reference to the Paint Particle System
    
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Wall"))
        {
            GetComponent<Rigidbody>().isKinematic = true; // Disable the Rigidbody to stop the Bullet's movement
            paintParticleSystem.gameObject.SetActive(true); // Enable the Paint Particle System
        }
    }
}