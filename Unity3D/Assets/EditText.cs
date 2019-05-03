using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace RosSharp.RosBridgeClient
{
    public class EditText : MonoBehaviour
    {
        Text ourComponent;           // Our refference to text component
        sbyte charge;

        string connection;

        void Start()
        {
            // Get component Text from that gameObject
            ourComponent = this.GetComponentInChildren<Text>();

         
            // Assign new string to "Text" field in that component

        }

        // Update is called once per frame
        void Update()
        {
            charge = this.GetComponentInParent<BatterySubscriber>().state;

            connection = this.GetComponentInParent<RosConnector>().hasConnected.ToString();

            ourComponent.text = connection + " | " + charge.ToString();
        }
    }
}