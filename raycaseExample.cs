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
        pC.OnInitialized.AddListener(OnInitialized1);
        //if (IsData1Created == false)
        //{
        //    CreateChannels();
        //    IsData1Created = true;
        //}
        //CreateChannels();
        //pC.Peer.DataChannelAdded += this.OnDataChannelAdded;
        //pC.Peer.AddDataChannelAsync(40, "dummy", true, true).Wait();
        //peerConnection.DataChannelAdded += OnDataChannelAdded;
        //await peerConnection.AddDataChannelAsync(1234, "MyDataChannel", false, false);
    }

    private void OnInitialized1()
    {
        if (IsData1Created == false)
        {
            CreateChannels();
            IsData1Created = true;
            Debug.Log("Data channel initialized on start");
        }
    }


    public GameObject prefab; // default marker
    public GameObject prefab1; // Arrow
    public GameObject prefab2; // Clockwise or clockwise
    private bool receivedData = false;
    private Vector3 result;
    private string text = "";
    public bool isMarkerPlaced = false;
    public float markerTimer = 2000.00f;
    public float dataChannelTimer = 5.00f;
    public int markerType = 0;
    // Update is called once per frame
    void Update()
    {

        if (markerTimer > 0 && isMarkerPlaced == true)
        {
            markerTimer -= Time.deltaTime;
        } else
        {
            isMarkerPlaced = false;
            markerTimer = 5;
        }

        //if (dataChannelTimer > 0)
        //{
        //    dataChannelTimer -= Time.deltaTime;
        //} else
        //{
        //    if (IsData1Created == false)
        //    {
        //        CreateChannels();
        //        IsData1Created = true;
        //    }
        //}

        // Receiving Coordinates for raycasting
        if (data1 != null)
        {
            if (data1.State == DataChannel.ChannelState.Open && isMarkerPlaced == false)
            {
                isMarkerPlaced = true;
                // FOr receiving coordinates from pc client--------------------------------------------------------------------------------------------------
                data1.MessageReceived += (byte[] message) =>
                {
                    // Receive message 
                    // FORMAT RECEIVED IS -> x,y,z, | typeMarker 
                    // [x, y, z | id]
                    text = System.Text.Encoding.UTF8.GetString(message);
                    Debug.Log("Message Received " + text);

                    // MESSAGE PARSING -------
                    string[] textList = text.Split('|');
                    markerType = int.Parse(textList[1]);
                    // MESSAGE PARSING --------

                    // Convert text into coordinates
                    string[] sArray = textList[0].Split(',');
                    float resX = (float.Parse(sArray[0]) + 6f) * (Screen.width / 12f);
                    float resY = (float.Parse(sArray[1]) + 4.495f) * (Screen.height / 8.99f);
                     result = new Vector3(
                      resX,
                      resY,
                      //440,
                      //196,
                      0
                     );

                    // Raycasts
                    Debug.Log(result);
                    receivedData = true;
                };
                // --------------------------------------------------------------------------------------------------
            }
        }


        if (receivedData == true)
        {
            receivedData = false;
            Debug.Log(result);
            Ray ray = Camera.main.ScreenPointToRay(result);
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                Vector3 hitPosition = hit.point;
                Debug.Log("HIT: " + hit.point);
                Quaternion roundArrowFace2 = Quaternion.LookRotation(hit.normal);
                if (markerType == 0)
                {
                    Debug.Log("Placing Default Marker");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab, hitPosition, Quaternion.Euler(0f, 0f, 180f));
                }
                else if (markerType == 1)
                {
                    Debug.Log("Placing RIGHT Marker");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab1, hitPosition, Quaternion.Euler(0f, 0f, 180f));
                }
                else if (markerType == 2)
                {
                    Debug.Log("Placing DOWN Marker");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab1, hitPosition, Quaternion.Euler(0f, 0f, 90f));
                }
                else if (markerType == 3)
                {
                    Debug.Log("Placing LEFT Marker");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab1, hitPosition, Quaternion.Euler(0f, 0f, 90f));
                }
                else if (markerType == 4)
                {
                    Debug.Log("Placing UP Marker");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab1, hitPosition, Quaternion.Euler(0f, 0f, 270f));
                }
                else if (markerType == 5)
                {
                    Debug.Log("Placing CLOCKWISE marker");
                    var rotation2 = roundArrowFace2;
                    rotation2 *= Quaternion.Euler(90, 0, 0);
                    Instantiate(prefab2, hitPosition, rotation2);
                }
                else if (markerType == 6)
                {
                    Debug.Log("Placing COUNTER CLOCKWISE marker");
                    var rotation2 = roundArrowFace2;
                    rotation2 *= Quaternion.Euler(270, 0, 0);
                    Instantiate(prefab2, hitPosition, rotation2);
                }
                else
                {
                    Debug.Log("IN ELSE");
                    hitPosition[1] = hitPosition[1] + .10f;
                    Instantiate(prefab, hitPosition, Quaternion.Euler(0f, 0f, 180f));
                }
                //var rotation2 = roundArrowFace2;
                //rotation2 *= Quaternion.Euler(90, 0, 0);
                //Debug.Log("HIT: " + hitPosition[0]);
                //Debug.Log("HIT: " + hitPosition[1]);
                //hitPosition[1] = hitPosition[1] + .10f;
                //Instantiate(prefab2, hitPosition, rotation2);
                //Instantiate(prefab1, hitPosition, Quaternion.Euler(0f, 0f, 180f));
            }
        }


        if (Input.GetMouseButtonDown(0))
        {
            // FOR TESTING RAYCASTED OBJECTS---------------------FOR TESTING RAYCASTED OBJECTS------------ FOR TESTING RAYCASTED OBJECTS
            Ray testRay = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(testRay, out RaycastHit testHit))
            {
                Debug.Log("Normal is " + testHit.normal);
                Vector3 testHitPosition = testHit.point;
                //testHitPosition[1] = testHitPosition[1] - .30f;
                Quaternion roundArrowFace = Quaternion.LookRotation(testHit.normal);
                var rotation = roundArrowFace;
                rotation *= Quaternion.Euler(90, 0, 0);
                //float temp = roundArrowFace[0];
                //Debug.Log(roundArrowFace[0]);

                //Instantiate(prefab2, testHitPosition, rotation);
                Instantiate(prefab1, testHitPosition, Quaternion.Euler(0f, 0f, 0f));
                Debug.DrawLine(transform.position, Camera.main.ScreenToWorldPoint(Input.mousePosition), Color.red, 10f, true);
            }
            // -------------------------------------------------------------------------------------------

            if (IsData1Created == false)
            {
                CreateChannels();
                IsData1Created = true;
            }

            Debug.Log("Datachannel is " + data1.State);
            Debug.Log("Screen Width : " + Screen.width + " Screen Height : " + Screen.height);
            Debug.Log(Input.mousePosition);
            if (data1 != null)
            {
                /*Debug.Log("datachannel is not null");*/
                if (data1.State == DataChannel.ChannelState.Open)
                {
                    /*Debug.Log("Sending Message ...;");*/
                    data1.SendMessage(Encoding.ASCII.GetBytes("Testing!"));
                    /*Debug.Log("MESSAGE SENT FROM DATA1");*/
                }
            }
            else
            {
                Debug.Log("dataChannel1 is null - cannot send message");
            }

        }
    }






}
