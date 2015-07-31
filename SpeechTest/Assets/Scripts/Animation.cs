using UnityEngine;
using System.Collections;

public class CustomAnimation{

	public GameObject victim;
	public bool flippedX = false, flippedY = false, running = false, walking = false;
	public string animation = null, audio = null;
	public Vector2 direction = new Vector2(0,0);
	public float animationTime = 3f;
	public MediaPlayerCtrl screenItem;
	private bool playOnce = false;

	public float getDuration ()
	{
		return this.animationTime;
	}

	public CustomAnimation (bool flippedX, bool flippedY, string animation)
	{
		this.flippedX = flippedX;
		this.flippedY = flippedY;
		this.animation = animation;
	}
	public override string ToString(){
		return ""+flippedX+" "+flippedY+" "+animation+" "+running+" "+walking+" "+direction;
	}
	
	public bool playedOnce(){
		return playOnce;
	}
	public void stopAnimation(){
		victim.GetComponent<AudioSource>().Stop();
		screenItem.Stop();
	}
	public void loadAnimation(){
		//Load the data necesary for the animation
		AudioClip audiofile =  (AudioClip)Resources.Load(audio);
		victim.GetComponent<AudioSource>().Stop();
		victim.GetComponent<AudioSource>().clip = audiofile;
		screenItem.Load(animation);
	}
	public void startAnimation(){
		//Perform said animation
		playOnce = false;
		victim.GetComponent<AudioSource>().Play();
		screenItem.Play();
	}
	public void setPlayedOnce(bool played){
		playOnce = played;
	}
	public virtual void customBehavior(){
		return;
	}

}