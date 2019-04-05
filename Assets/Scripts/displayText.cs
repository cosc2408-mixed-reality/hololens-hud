using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class displayText : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GameObject go = new GameObject("Text");
        go.transform.SetParent(this.transform);

        Text text = go.AddComponent<Text>();
        text.text = "Hello"; //this is just an example but will be more useful info

        Font ArialFont = (Font)Resources.GetBuiltinResource(typeof(Font), "Arial.ttf");
        text.font = ArialFont;
        text.material = ArialFont.material;
        text.fontSize = 30;

        text.transform.position = new Vector3(700, 530, 0); //this is some weird hard coded value.. should be a better way
    }

    // Update is called once per frame
    void Update()
    {
         
    }
}
