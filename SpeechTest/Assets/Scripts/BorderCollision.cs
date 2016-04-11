using UnityEngine;
using System.Collections;
/**
 * Controls the border collision of a tagged object
 **/
public class BorderCollision : MonoBehaviour {
	//Variables for calculating the borders and the distance to the camera.  Buffer is for when you want the object to disappear either +buffer or -buffer
	public float dist, leftBorder, rightBorder, buffer=0f,topBorder,bottomBorder;
	private string lastResults2="";
	private GUIStyle fontStyle = new GUIStyle();
	public bool enabled = false;
	public string taggedObject = "";

	// Use this for initialization
	void Start () {
		//Sets up the variables
		dist = (transform.position - (Camera.allCameras[1]).transform.position).z; 
		
		leftBorder = (Camera.allCameras[1]).ViewportToWorldPoint(new Vector3(0, 0, dist)).x; 
		rightBorder = (Camera.allCameras[1]).ViewportToWorldPoint(new Vector3(1, 0, dist)).x;
		
		topBorder = (Camera.allCameras[1]).ViewportToWorldPoint(new Vector3(1, 1, dist)).y;
		bottomBorder = (Camera.allCameras[1]).ViewportToWorldPoint(new Vector3(0, 0, dist)).y;

		fontStyle.normal.textColor = Color.white;
	}
	
	// Update is called once per frame
	void Update () {
		if(enabled){
			//Horizontal
			if (GameObject.FindGameObjectWithTag(taggedObject).transform.position.x < leftBorder-buffer)
			{ // ship is past world-space view / off screen
				lastResults2 = "Too far left";
				GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(rightBorder + buffer, GameObject.FindGameObjectWithTag(taggedObject).transform.position.y, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
			}
			if ( GameObject.FindGameObjectWithTag(taggedObject).transform.position.x > rightBorder + buffer)
			{
				lastResults2 = "Too far right";
				GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(leftBorder - buffer, GameObject.FindGameObjectWithTag(taggedObject).transform.position.y, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
			}
			
			//Vertical
			if (GameObject.FindGameObjectWithTag(taggedObject).transform.position.y < bottomBorder + buffer)
			{ 
				//ship is past world-space view / off screen
				lastResults2 = "Too far DOWN";
				GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(GameObject.FindGameObjectWithTag(taggedObject).transform.position.x,topBorder - buffer, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
			}
			
			
			if (GameObject.FindGameObjectWithTag(taggedObject).transform.position.y > topBorder - buffer)
			{ 
				//ship is past world-space view / off screen
				lastResults2 = "Too far DOWN";
				GameObject.FindGameObjectWithTag(taggedObject).transform.position = new Vector3(GameObject.FindGameObjectWithTag(taggedObject).transform.position.x,bottomBorder + buffer, GameObject.FindGameObjectWithTag(taggedObject).transform.position.z);  // move ship to opposite side
			}
		}
	}
	void OnGUI()
	{
		GUI.Label(new Rect(0, 30, Screen.width, Screen.height), "Collision:" + lastResults2, fontStyle);
	}
}
