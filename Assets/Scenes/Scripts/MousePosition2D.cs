using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC;
using System.Threading.Tasks;
using System.Text;

public class MousePosition2D : MonoBehaviour
{
    [SerializeField] private Camera mainCamera;
    [SerializeField] private Microsoft.MixedReality.WebRTC.Unity.PeerConnection _peerConnection;
    [SerializeField] private MarkerToggle markerToggle;
    //public event PeerConnection.DataChannelAddedDelegate DataChannelAdded;

    public DataChannel data1;
    private DataChannel data2;
    public bool IsData1Created = false;
    public bool pcInit = false;

    public void CreateChannels()
    {
        _peerConnection.Peer.DataChannelAdded += this.OnDataChannelAdded;
        _peerConnection.Peer.AddDataChannelAsync(40, "dummy", false, false).Wait();
    }

    private void OnDataChannelAdded(DataChannel channel)
    {
        //Debug.Log("Hello " + channel.Label);
        switch (channel.Label)
        {
            case "dummy":
                data1 = channel;
                data1.StateChanged += this.OnStateChangedDummy;
                break;
        }
    }

    private void OnStateChangedDummy()
    {
        Debug.Log("data1: " + data1.State);

        if (data1.State + "" == "Open")
        {
            //data1.SendMessage(Encoding.ASCII.GetBytes("Hello over there... from Dummy"));
            //Debug.Log("Message sended... from Dummy");
        }
    }

    private void Start() {
        // adds a listener that listens for when _peerConnection initializes
        // when it does hear it, then it calls function OnInitialized1
        _peerConnection.OnInitialized.AddListener(OnInitialized1);
    }

    private void OnInitialized1() {
        pcInit = true; 

        // check if peerconnection is init, if so, init the data channels
        if( IsData1Created == false) {
            CreateChannels();
            IsData1Created = true;
            Debug.Log("Data channel has been created");
        }
    }

    private void Update() {
        
        if (data1 != null)
        {
            //Debug.Log("data1 is NOT null");
            if (data1.State == DataChannel.ChannelState.Open)
            {
                //Debug.Log("data1 is open");
                //Debug.Log("the state of data1 is: " + data1.State);

                data1.MessageReceived += (byte[] message) =>
                {
                    string text = System.Text.Encoding.UTF8.GetString(message);
                    //Debug.Log("MESSAGE RECEIVED: " + text);
                };
            }
            else{
                //Debug.Log("data1 is closed");
            }
        }
        else{
            //Debug.Log("data1 is NULL");
        }

        // when mouse click
        if(Input.GetMouseButtonDown(0)){

            // on mouse click and in video, send coordinate to hololens
            // FORMAT -> x,y,z | typeMarker
            Vector3 mouseWorldPosition = mainCamera.ScreenToWorldPoint(Input.mousePosition);
            
            Vector3 mouseRemVidPos = Vector3.zero;

            // set the z-coord to 0
            mouseWorldPosition.z = 0f;

            //Debug.Log(mouseWorldPosition);

            // how to get an object to follow the mouse
            // transform.position = mouseWorldPosition;

            // if within the constraints of the remote video screen
            if (mouseWorldPosition.x >= -7.5 && mouseWorldPosition.x <= 4.5 &&
                    mouseWorldPosition.y >= -4.09 && mouseWorldPosition.y <= 4.9){
                //then reconvert to vector3 to a coord where the center of the screen is the remote video
                //Debug.Log("Inside remote video screen");

                //conversion equation (+1.5,-0.405)
                mouseRemVidPos.x = mouseWorldPosition.x + 1.5f;
                mouseRemVidPos.y = mouseWorldPosition.y - 0.405f;

                //Debug.Log("Remote Video Coords: " + mouseRemVidPos);

                // if data channel is open and can send information to the hololens
                if ( data1.State == DataChannel.ChannelState.Open){
                    // adds coords to text
                    string text = string.Format("{0:N3}", mouseRemVidPos.x) + "," + string.Format("{0:N3}", mouseRemVidPos.y) + "," + string.Format("{0:N3}", mouseRemVidPos.z); 
                    
                    // add what type of marker to text
                    string typeMarker = " | " + markerToggle.getCurrentToggle.name[markerToggle.getCurrentToggle.name.Length - 1];
                    text += typeMarker;

                    data1.SendMessage(Encoding.ASCII.GetBytes(text));
                    Debug.Log("Message sent: " + text );
                }
                
            }
            else{
                //Debug.Log("Outside remote video screen");
            }

        }
    }
}
