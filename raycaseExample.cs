using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC;
//using Microsoft.MixedReality.WebRTC.Unity;
using System.Text;



public class raycaseExample : MonoBehaviour
{
    [SerializeField] private Camera mainCamera;
    private PeerConnection peerConnection;
    private DataChannel dataChannel;
    // public event PeerConnection.DataChannelAddedDelegate DataChannelAdded;
    //public event PeerConnection.DataChannelAddedDelegate DataChannelAdded;
    public Microsoft.MixedReality.WebRTC.Unity.PeerConnection pC;

    private DataChannel data1; // dataDummy is data1

    private bool IsData2Open = false;
    private bool IsData1Created = false;

    public void CreateChannels()
    {
        pC.Peer.DataChannelAdded += this.OnDataChannelAdded;
        pC.Peer.AddDataChannelAsync(40, "channelHolo", true, true).Wait();
    }

    public void CreateChannelWhileRunningConnection()
    {
        pC.Peer.AddDataChannelAsync(42, "dataChannel1", true, true).Wait();
    }

    private void OnDataChannelAdded(DataChannel channel)
    {
        Debug.Log(channel.Label + " is being added...");
        switch (channel.Label)
        {
            case "channelHolo":
                data1 = channel;
                data1.StateChanged += this.OnStateChangedHolo;
                break;
        }
    }

    private void OnStateChangedHolo()
    {
        Debug.Log("data1: " + data1.State);

        if (data1.State + "" == "Open")
        {
            data1.SendMessage(Encoding.ASCII.GetBytes("Hello from Data1"));
            Debug.Log("Message sent from Data1");
        }
    }


    // ---------------------------------------------------------------------
    // ---------------------------------------------------------------------
    // ---------------------------------------------------------------------
    // ---------------------------------------------------------------------


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Raycast Example1");
        //CreateChannels();
        //pC.Peer.DataChannelAdded += this.OnDataChannelAdded;
        //pC.Peer.AddDataChannelAsync(40, "dummy", true, true).Wait();
        //peerConnection.DataChannelAdded += OnDataChannelAdded;
        //await peerConnection.AddDataChannelAsync(1234, "MyDataChannel", false, false);
    }



    public GameObject prefab;
    // Update is called once per frame
    void Update()
    {
        // Receiving Coordinates for raycasting
        if (data1 != null)
        {
            if (data1.State == DataChannel.ChannelState.Open)
            {
                data1.MessageReceived += (byte[] message) =>
                {
                    // Receive message 
                    // FORMAT RECEIVED IS -> x,y,z, | typeMarker 
                    string text = System.Text.Encoding.UTF8.GetString(message);
                    Debug.Log("Message Received " + text);

                    // Convert text into coordinates
                    // TODO make a new text to split at '|'
                    string[] sArray = text.Split(',');
                    Vector3 result = new Vector3(
                      float.Parse(sArray[0]),
                      float.Parse(sArray[1]),
                      0
                     );

                    // Raycasts
                    Debug.Log(result);
                    Ray ray2 = Camera.main.ScreenPointToRay(Camera.main.WorldToScreenPoint(result));
                    if (Physics.Raycast(ray2, out RaycastHit hit2))
                    {
                        Vector3 hitPosition = hit2.point;
                        Debug.Log("HIT");
                        Debug.Log(hit2.point);
                        Instantiate(prefab, hit2.point, Quaternion.identity);
                    }
                };
            }
        }


        if (Input.GetMouseButtonDown(0))
        {
            Debug.Log("Mouse Clicked");
            Debug.Log(Input.mousePosition);
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                Vector3 hitPosition = hit.point;
                Debug.Log("HIT");
                Debug.Log(hit.point);
                Instantiate(prefab, hit.point, Quaternion.identity);
            }

            if (IsData1Created == false)
            {
                CreateChannels();
                IsData1Created = true;
            }

            // ON CLICK DATA CHANNELS 
            // FORMAT RECEIVED IS -> x,y,z, | typeMarker 
            // 
            Debug.Log("Datachannel is " + data1.State);

            if (data1 != null)
            {
                Debug.Log("datachannel is not null");
                if (data1.State == DataChannel.ChannelState.Open)
                {
                    Debug.Log("Sending Message ...;");
                    data1.SendMessage(Encoding.ASCII.GetBytes("Testing!"));
                    Debug.Log("MESSAGE SENT FROM DATA1");
                }
                //byte[] message = System.Text.Encoding.UTF8.GetBytes("TESTING");
                //dataChannel.SendMessage(message);
                //Debug.Log("MESSAGE SENT");
            }
            else
            {
                Debug.Log("dataChannel1 is null - cannot send message");
            }

        }
    }






}
