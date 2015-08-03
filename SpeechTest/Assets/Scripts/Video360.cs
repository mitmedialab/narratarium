using UnityEngine;
using System.Collections;

public class Video360 : MonoBehaviour, ISpeechRecognitionListener {

    private GUIStyle fontStyle = new GUIStyle();
    private string lastResults2 = "";
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
        //lastResults = sb.ToString();
        SpeechRecognition.StartListening();
    }

    // Update is called once per frame
    void Update()
    {
		string commandRecognized = "";
		Debug.Log("Beggining update");
		foreach(string key in SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations.Keys){
//			lastResults2+=key;
			if(SpeechRecognition.CommandRecognized(key)){
				commandRecognized = key;
				lastResults2 = "Command recognized "+ key;
				break;
			}
		}
		if(!(commandRecognized.Equals("")||commandRecognized==null)){
			lastResults2 = commandRecognized;
			if(commandRecognized.Equals("EXIT")){
				Application.Quit();
			}
			else if(commandRecognized.Equals("PAUSE")){
				GetComponent<MediaPlayerCtrl>().Stop();
			}
			else if(commandRecognized.Equals("START")){
				GetComponent<MediaPlayerCtrl>().Play();
			}
		}
        
	}
	void OnGUI()
	{
		GUI.Label(new Rect(0, 60, Screen.width, Screen.height), "Speech text:"+lastResults2,fontStyle);
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
        //lastResults = errorMessage + " " + error;
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
