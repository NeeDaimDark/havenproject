using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem.XR;
using Mirror.Examples.Tanks;
using Oculus.Avatar2;

namespace QuickStart
{
    public class PlayerName : NetworkBehaviour
    {
        List<byte[]> m_streamedDataList = new List<byte[]>();
        private bool remoteLoaded = false;
        public bool tt;
        public bool Locall;
        SampleAvatarEntity sampleAvatarEntity;
        OvrAvatarEntity OVR;
        public TextMesh playerNameText;
        public GameObject floatingInfo;

      //  [SyncVar(hook = nameof(RpcPlayAvatarData))] private byte[] _avatarAnimationData = new byte[0];
        public byte[] avatarBytes;
        private Material playerMaterialClone;
        WaitForSeconds waitTime = new WaitForSeconds(5f);
        public bool startBool;
        [SyncVar(hook = nameof(OnNameChanged))]
        public string playerName;
        public OculusStuff NetworkCon;
        private byte[] byteArray = new byte[0];
        // public List<byte[]> m_streamedDataList = new List<byte[]>();
        float m_cycleStartTime = 0;
        float m_intervalToSendData = 30f;
       public NetworkIdentity net;
       // [SyncVar(hook = nameof(RpcPlayAvatarData))]
        public Color playerColor = Color.white;
        public GameObject pickupObjectPrefab; // Reference to the prefab for the pickup object
        public Transform pickupObjectSpawnPoint; // Reference to the spawn point for the pickup object

        private GameObject pickupObjectInstance; // Reference to the instance of the pickup object

        // [SyncVar(hook = nameof(OnAvatarAnimationDataChanged))] private byte[] _avatarAnimationData = new byte[0];
        //private void Update()
        //{
        //    CmdPickupItem(net);
        //    RpcPlayAvatarData(avatarBytes);
        //}
        //[Command]
        //void CmdPickupItem(NetworkIdentity item)
        //{
        //    item.AssignClientAuthority(connectionToClient);
        //}
        void OnNameChanged(string _Old, string _New)
        {
            playerNameText.text = playerName;

        }

        private SceneScript sceneScript;

        //  public override void OnStartClient() => DisableClientInput();

        public override void OnStartServer()
        {
            // base.OnStartServer();            
            //OVR.SetIsLocal(true);
            // StartLoadingAvatar();
            net = GetComponent<NetworkIdentity>();
            DisableClientInput();
            OVR = GetComponentInChildren<SampleAvatarEntity>();
            sampleAvatarEntity = FindObjectOfType<SampleAvatarEntity>();
        }

        private  void Awake()
        {
            net = GetComponent<NetworkIdentity>();
            NetworkIdentity networkIdentity = new NetworkIdentity();
            //StartCoroutine(LoadAvatarWithId());
          //  StartLoadingAvatar();
             OVR = GetComponentInChildren<SampleAvatarEntity>();
            if(isLocalPlayer)
            {
                tt = true;
            }
            else
            {
                tt = false; 
            }
            //OVR.SetIsLocal(true);
            //allows all players to run this
            sceneScript = GameObject.Find("SceneReference").GetComponent<SceneReference>().sceneScript;
            sampleAvatarEntity = FindObjectOfType<SampleAvatarEntity>();

            // AvatarCreated();
            //if (isOwned)
            //{
            //    StartCoroutine(StreamAvatarData());
            //}
            //if (isLocalPlayer)
            //{
            //    OVR.SetIsLocal(true);
            //    OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Default;
            //}
            //else
            //{
            //    OVR.SetIsLocal(false);
            //    OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Remote;
            //}

        }
        // void StartLoadingAvatar()
        //{


        //    if (isLocalPlayer)
        //    {
        //        OVR.SetIsLocal(true);
        //        OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Default;
        //        OVR.SetBodyTracking(FindObjectOfType<SampleInputManager>());
        //        OVR.SetLipSync(FindObjectOfType<OvrAvatarLipSyncContext>());
        //        OVR.gameObject.name = "my avatar";
                
        //    }
        //    else 
        //    {
        //        OVR.SetIsLocal(false);
        //        OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Remote;
        //        OVR.gameObject.name = "not my avatar";
        //    }
            

        //   // StartCoroutine(LoadAvatarWithId());

        //}
        //IEnumerator LoadAvatarWithId()
        //{
        //    var hasAvatarRequest = OvrAvatarManager.Instance.UserHasAvatarAsync(NetworkCon._userId);
        //    while (!hasAvatarRequest.IsCompleted) { yield return null; }
        //    OVR.LoadUser();
        //}
        [Command]
        public void CmdSendPlayerMessage()
        {
            if (sceneScript)
                sceneScript.statusText = $"{playerName} says hello {Random.Range(10, 99)}";
        }
      
