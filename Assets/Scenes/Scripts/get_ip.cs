using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Net;
using TMPro;

public class get_ip : MonoBehaviour
{
    //public Text ip_text;
    public Text ip_text;
    public GameObject ip_text2;
    // Start is called before the first frame update
    void Start()
    {
        //TextMeshPro textmeshPro = GetComponent<TextMeshPro>();

        // textmeshPro.SetText("The first number is {0} and the 2nd is {1:2} and the 3rd is {3:0}.", 4, 6.345f, 3.5f);
        // The text displayed will be:
        // The first number is 4 and the 2nd is 6.35 and the 3rd is 4.

        //ip_text2 = GetComponent<GameObject>();

        string f = new WebClient().DownloadString("https://www.icanhazip.com/");
        //text.text = f;
        Debug.Log("user IP is: " + f);
    }

  

    // Update is called once per frame
    void Update()
    {


        //string f = new WebClient().DownloadString("https://www.icanhazip.com/");
        //text.text = f;

        if (Input.GetKey(KeyCode.Space))
        {
            //text.text = "My text has now changed.";
        }
    }

    public void serverStart()
    {

        ip_text.GetComponent<Text>().text = "TEZT";
        ip_text2.GetComponent<Text>().text = "TEZT";
    }

}
