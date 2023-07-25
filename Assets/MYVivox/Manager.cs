using System;
using UnityEngine;
using Unity.Services.Authentication;
using Unity.Services.Core;
using Unity.Services.Vivox;
using VivoxUnity;
using TMPro;
using System.Linq;
using System.ComponentModel;
using UnityEngine.Android;
using Client = VivoxUnity.Client;


public class Manager : MonoBehaviour
{
    private static object m_Lock = new object();
    private static VivoxVoiceManager m_Instance;
    [SerializeField]
    private string _key;
    [SerializeField]
    private string _issuer;
    [SerializeField]
    private string _domain;
    [SerializeField]
    private string _server;
    [SerializeField]
    private GameObject mic;
    [SerializeField]
    private GameObject sound;
    [SerializeField]
    TextMeshProUGUI speech;
    public ILoginSession LoginSession;
    private Client _client => VivoxService.Instance.Client;
    public LoginState LoginState { get; private set; }
    public IAudioDevices AudioInputDevices => _client.AudioInputDevices;
    public IAudioDevices AudioOutputDevices => _client.AudioOutputDevices;
    private int PermissionAskedCount = 0;
    private bool permission;
    public delegate void ParticipantValueChangedHandler(string username, ChannelId channel, bool value);
    public event ParticipantValueChangedHandler OnSpeechDetectedEvent;
    public delegate void ParticipantValueUpdatedHandler(string username, ChannelId channel, double value);
    public event ParticipantValueUpdatedHandler OnAudioEnergyChangedEvent;
    public delegate void ParticipantStatusChangedHandler(string username, ChannelId channel, IParticipant participant);
    public event ParticipantStatusChangedHandler OnParticipantAddedEvent;
    public event ParticipantStatusChangedHandler OnParticipantRemovedEvent;
    private Account m_Account;
    public VivoxUnity.IReadOnlyDictionary<ChannelId, IChannelSession> ActiveChannels => LoginSession?.ChannelSessions;
    #region Properties

    /// <summary>
    /// Retrieves the first instance of a session that is transmitting. 
    /// </summary>
    public IChannelSession TransmittingSession
    {
        get
        {
            if (_client == null)
                throw new NullReferenceException("client");
            return _client.GetLoginSession(m_Account).ChannelSessions.FirstOrDefault(x => x.IsTransmitting);
        }
        set
        {
            if (value != null)
            {
                _client.GetLoginSession(m_Account).SetTransmissionMode(TransmissionMode.All, value.Channel);
            }
        }
    }
    #endregion
    private void Awake()
    {
        if (m_Instance != this && m_Instance != null)
        {
            Debug.LogWarning("Multiple VivoxVoiceManager detected in the scene. Only one VivoxVoiceManager can exist at a time. The duplicate VivoxVoiceManager will be destroyed.");
            Destroy(this);
            return;
        }
        AskForPermissions();
        permission = IsMicPermissionGranted();
    }
    async void Start()
    {
       

//        await UnityServices.InitializeAsync(options);
//#if AUTH_PACKAGE_PRESENT
//        if(!CheckManualCredentials())
//        {
//            await AuthenticationService.Instance.SignInAnonymouslyAsync();
//        }
//#endif

        await UnityServices.InitializeAsync();
        await AuthenticationService.Instance.SignInAnonymouslyAsync();

        VivoxService.Instance.Initialize();
        Debug.Log(_client.AudioInputDevices.Muted);
        speech.text = "init";
       
        if (IsMicPermissionGranted())
        Login("ee");
    }
    public void JoinChannel(string channelName, ChannelType channelType, bool connectAudio, bool connectText, bool transmissionSwitch = true, Channel3DProperties properties = null)
    {
        if (LoginSession.State == LoginState.LoggedIn)
        {
            Channel channel = new Channel(channelName, channelType, properties);

            IChannelSession channelSession = LoginSession.GetChannelSession(channel);
            channelSession.PropertyChanged += OnChannelPropertyChanged;
            channelSession.Participants.AfterKeyAdded += OnParticipantAdded;
            channelSession.Participants.BeforeKeyRemoved += OnParticipantRemoved;

            channelSession.Participants.AfterValueUpdated += OnParticipantValueUpdated;
            channelSession.BeginConnect(connectAudio, connectText, transmissionSwitch, channelSession.GetConnectToken(), ar =>
            {
                try
                {
                    channelSession.EndConnect(ar);
                }
                catch (Exception e)
                {
                    Debug.LogError($"Could not connect to channel: {e.Message}");
                    return;
                }
            });
        }
        else
        {
            Debug.LogError("Can't join a channel when not logged in.");
        }
        speech.text = "channel";
    }
    private void OnParticipantRemoved(object sender, KeyEventArg<string> keyEventArg)
    {
        ValidateArgs(new object[] { sender, keyEventArg });

        // INFO: sender is the dictionary that changed and trigger the event.  Need to cast it back to access it.
        var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
        // Look up the participant via the key.
        var participant = source[keyEventArg.Key];
        var username = participant.Account.Name;
        var channel = participant.ParentChannelSession.Key;
        var channelSession = participant.ParentChannelSession;

        if (participant.IsSelf)
        {
            VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
            // Now that we are disconnected, unsubscribe.
            channelSession.PropertyChanged -= OnChannelPropertyChanged;
            channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
            channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
            channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
           

            // Remove session.
            var user = _client.GetLoginSession(m_Account);
            user.DeleteChannelSession(channelSession.Channel);
        }

        // Trigger callback
        OnParticipantRemovedEvent?.Invoke(username, channel, participant);
    }
    private void OnChannelPropertyChanged(object sender, PropertyChangedEventArgs propertyChangedEventArgs)
    {
        ValidateArgs(new object[] { sender, propertyChangedEventArgs });

        //if (_client == null)
        //    throw new InvalidClient("Invalid client.");
        var channelSession = (IChannelSession)sender;

        // IF the channel has removed audio, make sure all the VAD indicators aren't showing speaking.
        if (propertyChangedEventArgs.PropertyName == "AudioState" && channelSession.AudioState == ConnectionState.Disconnected)
        {
            VivoxLog($"Audio disconnected from: {channelSession.Key.Name}");

            foreach (var participant in channelSession.Participants)
            {
                OnSpeechDetectedEvent?.Invoke(participant.Account.Name, channelSession.Channel, false);
            }
        }

        // IF the channel has fully disconnected, unsubscribe and remove.
        if ((propertyChangedEventArgs.PropertyName == "AudioState" || propertyChangedEventArgs.PropertyName == "TextState") &&
            channelSession.AudioState == ConnectionState.Disconnected &&
            channelSession.TextState == ConnectionState.Disconnected)
        {
            VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
            // Now that we are disconnected, unsubscribe.
            channelSession.PropertyChanged -= OnChannelPropertyChanged;
            channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
            channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
            channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
           

            // Remove session.
            var user = _client.GetLoginSession(m_Account);
            user.DeleteChannelSession(channelSession.Channel);

        }
    }

