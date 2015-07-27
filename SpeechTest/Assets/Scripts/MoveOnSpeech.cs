using UnityEngine;
using System.Collections;


public class MoveOnSpeech : MonoBehaviour, ISpeechRecognitionListener {

    private GUIStyle fontStyle = new GUIStyle();
    public MediaPlayerCtrl scrMedia;
    private string lastResults = "", lastResults2="";
	public Vector2 direction = new Vector2(0, 0), speed = new Vector2(2, 2), movement, runningSpeed = new Vector2(2, 2), walkingSpeed = new Vector2(1, 1);
    private bool facingRight = true, running = false, walking = false;
	private string lastAnimation = "";
	public string taggedObject = "Monster";
	private Queue animationQueue = new Queue();
	// Use this for initialization
    void Start()
    {
		//Add the listener
        SpeechRecognition.AddSpeechRecognitionListeren(this);
		//Start it
        SpeechRecognition.StartListening();
		//Change the font to make it visible
        fontStyle.normal.textColor = Color.white;

    }
    public void OnResults(string[] results)
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        sb.Append(results[0]);
		//Display the last results for debugging
        lastResults = sb.ToString();
		//Restart the listening.
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
			
			Debug.Log("Animation Dictionary");
			Debug.Log("AnimationDict"+SpeechRecognition.GetSpeechAnimationDictionary());
			SpeechAnimationDictionary.Animation currentAnimation = null;

			currentAnimation = SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations[commandRecognized];
			if(currentAnimation != null){
				try{
					direction = currentAnimation.direction;
					if(facingRight && currentAnimation.flippedX){
						//Monster is facing right and we need to flip
						facingRight = !facingRight;
						Vector3 theScale = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
						theScale.x *= -1;
						//lastResults2 = theScale.ToString();
						GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale;
					}
					else if(!facingRight&&!currentAnimation.flippedX){
						//opposite condition
						facingRight = !facingRight;
						Vector3 theScale = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
						theScale.x *= -1;
						//lastResults2 = theScale.ToString();
						GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale;
					}
					//Check if running or walking
					if(currentAnimation.running){
						running = currentAnimation.running;
						walking = false;
						speed = runningSpeed;
					}
					else if(currentAnimation.walking){
						running = false;
						walking = currentAnimation.walking;
						speed = walkingSpeed;
					}
					else{
						running = walking = false;
					}
					if(currentAnimation!=null)
					if(lastAnimation.Equals(currentAnimation.animation)){
						//Do nothing video is already playing
					}
					else if(!currentAnimation.animation.Equals("")&&currentAnimation.animation!=null){
						scrMedia.Load(currentAnimation.animation);
						scrMedia.Play();
					}
					lastAnimation = currentAnimation.animation;
					lastResults2 = commandRecognized;
					switch(commandRecognized){
					case "HEYMONSTER":
						heyMonster();
						break;
					case "SINGQUESTION":
						askMonster();
						break;
					case "SUNSHINES":
						break;
					case "FLOWER":
						break;
					case "RAIN":
						break;
					case "THUNDER":
						break;
					case "STARS":
						break;
					default:
						lastResults2 = "NO VIABLE CASE";
						break;
					}
				}
				catch(System.Exception e){
					lastResults2="Exception"+e.ToString();
					return;
				}
			}
			if(animationQueue.Count!=0){
				//Not playing anything
				if(!((CustomAnimation)animationQueue.Peek()).isPlaying()){
					//Check if empty
					animationQueue.Dequeue();
					((CustomAnimation)animationQueue.Peek()).startAnimation();				}
				
			}
		}
        
       
        movement = new Vector2(speed.x*direction.x, speed.y * direction.y);
		Vector3 theScale1 = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
		theScale1.y = 1.6f;
		GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale1;

	}

	private void heyMonster(){
		//Show monster onscreen
		lastResults2 = "Monster is appearing";

		if(!isVisible()){
			lastResults2 = "Monster is appearing";
			appearMonster();
		}
		//Enable bounds in case monster runs out of bounds
		GetComponent<BorderCollision>().enabled = true;
		//We need to set this as a queue to play after the monste appears so it flows smoothly
		GetComponent<AudioSource>().Stop();

		AudioClip breath =  (AudioClip)Resources.Load("Sounds/MonsterSounds/breath01");
		GetComponent<AudioSource>().clip = breath;
		GetComponent<AudioSource>().loop = true;
		GetComponent<AudioSource>().PlayDelayed(10);
		lastResults2 = "Delegate!!!";

	}
	delegate void MyDelegate();
	MediaPlayerCtrl.VideoEnd myDelegate;
	void PrintNum()
	{
		AudioClip breath =  (AudioClip)Resources.Load("Sounds/MonsterSounds/breath03");
		GetComponent<AudioSource>().clip = breath;
		GetComponent<AudioSource>().loop = true;
		GetComponent<AudioSource>().PlayDelayed(4);
	}

	private void askMonster(){

		AudioClip breath =  (AudioClip)Resources.Load("Sounds/MonsterSounds/no sound 01");
		GetComponent<AudioSource>().clip = breath;
		GetComponent<AudioSource>().PlayDelayed(10);

		//Wait until finish!
//		myDelegate = PrintNum;
//		MediaPlayerCtrl.VideoEnd = PrintNum;
//		scrMedia.OnEnd = 

	}

	private void sunShine(){

	}
	private void flower(){

	}
	private void rain(){

	}
	private void thunder(){

	}
	private void stars(){

	}
	private void appearMonster(){
		lastResults2 = "In appear monster";
		GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(GetComponent<BorderCollision>().leftBorder, GameObject.FindGameObjectWithTag(taggedObject).transform.position.y, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
		AudioClip breath =  (AudioClip)Resources.Load("Sounds/MonsterSounds/curious hmm sound 01");
		GetComponent<AudioSource>().clip = breath;
		GetComponent<AudioSource>().Play();

	}
	private void monsterNo(int type){

	}
	private bool isVisible(){
		return GetComponent<Renderer>().isVisible; 
	}
	void OnGUI()
	{
		GUI.Label(new Rect(0, 0, Screen.width, Screen.height), "Speech text:"+lastResults,fontStyle);
        GUI.Label(new Rect(0, 30, Screen.width, Screen.height), "Collision:" + lastResults2, fontStyle);
    }
    void FixedUpdate()
    {
        GetComponent<Rigidbody2D>().velocity = movement;
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
        if (error == 5 || error == 4 || error == 6)
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

        //SpeechRecognition.StartListening();
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
