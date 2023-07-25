using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using System.Security.Cryptography.X509Certificates;
using Newtonsoft.Json;


public class Code : MonoBehaviour
{
    [SerializeField] private GameObject login;
    public TMP_InputField codeInput;
    public TextMeshProUGUI resultText;
    public string code;
    public string response = "";
    public string publicKey= "";
    [SerializeField] public string searchPublicKeyURL = "http://localhost:8000/user/publickey";

    public void CheckCode()
    {
        StartCoroutine(CheckCodeCoroutine());

       

    }

    private IEnumerator CheckCodeCoroutine()
    {
         code = codeInput.text;

        WWWForm form = new WWWForm();
        form.AddField("code", code);

        UnityWebRequest request = UnityWebRequest.Post("http://localhost:8000/user/check", form);
        Debug.Log(form.ToString());
        yield return request.SendWebRequest();
        Debug.Log(request.result);

        if (request.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(request.error);
            resultText.text = "An error occurred while checking the code.";
            yield break;
        }

        string responseText = request.downloadHandler.text;
        Debug.Log(responseText);

        // Check if the response contains "Code has expired" error message
        if (responseText.Contains(code))
        {
            resultText.text = responseText;

            login.SetActive(false);
            SearchPublicKey(code);
            
        }
        else
        {
            resultText.text = "Code has expired";
        }
    }
    public void SearchPublicKey(string code)
    {
        StartCoroutine(SearchPublicKeyCoroutine(code));
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
            var jsonResponse = JsonConvert.DeserializeObject<Dictionary<string, string>>(response);
            if (jsonResponse.ContainsKey("publicKey"))
            {
                publicKey = jsonResponse["publicKey"];
            }
        }

        else
        {
            Debug.Log("Error searching public key: " + www.error);
        }
    }
    void awake()
    {
        
    }


}
