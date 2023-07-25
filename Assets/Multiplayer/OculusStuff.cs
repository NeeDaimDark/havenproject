using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Platform;
using Oculus.Avatar2;
using System;
using Mirror;
using QuickStart;

public class OculusStuff : MonoBehaviour 
{
    public UInt64 _userId = 0;
    public string SampleAvatar = "sampleAvatar";
    public PlayerName _streamingAvatar;
   // public bool ServerBool;
   // public Transform[] playerSpawnPnts = new Transform[2];
  //  public Transform StartRigGo;
    //public int PlayerNum;
   // public GameObject playerGo, pllayerPrefab;

    private void Awake()
    {
        try
        {
            Core.AsyncInitialize();
            Entitlements.IsUserEntitledToApplication().OnComplete(EntitlementCallback);
        }
        catch (UnityException e)
        {
            Debug.LogException(e);
            // Immediately quit the application.
            UnityEngine.Application.Quit();
        }
    }

    // Update is called once per frame
    void EntitlementCallback(Message msg)
    {
        if (msg.IsError) // User failed entitlement check
        {
            UnityEngine.Application.Quit();
        }
        else // User passed entitlement check
        {
            Debug.Log("Game ON!");
            StartCoroutine(StartOvrPlatform());
        }
    }

    IEnumerator StartOvrPlatform()
    {
        if (OvrPlatformInit.status == OvrPlatformInitStatus.NotStarted)
        {
            OvrPlatformInit.InitializeOvrPlatform();
        }

        while (OvrPlatformInit.status != OvrPlatformInitStatus.Succeeded)
        {
            if (OvrPlatformInit.status == OvrPlatformInitStatus.Failed)
            {
                OvrAvatarLog.LogError($"Error initializing OvrPlatform. Falling back to local avatar", SampleAvatar);
                // LoadLocalAvatar();
                yield break;
            }

            yield return null;
        }

        // user ID == 0 means we want to load logged in user avatar from CDN
        if (_userId == 0)
        {
            // Get User ID
            bool getUserIdComplete = false;
            Users.GetLoggedInUser().OnComplete(message =>
            {
                if (message.IsError)
                {
                    var e = message.GetError();
                    OvrAvatarLog.LogError($"Error loading CDN avatar: {e.Message}. Falling back to local avatar", SampleAvatar);
                }
                else
                {
                    _userId = message.Data.ID;
                    _streamingAvatar.gameObject.SetActive(true);
                   // _streamingAvatar.StartAvatar(this);
                }
            });
        }
    }

    //public override void OnStartServer()
    //{
    //    base.OnStartServer();
    //    ServerBool = true;
    //}

    //public override void OnStartClient()
    //{
    //    base.OnStartClient();
    //    ConnectToServer();
    //}

    //private void ConnectToServer()
    //{
    //    NetworkManager.singleton.networkAddress = "localhost";
    //    NetworkManager.singleton.StartClient();
    //}

    ////public override void OnClientConnect(NetworkConnection conn)
    ////{
    ////    base.OnClientConnect(conn);
    ////    SpawnPlayer(conn);
    ////}
    //public override void OnClientConnect()
    //{
    //    base.OnClientConnect();
    //    SpawnPlayer();
    //}

    //private void SpawnPlayer()
    //{
    //    if (playerSpawnPnts.Length > PlayerNum)
    //    {
    //        StartRigGo = playerSpawnPnts[PlayerNum];
    //    }
    //    else
    //    {
    //        StartRigGo = playerSpawnPnts[0];
    //    }

    //    playerGo = NetworkManager.Instantiate(playerPrefab, StartRigGo.position, StartRigGo.rotation);
       
    //}



}
