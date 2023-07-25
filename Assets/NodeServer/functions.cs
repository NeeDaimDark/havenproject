using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Networking;

public class functions : MonoBehaviour
{

    #region vatiables
    [SerializeField] public string updatescore = "localhost:8000/user/updateUserbyUserId/";
    [SerializeField] public string CreateGameEndpoint = "http://localhost:8000/game";
    [SerializeField] public string EndGameEndpoint = "http://localhost:8000/game/deleteOnce";
    [SerializeField] public string searchPublicKeyURL = "http://localhost:8000/user/publickey";
    [SerializeField] public string BaseUrl = "http://localhost:8000/";
    public string code = "1234";
    public string response = "";
    public static functions Instance;
    #endregion


    #region functions
    public void SearchPublicKey(string code)
    {
        StartCoroutine(SearchPublicKeyCoroutine(code));
    }
    public void UpdateWinnerpub(string gameId, string winnerId)
    {
        StartCoroutine(UpdateWinner(gameId, winnerId));
    }
    public void CreateGame()
    {
        StartCoroutine(TryCreate());
    }
    public void DeleteGamepub(string gameId)
    {
        StartCoroutine(DeleteGame( gameId));
    }
    public void UpdateScore(string publicKey, int newScore)
    {
        StartCoroutine(SendScoreUpdateRequest(publicKey, newScore));
    }
    public void CheckNFT(string name, string publicAddress)
    {
        StartCoroutine(SendCheckNFTRequest(name, publicAddress));
    }

    public void SendNFT(string destinationWallet, int transferAmount)
    {
        StartCoroutine(SendSendNFTRequest(destinationWallet, transferAmount));
    }
    private IEnumerator SendScoreUpdateRequest(string publicKey, int newScore)
    {

        string url = updatescore + publicKey;
        string jsonData = "{\"score\": " + newScore + "}";

        using (UnityWebRequest www = UnityWebRequest.Put(url, jsonData))
        {
            www.SetRequestHeader("Content-Type", "application/json");

            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("Score update successful");
            }
            else
            {
                Debug.Log("Score update failed: " + www.error);
            }
        }

    }
    private IEnumerator SendCheckNFTRequest(string name, string publicAddress)
    {
        // Create the form data
        WWWForm formData = new WWWForm();
        formData.AddField("name", name);
        formData.AddField("address", publicAddress);

        // Create the request
        UnityWebRequest request = UnityWebRequest.Post("http://localhost:8000/check", formData);

        // Send the request
        yield return request.SendWebRequest();

        // Handle the response
        if (request.result == UnityWebRequest.Result.Success)
        {
            // Request successful
            bool nftExists = bool.Parse(request.downloadHandler.text);
            Debug.Log($"NFT exists: {nftExists}");
        }
        else
        {
            // Request failed
            Debug.LogError($"Check NFT request failed: {request.error}");
        }
    }

    private IEnumerator SendSendNFTRequest(string destinationWallet, int transferAmount)
    {
        // Create the form data
        WWWForm formData = new WWWForm();
        formData.AddField("id", destinationWallet);
        formData.AddField("amount", transferAmount);

        // Create the request
        UnityWebRequest request = UnityWebRequest.Post("http://localhost:8000/send", formData);

        // Send the request
        yield return request.SendWebRequest();

        // Handle the response
        if (request.result == UnityWebRequest.Result.Success)
        {
            // Request successful
            Debug.Log("NFT sent successfully");
        }
        else
        {
            // Request failed
            Debug.LogError($"Send NFT request failed: {request.error}");
        }
    }
    private IEnumerator SearchPublicKeyCoroutine(string code)
    {
        WWWForm form = new WWWForm();
        form.AddField("code", code);

        UnityWebRequest www = UnityWebRequest.Post(searchPublicKeyURL, form);
        yield return www.SendWebRequest();

        if (www.result == UnityWebRequest.Result.Success)
        {
            response = www.downloadHandler.text;
            // Process the response here, assuming it's in JSON format
            // You can use JSON parsing libraries like Newtonsoft.Json to parse the response
            Debug.Log("Response: " + response);
        }
        else
        {
            Debug.Log("Error searching public key: " + www.error);
        }
    }

    private IEnumerator UpdateWinner(string gameId, string winnerId)
    {
        //WWWForm form = new WWWForm();
        //  form.AddField("winner", winnerId);
        var formData = new Dictionary<string, string>();
        formData["winner"] = winnerId;
        string url = "http://localhost:8000/game/put/" + gameId;
        string formDataJson = JsonUtility.ToJson(formData);

        using (UnityWebRequest www = UnityWebRequest.Put(url, formDataJson))
        // byte[] data = form.data;
        // using (UnityWebRequest www = UnityWebRequest.Put(url, data))
        {
            www.SetRequestHeader("Content-Type", "application/json");
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
                Debug.Log(gameId);
                Debug.Log(winnerId);
            }
            else
            {
                Debug.Log("Winner updated successfully.");
            }
        }
    }
    private IEnumerator DeleteGame(string gameId)
    {
        string url = "http://localhost:8000/game/delete/" + gameId;
        using (UnityWebRequest www = UnityWebRequest.Delete(url))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("Game deleted successfully.");
            }
        }
    }
   private IEnumerator TryCreate()
    {  string gameId;
       string playerId = "645812df21c4bdae9c39ccd1";
        gameId = System.Guid.NewGuid().ToString(); // generate a new unique ID
        Debug.Log(gameId);
        WWWForm form = new WWWForm();
        form.AddField("gameId", gameId); // add the generated ID to the form data
        form.AddField("players", playerId);

        Debug.Log(form);
        using (UnityWebRequest www = UnityWebRequest.Post("http://localhost:8000/game", form))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("game information sent successfully.");
            }
        }
    }


    //use this for initialisation

    #endregion
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
