using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Avatar2;
using QuickStart;

public class StreamingAvatar : OvrAvatarEntity
{
    public OculusStuff playerCon;
    PlayerName playerName;
    public void StartAvatar(OculusStuff playercon)
    {
        playerCon = playercon;
        _userId = playerCon._userId;
        StartCoroutine(LoadAvatarWithId());
    }
    protected override void Awake()
    {
        playerName = GetComponentInParent<PlayerName>();
       // playerName.StartLoadingAvatar();
      //  playerName.OnStartClient();

        base.Awake();
    }

    IEnumerator LoadAvatarWithId()
    {
        var hasAvatarRequest = OvrAvatarManager.Instance.UserHasAvatarAsync(_userId);
        while (!hasAvatarRequest.IsCompleted) { yield return null; }
        LoadUser();
    }

}
