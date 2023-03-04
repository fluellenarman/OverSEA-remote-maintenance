using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class MarkerToggle : MonoBehaviour
{
    private ToggleGroup toggleGroupInstance;
    private string currToggle;

    // public getter that returns a toggle
    public Toggle getCurrentToggle {
        get { return toggleGroupInstance.ActiveToggles().FirstOrDefault(); }
    }

    // Start is called before the first frame update
    void Start()
    {
        toggleGroupInstance = GetComponent<ToggleGroup>();
        
        Debug.Log("First Selection: " + getCurrentToggle.name);
        currToggle = getCurrentToggle.name;
    }

    // Update is called once per frame
    void Update()
    {
        // if toggle changes, then print it out
        if (currToggle != getCurrentToggle.name) {
            Debug.Log("You selected: " + getCurrentToggle.name);
            currToggle = getCurrentToggle.name;
        }
        
    }
}
