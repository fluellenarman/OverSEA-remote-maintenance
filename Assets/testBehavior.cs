using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class testBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    private Camera cam = null;
    void Start()
    {
        cam = Camera.main;
    }
    public GameObject objectToSpawn;
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = cam.ScreenPointToRay(Mouse.current.position.ReadValue());
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Instantiate(
                    objectToSpawn, 
                    new Vector3(hit.point.x, hit.point.y + (float).2, hit.point.z),
                    Quaternion.Euler(new Vector3(180, 0, 0)));
            }

            //// get the mouse click position, in world units
            //var mouseposition = camera.main.screentoworldpoint(
            //    input.mouseposition
            //);
            //// use 'instantiate' to clone our prefab; this 3-arg version 
            //// lets us set the position and rotation for the new object

            //var newsquare = instantiate(
            //    objecttospawn,
            //    new vector3(mouseposition.x, mouseposition.y, 0),
            //    quaternion.identity
            //);
            //debug.log("object spawned");
        }
    }
}
