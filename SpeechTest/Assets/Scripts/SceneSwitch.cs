using UnityEngine;
using System.Collections;

public class SceneSwitch : MonoBehaviour, ISpeechRecognitionListener {

    private GUIStyle fontStyle = new GUIStyle();
    private string lastResults = "";
    // Use this for initialization
    void Start()
    {
        SpeechRecognition.AddSpeechRecognitionListeren(this);
        SpeechRecognition.StartListening();
        fontStyle.normal.textColor = Color.white;


    }
    public void OnResults(string[] results)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        sb.Append(results[0].ToString().ToLower());
        lastResults = sb.ToString();
        SpeechRecognition.StartListening();
    }

    // Update is called once per frame
    void Update()
    {
		string commandRecognized = "";
		Debug.Log("Beggining update");
		foreach(string key in SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations.Keys){
			if(SpeechRecognition.CommandRecognized(key)){
				commandRecognized = key;
				Debug.Log ("Command recognized "+ key);
				break;
			}
		}
		if(!(commandRecognized.Equals("")||commandRecognized==null)){
			if(commandRecognized.Equals("HEYMONSTER")){
				SpeechRecognition.StopListening();
				SpeechRecognition.RemoveSpeechRecognitionListeren(this);
				Application.LoadLevel(1);
			}
		}
        
	}
	void OnGUI()
	{
		GUI.Label(new Rect(0, 0, Screen.width, Screen.height), "Speech text:"+lastResults,fontStyle);
    }
   
    public void OnBeginningOfSpeech()
    {
        //throw new System.NotImplementedException();
    }

    public void OnBufferReceived(byte[] buffer)
    {
        //throw new System.NotImplementedException();
    }

    public void OnEndOfSpeech()
    {
    //    throw new System.NotImplementedException();
    }

    public void OnError(int error, string errorMessage)
    {
        lastResults = errorMessage + " " + error;
        if (error == 5)
        {
            SpeechRecognition.StartListening();
        }
    }

    public void OnEvent(int eventType, System.Collections.Generic.Dictionary<string, string> bundle)
    {
        //throw new System.NotImplementedException();
    }

    public void OnPartialResults(System.Collections.Generic.Dictionary<string, string> partialResults)
    {
        //throw new System.NotImplementedException();
    }

    public void OnReadyForSpeech(System.Collections.Generic.Dictionary<string, string> bundle)
    {
        //throw new System.NotImplementedException();
    }

    public void OnRmsChanged(float rmsdB)
    {
    
        //throw new System.NotImplementedException();
    }

    public void OnChangeState(SpeechRecognition.State newState)
    {
        //throw new System.NotImplementedException();
        /*
        if (newState == SpeechRecognition.State.IDLE)
        {
            SpeechRecognition.StartListening();
        }
        */
        //throw new System.NotImplementedException();
    }
}
