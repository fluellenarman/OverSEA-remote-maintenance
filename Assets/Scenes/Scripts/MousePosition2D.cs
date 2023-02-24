using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC;
using System.Threading.Tasks;

public class MousePosition2D : MonoBehaviour
{
    [SerializeField] private Camera mainCamera;
    PeerConnection _peerConnection = new PeerConnection();
    //public event PeerConnection.DataChannelAddedDelegate DataChannelAdded;

    private void Start() {
        _peerConnection.InitializeAsync();
    }

    private void Update() {
        if(_peerConnection.Initialized) {
            if (_peerConnection.DataChannels.Count == 0){
                CreateDC();
                _peerConnection.DataChannelAdded += OnDataChannelAdded;
                Debug.Log("The number of data channels: " + _peerConnection.DataChannels.Count);
            }
        }
        else{
            Debug.Log("peer connection not initialized");
        }
        // data1 = PeerConnection.AddDataChannelAsync("name", true, true, System.Threading.CancellationToken.None);
        
        // when mouse click
        if(Input.GetMouseButtonDown(0)){
            // converts the screen position (input.mousePosition) into World position (-10,10)
            Vector3 mouseWorldPosition = mainCamera.ScreenToWorldPoint(Input.mousePosition);
            
            Vector3 mouseRemVidPos = Vector3.zero;

            // set the z-coord to 0
            mouseWorldPosition.z = 0f;

            Debug.Log(mouseWorldPosition);

            // how to get an object to follow the mouse
            // transform.position = mouseWorldPosition;

            // if within the constraints of the remote video screen
            if (mouseWorldPosition.x >= -7.5 && mouseWorldPosition.x <= 4.5 &&
                    mouseWorldPosition.y >= -4.09 && mouseWorldPosition.y <= 4.9){
                //then reconvert to vector3 to a coord where the center of the screen is the remote video
                Debug.Log("Inside remote video screen");

                //conversion equation (+1.5,-0.405)
                mouseRemVidPos.x = mouseWorldPosition.x + 1.5f;
                mouseRemVidPos.y = mouseWorldPosition.y - 0.405f;

                Debug.Log("Remote Video Coords: " + mouseRemVidPos);
                
            }
            else{
                Debug.Log("Outside remote video screen");
            }

        }
    }

    private void OnDataChannelAdded(DataChannel channel)
    {
        Debug.Log("data channel has been added");
        // Logger.Log($"Added data channel '{channel.Label}' (#{channel.ID}).");
        // ThreadHelper.RunOnMainThread(() =>
        // {
        //     var chat = new ChatChannelModel(channel);
        //     ChatChannels.Add(chat);
        // });
    }

    public async Task CreateDC()
    {
    
        Debug.Log("Beginning of CreateDC");
        await _peerConnection.AddDataChannelAsync("name", true, true, System.Threading.CancellationToken.None);
        Debug.Log("The number of data channels: " + _peerConnection.DataChannels.Count);
        Debug.Log("End of CreateDC");
        // // Send data
        // {
        //     var c2 = new ManualResetEventSlim(false);
        //     string sentText = "Some sample text";
        //     byte[] msg = Encoding.UTF8.GetBytes(sentText);
        //     data2.MessageReceived += (byte[] _msg) =>
        //     {
        //         var receivedText = Encoding.UTF8.GetString(_msg);
        //         Assert.AreEqual(sentText, receivedText);
        //         c2.Set();
        //     };
        //     data1.SendMessage(msg);
        //     Assert.True(c2.Wait(TimeSpan.FromSeconds(60.0)));
        // }
    }
}
