using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.WebRTC;
using UnityEngine;
using UnityEngine.UI;

public class BottomPanelUI : MonoBehaviour
{
    public Text connectionStatus;
    private bool loadingConnect = false;
    private bool connectSuccess = false;

    public MousePosition2D MousePosition2D;
    private bool IsData1Created = false;
    private DataChannel data1;
    private bool pcInit = false;

    public NodeDssSignalerUI NodeDssSignalerUI;

    // Start is called before the first frame update
    void Start()
    {
        connectionStatus.text = "Waiting for another user";
    }

    // Update is called once per frame
    void Update()
    {
        if (!loadingConnect && !connectSuccess) {
            // if not connected to user, change the text to load
            // and then attempt connecting
            IsData1Created = MousePosition2D.IsData1Created;
            data1 = MousePosition2D.data1;
            pcInit = MousePosition2D.pcInit;
            StartCoroutine( LoadingConnection() );
        }
    }

    
    private IEnumerator LoadingConnection()
    {
        loadingConnect = true;
        for (int i = 0; i < 4; i++){
            // process pre-yield
            yield return new WaitForSeconds( .4f );
            connectionStatus.text += ".";
            // process post-yield

            if (i == 0) {
                // after every four loops, attempt reconnection
                connectionStatus.text = "Waiting for another user";
                if (pcInit && IsData1Created && data1 != null) {
                     if (data1.State == DataChannel.ChannelState.Open) {
                        // we know that a connection has been made when a datachannel is open
                        // stop attempting connection
                        Debug.Log("Connection Success");
                        connectSuccess = true;
                     }
                     else {
                        // retry connection
                        NodeDssSignalerUI.StartConnection();
                        Debug.Log("Reattempting Connection");
                     }
                }
            }
        }
        
        loadingConnect = false;
    }

}
