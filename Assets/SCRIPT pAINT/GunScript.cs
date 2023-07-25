using UnityEngine;

public class GunScript : MonoBehaviour
{
    public GameObject bulletPrefab; // Reference to the Bullet prefab
    public Transform spawnPoint; // Where to spawn the Bullets
    public Color gunColor; // The Gun's color

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            GameObject bullet = Instantiate(bulletPrefab, spawnPoint.position, spawnPoint.rotation);
            bullet.GetComponent<Renderer>().material.color = gunColor; // Set the Bullet's color to match the Gun's color
        }
    }
}