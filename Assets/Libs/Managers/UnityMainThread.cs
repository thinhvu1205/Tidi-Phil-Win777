using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class UnityMainThread : MonoBehaviour
{
    public static UnityMainThread instance;
    private Queue<Action> jobs = new Queue<Action>();
    private const float TIME_PING_MAX = 4f;
    private float _TimePing = 0;
    public bool isHasNet = true;
    void Awake()
    {
        instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        while (jobs.Count > 0)
        {
            jobs.Dequeue().Invoke();
        }
    }

    public void LateUpdate()
    {
        bool isConnected = WebSocketManager.getInstance().connectionStatus == Globals.ConnectionStatus.CONNECTED;
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            if (isConnected || !WebSocketManager.getInstance().IsAlive())
            {
                isHasNet = false;
                Globals.Logging.Log("Error. Check internet connection!");
                WebSocketManager.getInstance().connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
                UIManager.instance.showLoginScreen(false);
                return;
            }
            else if (isHasNet)
            {
                Globals.Logging.Log("vao day roi");
                isHasNet = false;
                StartCoroutine(_DelayShowMessageBox());
                return;
            }
        }
        else
        {
            if (!isHasNet && !LoadConfig.instance.isLoadedConfig)
            {
                Globals.Config.isErrorNet = false;
                LoadConfig.instance.getConfigInfo();
            }
            isHasNet = true;
        }
        _TimePing += Time.fixedDeltaTime;
        if (_TimePing >= TIME_PING_MAX)
        {
            _TimePing = 0;
            // Debug.Log("-=-=-= send ping");
            if (isConnected) SocketSend.sendPing();
        }
    }

    internal void AddJob(Action newJob)
    {
        jobs.Enqueue(newJob);
    }
    internal void forceClearJob()
    {
        while (jobs.Count > 0)
        {
            jobs.Dequeue();
        }
    }
    private IEnumerator _DelayShowMessageBox()
    {
        yield return new WaitForSeconds(1);
        if (Globals.Config.isErrorNet) yield break;
        Globals.Config.isErrorNet = true;
        UIManager.instance.showMessageBox(Globals.Config.getTextConfig("err_network"));
        UIManager.instance.hideWatting();
    }
}
