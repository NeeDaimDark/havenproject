using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioM : MonoBehaviour
{ 
    public static AudioM instance;
public Sound[] MusicSound, sfxSound;
public AudioSource MusicSource, sfxSource;


private void Awake()
{
    if (instance == null)
    {
        instance = this;
        DontDestroyOnLoad(gameObject);
    }
    else
    {
        Destroy(gameObject);
    }
}
private void Start()
{
    playMusic("Theme");
}
public void playMusic(string name)
{
    Sound s = Array.Find(MusicSound, x => x.name == name);
    if (s == null)
    {
        Debug.Log("sound not found ");
    }
    else
    {
        MusicSource.clip = s.clip;
        MusicSource.Play();

    }
}
public void playSFX(string name)
{
    Sound s = Array.Find(sfxSound, x => x.name == name);
    if (s == null)
    {
        Debug.Log("sound not found ");
    }
    else
    {
        sfxSource.PlayOneShot(s.clip);

    }
}
public void ToggleMusic()
{
    MusicSource.mute = !MusicSource.mute;
}
public void ToggleSfx()
{
    sfxSource.mute = !sfxSource.mute;
}
public void MusicVolume(float volume)
{
    MusicSource.volume = volume;
}
public void sfxVolume(float volume)
{
    sfxSource.volume = volume;
}
}