    public void Login(string displayName)
    {
        var account = new Account("ee");
        bool connectAudio = true;
        bool connectText = true;

        LoginSession = VivoxService.Instance.Client.GetLoginSession(account);
        LoginSession.PropertyChanged += LoginSession_PropertyChanged;

        LoginSession.BeginLogin(LoginSession.GetLoginToken(), SubscriptionMode.Accept, null, null, null, ar =>
        {
            try
            {
                LoginSession.EndLogin(ar);
            }
            catch (Exception e)
            {
                // Unbind any login session-related events you might be subscribed to.
                // Handle error
                return;
            }
            // At this point, we have successfully requested to login. 
            // When you are able to join channels, LoginSession.State will be set to LoginState.LoggedIn.
            // Reference LoginSession_PropertyChanged()
        });
        speech.text = "login";
    }

    // For this example, we immediately join a channel after LoginState changes to LoginState.LoggedIn.
    // In an actual game, when to join a channel will vary by implementation.
    private void LoginSession_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        var loginSession = (ILoginSession)sender;
        if (e.PropertyName == "State")
        {
            if (loginSession.State == LoginState.LoggedIn)
            {
                bool connectAudio = true;
                bool connectText = true;

                // This puts you into an echo channel where you can hear yourself speaking.
                // If you can hear yourself, then everything is working and you are ready to integrate Vivox into your project.
                // JoinChannel("TestChannel", ChannelType.Echo, connectAudio, connectText);
                // To test with multiple users, try joining a non-positional channel.
                JoinChannel("MultipleUserTestChannel", ChannelType.NonPositional, connectAudio, connectText);
                Debug.Log("session");
                speech.text = "session";
            }
        }
        
    }
    void LogOut()
    {
        // For this example, _loginSession is assumed to be an ILoginSession.
        LoginSession.Logout();
    }
    public void muteYourself()
    {
        if (_client.AudioInputDevices.Muted)
        {
            _client.AudioInputDevices.Muted = false;
            mic.transform.GetChild(0).gameObject.SetActive(true);
            mic.transform.GetChild(1).gameObject.SetActive(false);
        }


        else
        { 
            _client.AudioInputDevices.Muted = true;
        mic.transform.GetChild(1).gameObject.SetActive(true);
        mic.transform.GetChild(0).gameObject.SetActive(false);
    }
    }
    //****************************************************
    private static void ValidateArgs(object[] objs)
    {
        foreach (var obj in objs)
        {
            if (obj == null)
                throw new ArgumentNullException(obj.GetType().ToString(), "Specify a non-null/non-empty argument.");
        }
    }
    private void OnParticipantValueUpdated(object sender, ValueEventArg<string, IParticipant> valueEventArg)
    {
        ValidateArgs(new object[] { sender, valueEventArg });

        var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
        // Look up the participant via the key.
        var participant = source[valueEventArg.Key];

        string username = valueEventArg.Value.Account.Name;
        ChannelId channel = valueEventArg.Value.ParentChannelSession.Key;
        string property = valueEventArg.PropertyName;

        switch (property)
        {
            case "SpeechDetected":
                {
                    VivoxLog($"OnSpeechDetectedEvent: {username} in {channel}.");
                    speech.text = $"OnSpeechDetectedEvent: {username} in {channel}.";
                    OnSpeechDetectedEvent?.Invoke(username, channel, valueEventArg.Value.SpeechDetected);
                    break;
                }
            case "AudioEnergy":
                {
                    OnAudioEnergyChangedEvent?.Invoke(username, channel, valueEventArg.Value.AudioEnergy);
                    break;
                }
            default:
                break;
        }
    }
    private void VivoxLog(string msg)
    {
        Debug.Log("<color=green>VivoxVoice: </color>: " + msg);
    }

    private void VivoxLogError(string msg)
    {
        Debug.LogError("<color=green>VivoxVoice: </color>: " + msg);
    }