        public void DisableClientInput()
        {
            if (isClient && !isLocalPlayer)
            {


                NetworkMoveProvider clinetMoveProvider = GetComponent<NetworkMoveProvider>();
                ActionBasedController[] clientControllers = GetComponentsInChildren<ActionBasedController>();
                ActionBasedContinuousTurnProvider clientTurnProvider = GetComponent<ActionBasedContinuousTurnProvider>();
                TrackedPoseDriver clientHead = GetComponentInChildren<TrackedPoseDriver>();
                Camera clientCamera = GetComponentInChildren<Camera>();
                clientCamera.enabled = false;
                foreach (ActionBasedController controller in clientControllers)
                {
                    controller.enableInputActions = false;
                    controller.enableInputTracking = false;
                }
            }
        }
        public override void OnStartClient()
        {
           
            

                OVR.gameObject.name = "not my avatar";
             //   base.OnStartClient();
             //   OVR.OnUserAvatarLoadedEvent.AddListener(OnUserAvatarLoadedRemote);
                OVR.SetIsLocal(false);
               // OVR.ApplyStreamData(byteArray);
                OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Remote;
     
            
        }

        public override void OnStartLocalPlayer()
        {


          //  OVR.OnUserAvatarLoadedEvent.AddListener(OnUserAvatarLoaded);
            //StartCoroutine(StreamAvatarData());
            OVR.gameObject.name = "my avatar";
            OVR.SetBodyTracking(FindObjectOfType<SampleInputManager>());
            OVR.SetLipSync(FindObjectOfType<OvrAvatarLipSyncContext>());
            OVR.SetIsLocal(true);
            OVR._creationInfo.features = Oculus.Avatar2.CAPI.ovrAvatar2EntityFeatures.Preset_Default;
            floatingInfo.transform.localPosition = new Vector3(0, -0.3f, 0.6f);
            floatingInfo.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
           // byte[] bytes = OVR.RecordStreamData(OVR.activeStreamLod);
            //  RpcReceiveStreamData(bytes);
            string name = "Player" + Random.Range(100, 999);
            Color color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
            CmdSetupPlayer(name);

           // OVR.OnUserAvatarLoadedEvent.AddListener(OnUserAvatarLoaded);

        }
        private void OnUserAvatarLoadedRemote(OvrAvatarEntity avatarEntity)
        {
            remoteLoaded = true;
        }

        //private void OnUserAvatarLoaded(OvrAvatarEntity avatarEntity)
        //{
        //    //avatar done
        //    if (isLocalPlayer)
        //    {
        //        StartCoroutine(StreamAvatarData(avatarEntity));
        //    }
        //}

        //private IEnumerator StreamAvatarData(OvrAvatarEntity avatarEntity)
        //{
        //    while (true)
        //    {
        //        byteArray = avatarEntity.RecordStreamData(avatarEntity.activeStreamLod);
            
        //        yield return new WaitForSecondsRealtime(0.05f);
        //    }
        //}

        [Command]
        public void CmdSetupPlayer(string _name)
        {
            // player info sent to server, then server updates sync vars which handles it on all clients
            playerName = _name;
            //  playerColor = _col;
        }
  

        [Command]
        public void CmdSpawnPickupObject()
        {
            pickupObjectInstance = Instantiate(pickupObjectPrefab, pickupObjectSpawnPoint.position, pickupObjectSpawnPoint.rotation);
            NetworkServer.Spawn(pickupObjectInstance);
        }

        //[Command]
        //public void CmdMovePickupObject(Vector3 position)
        //{
        //    NetworkedPickupObject pickupObject = pickupObjectInstance.GetComponent<NetworkedPickupObject>();

        //    if (pickupObject != null)
        //    {
        //        pickupObject.MoveTo(position);
        //    }
        //}

        //[Command]
        //public void CmdRotatePickupObject(Quaternion rotation)
        //{
        //    NetworkedPickupObject pickupObject = pickupObjectInstance.GetComponent<NetworkedPickupObject>();

        //    if (pickupObject != null)
        //    {
        //        pickupObject.RotateTo(rotation);
        //    }
        //}
        //[Command]
        //public void CmdDropPickupObject()
        //{
        //    NetworkedPickupObject pickupObject = pickupObjectInstance.GetComponent<NetworkedPickupObject>();

           
        //}

