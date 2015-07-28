using UnityEngine;
using System.Collections;

public class CustomAnimation{
	public GameObject victim;
	public bool flippedX = false, flippedY = false, running = false, walking = false, loopState = false;
	public string animation = null, audio = null;
	public Vector2 direction = new Vector2(0,0);

	public CustomAnimation (bool flippedX, bool flippedY, string animation)
	{
		this.flippedX = flippedX;
		this.flippedY = flippedY;
		this.animation = animation;
	}
	public override string ToString(){
		return ""+flippedX+" "+flippedY+" "+animation+" "+running+" "+walking+" "+direction;
	}
	public MediaPlayerCtrl screenItem;

	public bool isPlayingOnce(){
		return screenItem.GetCurrentSeekPercent()!=100;
	}
	public void stopAnimation(){
		victim.GetComponent<AudioSource>().Stop();
		screenItem.Stop();
	}
	public void startAnimation(){
		//Load the data necesary for the animation
		AudioClip audiofile =  (AudioClip)Resources.Load(audio);
		victim.GetComponent<AudioSource>().clip = audiofile;
		screenItem.Load(animation);

		//Perform said animation
		victim.GetComponent<AudioSource>().Play();
		screenItem.Play();
	}
	public void loop(bool condition){
		loopState = condition;
		if(loopState){
			screenItem.m_bLoop = true;
			victim.GetComponent<AudioSource>().loop = true;
		}
		else{
			screenItem.m_bLoop = false;
			victim.GetComponent<AudioSource>().loop = false;

		}
	}
	public virtual void customBehavior(){
		return;
	}
}