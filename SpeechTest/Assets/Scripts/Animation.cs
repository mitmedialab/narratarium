using UnityEngine;
using System.Collections;
/**
 * A class that represents the animations that the monster or an object can do
 **/
public class CustomAnimation{
	//Who we are binding the animation to
	public GameObject victim;
	//Flip the X value
	public bool flippedX = false, 
	//Flip the Y value
	flippedY = false, 
	//Whether the animation is running or walking
	running = false, 
	walking = false;
	//The name of the animation
	public string animation = null, 
	//Any sound file linked to the animation
	audio = null;
	//The direction that the bound object will move
	public Vector2 direction = new Vector2(0,0);
	//The time it takes for the animation to play
	public float animationTime = 3f;
	//The video texture that will play the animation
	public MediaPlayerCtrl screenItem;
	//Tells whether the animation has been played or not
	private bool playOnce = false;


	public CustomAnimation (bool flippedX, bool flippedY, string animation)
	{
		this.flippedX = flippedX;
		this.flippedY = flippedY;
		this.animation = animation;
	}
	public CustomAnimation(){}

	public float getDuration ()
	{
		return this.animationTime;
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
	//Can be implemented for any custom behavior that we want/need
	public virtual void customBehavior(){
		return;
	}

}