using UnityEngine;
using System.Collections;

//Title screen to select which mode we will see (video or monster currently)
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
		foreach(string key in SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations.Keys){
			if(SpeechRecognition.CommandRecognized(key)){
				commandRecognized = key;
				Debug.Log ("Command recognized "+ key);
				break;
			}
		}
		if(!(commandRecognized.Equals("")||commandRecognized==null)){
			if(commandRecognized.Equals("HEYMONSTER")){
				if(Application.loadedLevel==0){
					SpeechRecognition.StopListening();
					SpeechRecognition.RemoveSpeechRecognitionListeren(this);
					DontDestroyOnLoad(SpeechRecognition.instance.gameObject);
					DontDestroyOnLoad(SpeechRecognition.instance);
					Application.LoadLevel(1);
				}
				
			}
			else if(commandRecognized.Equals("360VIDEO")){
				if(Application.loadedLevel==0){
					SpeechRecognition.StopListening();
					SpeechRecognition.RemoveSpeechRecognitionListeren(this);
					DontDestroyOnLoad(SpeechRecognition.instance.gameObject);
					DontDestroyOnLoad(SpeechRecognition.instance);
					Application.LoadLevel(2);
				}
			}
			else if(commandRecognized.Equals("EXIT")){
				Application.Quit();
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
//        lastResults = errorMessage + " " + error;
        if (error == 5 || error ==4)
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
//		lastResults = newState.ToString();
		//throw new System.NotImplementedException();

    }
}
