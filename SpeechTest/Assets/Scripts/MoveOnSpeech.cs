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
	private CustomAnimation currentAnimation = null;
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
		//Get the command that was recognized
		string commandRecognized = "";
		foreach(string key in SpeechRecognition.GetSpeechAnimationDictionary().commandAnimations.Keys){
			if(SpeechRecognition.CommandRecognized(key)){
				commandRecognized = key;
				Debug.Log ("Command recognized "+ key);
				break;
			}
		}
		//Act on it, set the animation queue correctly and initiate it once.
		if(!(commandRecognized.Equals("")||commandRecognized==null)){
			
			//Load the animation queue and the current animation for the recognized command
			try{
				switch(commandRecognized){
					case "HEYMONSTER":
						heyMonster();
						break;
					case "SINGQUESTION":
						askMonster();
						break;
					case "SUNSHINES":
						sunShine();
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

				//Set the currently playing animation after the command has been identified
				currentAnimation = (CustomAnimation)animationQueue.Peek();

				currentAnimation.customBehavior();

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
					currentAnimation.startAnimation();
				}
				lastAnimation = currentAnimation.animation;
				lastResults2 = commandRecognized;

			}
			catch(System.Exception e){
				lastResults2="Exception"+e.ToString();
				return;
			}

		}
		if(animationQueue.Count!=0){
			//Check if looping
			if(!((CustomAnimation)animationQueue.Peek()).loopState)
				//if not then check if done
				lastResults2 = ((CustomAnimation)animationQueue.Peek()).isPlayingOnce()+"";
				if(!((CustomAnimation)animationQueue.Peek()).isPlayingOnce()){
					//Check if empty
					animationQueue.Dequeue();
					((CustomAnimation)animationQueue.Peek()).startAnimation();				
				}
		}

		//Apply the direction and etc
        movement = new Vector2(speed.x*direction.x, speed.y * direction.y);
		Vector3 theScale1 = GameObject.FindGameObjectWithTag("Monster").transform.localScale;
		theScale1.y = 1.6f;
		GameObject.FindGameObjectWithTag("Monster").transform.localScale = theScale1;

	}

	private void heyMonster(){
		//Show monster onscreen

		if(!isVisible()){
			appearMonster();
		}


		//Configure the animation
		CustomAnimation heyMonsterAnimation = new CustomAnimation(false,false,"HEYMONSTER");
		heyMonsterAnimation.screenItem = GetComponent<MediaPlayerCtrl>();
		heyMonsterAnimation.animation = "MonsterIdleBreaths Hard.mp4";
		heyMonsterAnimation.audio = "Sounds/MonsterSounds/breath01";
		heyMonsterAnimation.direction = new Vector2(0f,0f);
		heyMonsterAnimation.victim = this.gameObject;
		heyMonsterAnimation.loop(true);

		//animationQueue.Enqueue(heyMonsterAnimation);
		
	}

	private void askMonster(){
		((CustomAnimation)animationQueue.Peek()).stopAnimation();
		animationQueue.Clear();
		CustomAnimation askMonsterAnimation = new CustomAnimation(false,false,"NO1");
		askMonsterAnimation.screenItem = GetComponent<MediaPlayerCtrl>();
		askMonsterAnimation.animation = "Monster NO 1.mp4";
		askMonsterAnimation.audio = "Sounds/MonsterSounds/no sound 01";
		askMonsterAnimation.direction = new Vector2(0f,0f);
		askMonsterAnimation.victim = this.gameObject;
		askMonsterAnimation.loop(false);
		animationQueue.Enqueue(askMonsterAnimation);

		CustomAnimation heyMonsterAnimation = new CustomAnimation(false,false,"IDLE1");
		heyMonsterAnimation.screenItem = GetComponent<MediaPlayerCtrl>();
		heyMonsterAnimation.animation = "MonsterIdleBreaths Hard.mp4";
		heyMonsterAnimation.audio = "Sounds/MonsterSounds/breath01";
		heyMonsterAnimation.direction = new Vector2(0f,0f);
		heyMonsterAnimation.victim = this.gameObject;
		heyMonsterAnimation.loop(false);//TODO CHANGE TO TRUE

		animationQueue.Enqueue(askMonsterAnimation);
	}
	
	public IEnumerator SunRiseandShine() {
		GameObject.Find("SunShine").GetComponent<MediaPlayerCtrl>().Play();
		int seconds = GameObject.Find("SunShine").GetComponent<MediaPlayerCtrl>().GetDuration();
		yield return new WaitForSeconds(seconds*1f); // waits 3 seconds
		GameObject.Find("SunShine").GetComponent<MediaPlayerCtrl>().Load("sun shines.mp4");
		GameObject.Find("SunShine").GetComponent<MediaPlayerCtrl>().Play();
		
	}
	private void sunShine(){
		if(!isVisible()){
			appearMonster();
		}
		//Change the background
		Vector3 temp = GameObject.Find("daybackground").transform.position;
		GameObject.Find("daybackground").transform.position = new Vector3(temp.x,temp.y,GameObject.Find("1-Middle").transform.position.z+9f);
		temp = GameObject.Find("nightbackground").transform.position;
		GameObject.Find("nightbackground").transform.position= new Vector3(temp.x,temp.y,GameObject.Find("1-Middle").transform.position.z+10f);
		//Bring forth the sun
		temp = GameObject.Find("SunShine").transform.position;
		GameObject.Find("SunShine").transform.position=new Vector3(temp.x,temp.y,GameObject.Find("1-Middle").transform.position.z+8f);
		//Start the sun shine animation
		StartCoroutine(SunRiseandShine());
		//Monster Look Up animation
		CustomAnimation MonsterLookUp = new CustomAnimation(false,false,"LOOKUP");
		MonsterLookUp.screenItem = GetComponent<MediaPlayerCtrl>();
		MonsterLookUp.animation = "Monster Looks Up.mp4";
		MonsterLookUp.audio = "Sounds/MonsterSounds/muttering";
		MonsterLookUp.direction = new Vector2(0f,0f);
		MonsterLookUp.victim = this.gameObject;
		MonsterLookUp.loop(false);
		animationQueue.Enqueue(MonsterLookUp);

		//Enqueue the monster NO animation
		CustomAnimation MonsterNo2 = new CustomAnimation(false,false,"NO2");
		MonsterNo2.screenItem = GetComponent<MediaPlayerCtrl>();
		MonsterNo2.animation = "Monster NO 2.mp4";
		MonsterNo2.audio = "Sounds/MonsterSounds/no sound 02";
		MonsterNo2.direction = new Vector2(0f,0f);
		MonsterNo2.victim = this.gameObject;
		MonsterNo2.loop(false);
		animationQueue.Enqueue(MonsterNo2);

		//Monster Default Animation
		CustomAnimation heyMonsterAnimation = new CustomAnimation(false,false,"IDLE1");
		heyMonsterAnimation.screenItem = GetComponent<MediaPlayerCtrl>();
		heyMonsterAnimation.animation = "MonsterIdleBreaths Hard.mp4";
		heyMonsterAnimation.audio = "Sounds/MonsterSounds/breath01";
		heyMonsterAnimation.direction = new Vector2(0f,0f);
		heyMonsterAnimation.victim = this.gameObject;
		heyMonsterAnimation.loop(true);

		
		
//
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
		GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(GetComponent<BorderCollision>().leftBorder+3f, GameObject.FindGameObjectWithTag(taggedObject).transform.position.y, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
		//Enable bounds in case monster runs out of bounds
		GetComponent<BorderCollision>().enabled = true;

		//Configure the animation
		CustomAnimation appearAnimation = new CustomAnimation(false,false,"APPEAR");
		appearAnimation.screenItem = GetComponent<MediaPlayerCtrl>();
		appearAnimation.animation = "MonsterIdleBurps.mp4";
		appearAnimation.audio = "Sounds/MonsterSounds/curious hmm sound 01";
		appearAnimation.direction = new Vector2(0f,0f);
		appearAnimation.victim = this.gameObject;
		appearAnimation.loop(false);
		//Enqueue it!
		animationQueue.Enqueue(appearAnimation);
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
        if (error == 5 || error == 4)
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