        public void AvatarCreated()
        {
            startBool = true;
            if (isLocalPlayer)
            {
                StartCoroutine(StreamAvatarData());

            }
        }
        //private void OnAvatarAnimationDataChanged(MetaAvatarModel model, byte[] data)
        //{
        //    if (!remoteLoaded) return;
        //    if (isLocalPlayer) return; //only apply data for remote     
        //    OVR.SetPlaybackTimeDelay(0.1f);
        //    OVR.ApplyStreamData(data);
        //}

        IEnumerator StreamAvatarData()
        {

            avatarBytes = OVR.RecordStreamData(OVR.activeStreamLod);
            //   TargetPlayAvatarData(GetComponent<NetworkIdentity>().connectionToClient, avatarBytes);


            CmdPlayAvatarData(avatarBytes);
            yield return waitTime;
            StartCoroutine(StreamAvatarData());
        }
        //[TargetRpc]
        //public void TargetPlayAvatarData(NetworkConnection target, byte[] aBytes)
        //{
        //    avatarBytes = aBytes;
        //    OVR.ApplyStreamData(avatarBytes);

        //}

        [Command]
        public void CmdPlayAvatarData(byte[] aBytes)
        {
            avatarBytes = aBytes;
           // OVR.ApplyStreamData(avatarBytes);

            RpcPlayAvatarData(avatarBytes);
        }
        // [SyncVar(hook = nameof(OnAvatarAnimationDataChanged))] private byte[] _avatarAnimationData = new byte[0];

        // private void OnAvatarAnimationDataChanged(byte[] oldValue, byte[] newValue)
        // {
        //     if (isOwned)
        //     {
        //         return; // Ignore changes made by the local player
        //     }

        //     OVR.SetPlaybackTimeDelay(0.1f);
        //     OVR.ApplyStreamData(newValue);
        // }
        [ClientRpc]
        public void RpcPlayAvatarData(byte[] aBytes)
        {
            
            
                avatarBytes = aBytes;
                Debug.Log("applying");
                OVR.ApplyStreamData(avatarBytes);
            

        }

        //void RecordAndSendStreamDataIfMine()
        //{
        //    if (isLocalPlayer)
        //    {
        //        byte[] bytes = OVR.RecordStreamData(OVR.activeStreamLod);

        //        RpcReceiveStreamData(bytes);



        //    }
        //}
        //[ClientRpc]
        //public void RpcReceiveStreamData(byte[] bytes)
        //{
        //    m_streamedDataList.Add(bytes);
        //}

        //private void NetworkUpdate()
        //{
        //    if (m_streamedDataList.Count > 0)
        //    {
        //        if (OVR.IsLocal == false)
        //        {
        //            byte[] firstBytesInList = m_streamedDataList[0];
        //            if (firstBytesInList != null)
        //            {
        //                OVR.ApplyStreamData(firstBytesInList);
        //            }
        //            m_streamedDataList.RemoveAt(0);
        //        }
        //    }
        //}
        //*********************************************Methode 1***********************************************************************************************
        //[SyncVar] public  List<byte[]> m_streamedDataList = new List<byte[]>();

        //void RecordAndSendStreamDataIfMine()
        //{
        //    if (isLocalPlayer)
        //    {
             
        //        byte[] bytes = OVR.RecordStreamData(OVR.activeStreamLod);
        //        CmdRecieveStreamData(bytes);
        //    }
        //}

        //[Command(requiresAuthority = false)]
        //public void CmdRecieveStreamData(byte[] bytes)
        //{
        //    RpcRecieveStreamData(bytes);
        //}
        //[ClientRpc]
        //public void RpcRecieveStreamData(byte[] bytes)
        //{
        //    m_streamedDataList.Add(bytes);
        //}

        //private void LateUpdate()
        //{
        //    float elapsedTime = Time.time - m_cycleStartTime;
        //    if (elapsedTime > m_intervalToSendData)
        //    {
        //        Debug.Log("record");
        //        RecordAndSendStreamDataIfMine();
        //        m_cycleStartTime = Time.time;
        //    }
        //}

        //private void Update()
        //{
           
            

        //    if (!isLocalPlayer)
        //    {
            
        //        // make non-local players run this
        //        floatingInfo.transform.LookAt(Camera.main.transform);
        //        return;
        //    }
           
        //    if (m_streamedDataList.Count > 0)
        //    {
        //        if (OVR.IsLocal == false)
        //        {
        //            byte[] firstBytesInList = m_streamedDataList[0];
        //            if (firstBytesInList != null)
        //            {
        //                Debug.Log("applying");
        //                OVR.ApplyStreamData(firstBytesInList);
        //            }
        //            m_streamedDataList.RemoveAt(0);
        //        }
        //    }

        //}



    }
    //************************************************************************************************




}
