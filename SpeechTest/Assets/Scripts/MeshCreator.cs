using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MeshCreator : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Mesh mesh = new Mesh ();
		MeshFilter mf = GetComponent<MeshFilter> ();
		mf.mesh = mesh;

		//Vertices
		List<Vector3> verticesInternal = new List<Vector3>();
		List<Vector3> verticesExternal = new List<Vector3> ();
		float subdivisions = .01f;
		//Internal circle
		int radius = 1;

		int points = Mathf.FloorToInt( (2 * radius) / subdivisions);

		for (int i =0; i<=points; i++) {
			verticesInternal.Add(new Vector3(-radius+i*subdivisions,getY(radius,-radius+i*subdivisions),0));
		}
		//Add lower level circle
		for (int i =verticesInternal.Count-1; i>-1; i--) {
			verticesInternal.Add(new Vector3(verticesInternal[i].x,verticesInternal[i].y*-1f,verticesInternal[i].z));
		}

		//External circle
		int radius2 = 5;
		int scale = Mathf.CeilToInt (radius2 / radius);
		subdivisions = subdivisions * scale;
		int points2 = Mathf.FloorToInt( (2 * radius2) / subdivisions);
		if (points2 != points)
			throw new UnityException ("FML");

		for (int i =0; i<=points; i++) {
			verticesExternal.Add(new Vector3(-radius2+i*subdivisions,getY(radius2,-radius2+i*subdivisions),0));
		}
		//Add lower level circle
		for (int i =verticesExternal.Count-1; i>-1; i--) {
			verticesExternal.Add((new Vector3(verticesExternal[i].x,verticesExternal[i].y*-1f,verticesExternal[i].z)));
		}
		//Mix the vertices for easier access

		List<Vector3> vertices = new List<Vector3> ();
		for (int i=0; i<verticesExternal.Count; i++) {
			vertices.Add (verticesExternal[i]);//Even
			vertices.Add(verticesInternal[i]);//Odd
		}
		Debug.Log ("Size of vertices" + vertices.Count);
		Vector3[] verticesArray = vertices.ToArray ();

		//Triangles
		int v1 = 0, v2 = 1, v3 = 2;
		List<int> triangleList = new List<int>();

		for (int i =0; i<vertices.Count; i++) {
			triangleList.Add(v1);
			triangleList.Add(v2);
			triangleList.Add(v3);
			if(v3==vertices.Count-1){
				Debug.Log("Breaking because of vertex");
				break;              
            }
			if(i%2!=0)
			{
				v2+=2;
			}
			else
			{
				v1+=2;
			}
			v3+=1;
		}
		int[] triangles = triangleList.ToArray ();
		//Normals
		Vector3[] normals = new Vector3[vertices.Count];
		for (int i =0; i<vertices.Count; i++) {
			normals[i] = Vector3.forward * -1;
		}
		Debug.Log ("Printing");
		Debug.Log (triangleList.ToString ());
		Debug.Log("Done");
		//UVs
		Vector2[] uvs = new Vector2[vertices.Count];
		int multiplier = 0;
		for(int i = 0 ; i<vertices.Count;i++)
		{
			float x = (multiplier * 1.0f )/ (vertices.Count/2.0f);
			Debug.Log ((multiplier * 1.0f ));
			Debug.Log((vertices.Count/2.0f));
			Debug.Log(x);
			//Even number
			if(i%2==0)
			{
				Debug.Log ("Even");
				uvs[i] = new Vector2(x,1f);
			}
			else{
				Debug.Log ("Odd");
				uvs[i]= new Vector2(x,0f);
				multiplier+=1;
			}
		}
//		string[] uvsstringlist = new string[uvs.Length];
//		for (int i =0; i<uvs.Length; i++)
//			uvsstringlist [i] = uvs[i].ToString ();
//
//
//		System.IO.File.WriteAllLines(@"/Users/pedrocolon/Desktop/uvs.txt", uvsstringlist);
//
//		string[] triangleStringList = new string[triangles.Length];
//		for (int i =0; i<triangles.Length; i++)
//			triangleStringList [i] = triangles[i].ToString ();
//		
//		
//		System.IO.File.WriteAllLines(@"/Users/pedrocolon/Desktop/triangles.txt", triangleStringList);
//
//		System.IO.StreamWriter file = new System.IO.StreamWriter("/Users/pedrocolon/Desktop/vertices.txt");
//		foreach(Vector3 v in vertices)
//			file.WriteLine(v.ToString());
//		
//		file.Close();

		mesh.vertices = verticesArray;
		mesh.triangles = triangles;
		mesh.normals = normals;
		mesh.uv = uvs;

	}
	float getX(int radius, float y){
		return Mathf.Sqrt (Mathf.Pow (radius, 2) - Mathf.Pow (y, 2));
	}
	float getY(int radius, float x){
		return Mathf.Sqrt (Mathf.Pow (radius, 2) - Mathf.Pow (x, 2));
	}
	float getYSin(float angle){
		return Mathf.Sin(angle);
	}


}
