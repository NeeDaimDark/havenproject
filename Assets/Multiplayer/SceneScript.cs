using Mirror;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuickStart
{
    public class SceneScript : NetworkBehaviour
    {
        public Text canvasStatusText;
        public PlayerName playerScript;

        [SyncVar(hook = nameof(OnStatusTextChanged))]
        public string statusText;
        public SceneReference sceneReference;
        void OnStatusTextChanged(string _Old, string _New)
        {
            //called from sync var hook, to update info on screen for all players
            canvasStatusText.text = statusText;
        }

        public void ButtonSendMessage()
        {
            if (playerScript != null)
                playerScript.CmdSendPlayerMessage();
        }
        public void ButtonChangeScene()
        {
            if (!isServer) return;
            var scene = SceneManager.GetActiveScene();
            NetworkManager.singleton.ServerChangeScene(scene.name == "RoomVr" ? "GameVr" : "RoomVr");
        }
    }
}