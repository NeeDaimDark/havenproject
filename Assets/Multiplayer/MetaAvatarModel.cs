using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Oculus.Avatar2;
using QuickStart;

public class MetaAvatarModel : OvrAvatarEntity
{
    PlayerName playerName;
    // OvrAvatarEntity OVR;

    //[SyncVar(hook = nameof(AvatarAnimationDataChanged))] private byte[] _avatarAnimationData = new byte[0];
    private bool remoteLoaded = false;
    protected override void Awake()
    {
        base.Awake();   
        playerName = GetComponent<PlayerName>();
      //  playerName.StartLoadingAvatar();    
  
    }


    //private void AvatarAnimationDataChanged(byte[] oldValue, byte[] newValue)
    //{
    //    if (!remoteLoaded) return;
    //    if (isLocalPlayer) return; //only apply data for remote     
    //    OVR.SetPlaybackTimeDelay(0.1f);
    //    OVR.ApplyStreamData(newValue);
    //}
}
