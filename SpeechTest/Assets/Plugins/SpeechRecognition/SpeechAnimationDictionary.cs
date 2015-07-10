using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpeechAnimationDictionary : MonoBehaviour {
	
	public bool enableDictionary = false;

	public Dictionary<string,List<string>> voiceCommands = new Dictionary<string, List<string>>();
	public Dictionary<string,Animation> commandAnimations = new Dictionary<string, Animation>();
	public class Animation{
		public bool flippedX = false, flippedY = false, running = false, walking = false;
		public string animation = null;
		public Vector2 direction = new Vector2(0,0);
		public Animation (bool flippedX, bool flippedY, string animation)
		{
			this.flippedX = flippedX;
			this.flippedY = flippedY;
			this.animation = animation;
		}
		public override string ToString(){
			return ""+flippedX+" "+flippedY+" "+animation+" "+running+" "+walking+" "+direction;
		}
	}


	//is filled on calling ReloadDictionary, is used for faster detection
	private Dictionary<string,HashSet<string>> revertedCommands = new Dictionary<string,HashSet<string>>();

	public void ReloadDictionary(){
		revertedCommands.Clear();
		foreach(KeyValuePair<string,List<string>> kvp in voiceCommands){
			foreach(string speechText in kvp.Value){
				string trimmed = speechText.Trim();
				if(revertedCommands.ContainsKey(trimmed)){
					revertedCommands[trimmed].Add(kvp.Key.Trim());
				}else{
					HashSet<string> hs = new HashSet<string>();
					hs.Add(kvp.Key.Trim());   
					revertedCommands.Add(trimmed,hs);
				}
			}
		}
	}

	public void TestResults(ref string[] speechResults, ref HashSet<string> foundCommands){
		foreach(string result in speechResults){
			string trimmed = result.Trim();
			if(revertedCommands.ContainsKey(trimmed)){
				foundCommands.UnionWith(revertedCommands[trimmed]);
			}
		}
	}

	public void loadDictionary(string jsonString){
		var N = SimpleJSON.JSONNode.Parse(jsonString).AsArray;
		Debug.Log ("Count of input animations:"+N.Count);
		for(int i =0; i<N.Count;i++){
			SimpleJSON.JSONClass animationJson = N[i].AsObject;
			string name = animationJson["name"];
			List<string> voiceComs = new List<string>();
			foreach (var item in animationJson["voiceCommands"].AsArray){
				voiceComs.Add(item.ToString().Replace("\"",""));
			}
			Animation s = null;
			string root = @"null";
			string content = @animationJson["animation"].ToString();
			if(!(System.String.Compare(content.Substring(1,content.Length-2), root)==0)){
				bool flipx = animationJson["animation"].AsObject["flipX"].AsBool;
				bool flipy = animationJson["animation"].AsObject["flipY"].AsBool;
				bool running = animationJson["animation"].AsObject["running"].AsBool;
				bool walking = animationJson["animation"].AsObject["walking"].AsBool;

				s = new Animation(flipx,
				                  flipy,
				                  animationJson["animation"]["animation"].ToString().Replace("\"",""));
				SimpleJSON.JSONArray directionVector = animationJson["animation"].AsObject["direction"].AsArray;
				s.running = running;
				s.walking = walking;
				s.direction = new Vector2(directionVector[0].AsInt,directionVector[1].AsInt);
				Debug.Log(s.running+" "+s.walking+" "+s.direction.x+" "+s.direction.y);
			}

			voiceCommands.Add(name,voiceComs);
			commandAnimations.Add(name,s);
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
