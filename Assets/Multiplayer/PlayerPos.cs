using SimpleJSON;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

using System.IO;
using System.Net;
using System;
public class PlayerPos : MonoBehaviour
////{
////    private string urlStorePosition = "http://localhost:8000/store-position";
////    private string urlRetrievePosition = "http://localhost:8000/retrieve-position";
////    public Vector3 position;    



////    void Start()
////    {
////        // Retrieve the player's last saved position from the server
////        StartCoroutine(RetrievePosition());

////        // Start sending the player's position to the server
////        StartCoroutine(SendPosition(5.0f));
////    }

////    IEnumerator RetrievePosition()
////    {
////        // Create the JSON payload
////        string payload = "{\"position\": [" + transform.position.x + ", " + transform.position.y + ", " + transform.position.z + "]}";

////        // Send the HTTP request to retrieve the player's last saved position
////        byte[] bytes = Encoding.UTF8.GetBytes(payload);
////        UnityWebRequest request = new UnityWebRequest(urlRetrievePosition, "POST");
////        request.uploadHandler = new UploadHandlerRaw(bytes);
////        request.downloadHandler = new DownloadHandlerBuffer();
////        request.SetRequestHeader("Content-Type", "application/json");
////        yield return request.SendWebRequest();

////        if (request.result != UnityWebRequest.Result.Success)
////        {
////            Debug.LogError(request.error);
////        }
////        else
////        {
////            // Parse the JSON response
////            string positionJson = request.downloadHandler.text;
////            Vector3 position = JsonUtility.FromJson<Vector3>(positionJson);

////            // Set the player's position to the last saved position
////            transform.position = position;
////        }
////    }

////  IEnumerator SendPosition(float interval)
////{
////    while (true)
////    {
////        Vector3 position = transform.position;
////        Dictionary<string, string> headers = new Dictionary<string, string>();
////        headers.Add("Content-Type", "application/json");

////        // Create the JSON payload
////        string payload ="{\"position\": [" + position.x + ", " + position.y + ", " + position.z + "]}";

////        // Send the HTTP request to store the player's position
////        byte[] bytes = Encoding.UTF8.GetBytes(payload);
////        UnityWebRequest request = new UnityWebRequest(urlStorePosition, "POST");
////        request.uploadHandler = new UploadHandlerRaw(bytes);
////        request.downloadHandler = new DownloadHandlerBuffer();
////            Debug.Log("p" + payload);
////        foreach (KeyValuePair<string, string> entry in headers)
////        {
////            request.SetRequestHeader(entry.Key, entry.Value);
////        }
////        yield return request.SendWebRequest();

////        if (request.result != UnityWebRequest.Result.Success)
////        {
////            Debug.LogError(request.error);
////        }

////        yield return new WaitForSeconds(interval);
////    }
////}


////}
{
    private string serverUrl = "http://localhost:8000/updatePosition";
    private string serverUrl1 = "http://localhost:8000";
    private float updateInterval = 5.0f;
    private float timeSinceUpdate = 0.0f;
    void Start()
    {
        StartCoroutine(RetrievePositionFromServer());
    }

    // Update is called once per frame
    void Update()
    {
        timeSinceUpdate += Time.deltaTime;
        if (timeSinceUpdate >= updateInterval)
        {
            timeSinceUpdate = 0.0f;
            StartCoroutine(SavePositionToServer());
        }
    }

    IEnumerator SavePositionToServer()
    {
        Vector3 position = transform.position;
        Quaternion rotation = transform.rotation;
        string postData = JsonUtility.ToJson(new PositionData(position, rotation));

        using (var request = UnityWebRequest.Put(serverUrl, postData))
        {
            request.method = UnityWebRequest.kHttpVerbPUT;
            request.SetRequestHeader("Content-Type", "application/json");
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
            }
        }
    }
    IEnumerator RetrievePositionFromServer()
    {
        using (var request = UnityWebRequest.Get("http://localhost:8000/retrievePosition"))

        {
            request.SetRequestHeader("Content-Type", "application/json");
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
            }
            else
            {
                string jsonString = request.downloadHandler.text;
                PositionData positionData = JsonUtility.FromJson<PositionData>(jsonString);

                // Use the position and rotation data to place the player in the correct position
                transform.position = positionData.position;
                transform.rotation = positionData.rotation;
            }
        }
    }


    [Serializable]
    public class PositionData
    {
        public Vector3 position;
        public Quaternion rotation;

        public PositionData(Vector3 position, Quaternion rotation)
        {
            this.position = position;
            this.rotation = rotation;
        }
    }
}