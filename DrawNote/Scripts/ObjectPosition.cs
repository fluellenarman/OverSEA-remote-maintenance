using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObjectPosition : MonoBehaviour
{
    public void OnTriggerEnter(GameObject move)
    {
      gameObject.transform.position = new Vector3(move.transform.position.x + .25f*MathF.Cos(move.transform.eulerAngles.y * MathF.PI/180), move.transform.position.y, move.transform.position.z - .25f*MathF.Sin(move.transform.eulerAngles.y * MathF.PI/180));
      gameObject.transform.rotation = move.transform.rotation;    
    }
}
