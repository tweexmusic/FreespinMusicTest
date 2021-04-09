using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSMusic : MonoBehaviour
{
    private void PlayEvent(string eventPath)
    {
        AkSoundEngine.PostEvent(eventPath, gameObject);
    }

    private void ChangeParameterValue(string parameterName, float parameterValue)
    {
        AkSoundEngine.SetRTPCValue(parameterName, parameterValue, gameObject);
    }

    // Start is called before the first frame update
    void Start()
    {
        //PlayEvent("freespin_intro_start");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            PlayEvent("freespin_intro_start");
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            PlayEvent("freespin_music_start");
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            PlayEvent("freespin_end");
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            //PlayEvent("freespin_ringup_start");
            ChangeParameterValue("FSRingupVolume", 100);
        }

        if (Input.GetKeyDown(KeyCode.T))
        {
            PlayEvent("freespin_ringup_stop");
        }
    }
}
