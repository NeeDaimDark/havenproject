using UnityEngine;

public class PaintScript : MonoBehaviour
{
    private ParticleSystem particleSystem;
    private ParticleSystem.MainModule particleSystemMain;

    private void Start()
    {
        particleSystem = GetComponent<ParticleSystem>();
        particleSystemMain = particleSystem.main;
    }

    public void SetColor(Color color)
    {
        particleSystemMain.startColor = color;
    }
}