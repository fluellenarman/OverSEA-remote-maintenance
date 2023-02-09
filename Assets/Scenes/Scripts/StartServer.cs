using System.Collections;  
using System.Collections.Generic;  
using UnityEngine;  
using UnityEngine.SceneManagement;  

public class StartServer: MonoBehaviour {  
    public void Switch_InCallPage() {  
        SceneManager.LoadScene("InCall_Page");  
    }  
    public void Switch_Menu() {  
        SceneManager.LoadScene("menu");  
    }  
}   