#if (UNITY_ANDROID && !UNITY_EDITOR) || __ANDROID__
    private bool IsAndroid12AndUp()
    {
        // android12VersionCode is hardcoded because it might not be available in all versions of Android SDK
        const int android12VersionCode = 31;
        AndroidJavaClass buildVersionClass = new AndroidJavaClass("android.os.Build$VERSION");
        int buildSdkVersion = buildVersionClass.GetStatic<int>("SDK_INT");

        return buildSdkVersion >= android12VersionCode;
    }

    private string GetBluetoothConnectPermissionCode()
    {
        if (IsAndroid12AndUp())
        {
            // UnityEngine.Android.Permission does not contain the BLUETOOTH_CONNECT permission, fetch it from Android
            AndroidJavaClass manifestPermissionClass = new AndroidJavaClass("android.Manifest$permission");
            string permissionCode = manifestPermissionClass.GetStatic<string>("BLUETOOTH_CONNECT");

            return permissionCode;
        }

        return "";
    }
#endif
    private bool IsMicPermissionGranted()
    {
        bool isGranted = Permission.HasUserAuthorizedPermission(Permission.Microphone);
#if (UNITY_ANDROID && !UNITY_EDITOR) || __ANDROID__
        if (IsAndroid12AndUp())
        {
            // On Android 12 and up, we also need to ask for the BLUETOOTH_CONNECT permission for all features to work
            isGranted &= Permission.HasUserAuthorizedPermission(GetBluetoothConnectPermissionCode());
        }
#endif
        return isGranted;
    }

    private void AskForPermissions()
    {
        string permissionCode = Permission.Microphone;

#if (UNITY_ANDROID && !UNITY_EDITOR) || __ANDROID__
        if (PermissionAskedCount == 1 && IsAndroid12AndUp())
        {
            permissionCode = GetBluetoothConnectPermissionCode();
        }
#endif
        PermissionAskedCount++;
        Permission.RequestUserPermission(permissionCode);
    }
    private bool CheckManualCredentials()
    {
        return !(string.IsNullOrEmpty(_key) && string.IsNullOrEmpty(_issuer) && string.IsNullOrEmpty(_domain) && string.IsNullOrEmpty(_server));
    }
    public static VivoxVoiceManager Instance
    {
        get
        {
            lock (m_Lock)
            {
                if (m_Instance == null)
                {
                    // Search for existing instance.
                    m_Instance = (VivoxVoiceManager)FindObjectOfType(typeof(VivoxVoiceManager));

                    // Create new instance if one doesn't already exist.
                    if (m_Instance == null)
                    {
                        // Need to create a new GameObject to attach the singleton to.
                        var singletonObject = new GameObject();
                        m_Instance = singletonObject.AddComponent<VivoxVoiceManager>();
                        singletonObject.name = typeof(VivoxVoiceManager).ToString() + " (Singleton)";
                    }
                }
                // Make instance persistent even if its already in the scene
                DontDestroyOnLoad(m_Instance.gameObject);
                return m_Instance;
            }
        }
    }
    private void OnParticipantAdded(object sender, KeyEventArg<string> keyEventArg)
    {
        ValidateArgs(new object[] { sender, keyEventArg });

        // INFO: sender is the dictionary that changed and trigger the event.  Need to cast it back to access it.
        var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
        // Look up the participant via the key.
        var participant = source[keyEventArg.Key];
        var username = participant.Account.Name;
        var channel = participant.ParentChannelSession.Key;
        var channelSession = participant.ParentChannelSession;

        // Trigger callback
        OnParticipantAddedEvent?.Invoke(username, channel, participant);
        Debug.Log("newuser");
    }

    
}
