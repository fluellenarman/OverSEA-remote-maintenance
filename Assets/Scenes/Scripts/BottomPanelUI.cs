using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.WebRTC;
using UnityEngine;
using UnityEngine.UI;

public class BottomPanelUI : MonoBehaviour
{
    public Text connectionStatus;
    public bool loadingConnect = false;
    public bool startedConnectAttempts = false;
    public bool remotePeerConnected = false;

    public NodeDssSignalerUI NodeDssSignalerUI;

    // Start is called before the first frame update
    void Start()
    {
        connectionStatus.text = "Waiting for another user";
    }

    // Update is called once per frame
    void Update()
    {
        if (!loadingConnect && !remotePeerConnected) {
            // if not connected to user, change the text to load
            // and then attempt connecting
            StartCoroutine( LoadingConnection() );
        }

    }

    private IEnumerator LoadingConnection()
    {
        loadingConnect = true;
        for (int i = 0; i < 4; i++){
            // process pre-yield
            if (!remotePeerConnected){
                yield return new WaitForSeconds( .4f );
                connectionStatus.text += ".";
                
                // process post-yield
                if (i == 0) {
                    connectionStatus.text = "Waiting for another user";
                    if(!startedConnectAttempts){
                        // retry connection
                        startedConnectAttempts = true;
                        NodeDssSignalerUI.StartConnection();
                        Debug.Log("Start Connection");
                    }
                }
            }
            else {
                // we know that a connection has been made when a datachannel is open
                // stop attempting connection
                Debug.Log("Connection Success");
                connectionStatus.text = "Connection Successful";
            }
        }
        loadingConnect = false;
    }

}
