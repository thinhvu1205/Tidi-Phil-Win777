using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using Globals;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Networking;
using WebSocketSharp;

public class WebSocketManager : MonoBehaviour
{
    Queue<Action> jobsResend = new Queue<Action>();
    [HideInInspector] public Globals.ConnectionStatus connectionStatus = Globals.ConnectionStatus.NONE;
    WebSocket ws = null;
    Action _OnConnectCb;
    static WebSocketManager instance = null;

    public WebSocketManager()
    {
    }

    public static WebSocketManager getInstance()
    {
        return instance;
    }

    public void Connect(Action callback)
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            if (Globals.Config.isErrorNet) return;
            Globals.Config.isErrorNet = true;
            UIManager.instance.showMessageBox(Globals.Config.getTextConfig("err_network"));
            UIManager.instance.hideWatting();
            return;
        }
        _OnConnectCb = callback;
        Globals.Config.isErrorNet = false;
        stop();
        jobsResend.Clear();
        //Globals.Config.isSvTest = true;
        //Globals.Config.curServerIp = "app.test.topbangkokclub.com";
        //Globals.Config.curServerIp = "app1.jakartagames.net";
        Globals.Config.curServerIp = "app1.davaogames.com";
        // Globals.Config.curServerIp = "test.app.1707casino.com";
        //Globals.Config.curServerIp = "app-002.ngwcasino.com";
        Debug.Log(" Globals.Config.curServerI=" + Globals.Config.curServerIp);
        Debug.Log(" Globals.Config.PORT=" + Globals.Config.PORT);
        ws = new WebSocket("wss://" + Globals.Config.curServerIp);
        //ws = new WebSocket("ws://" + Globals.Config.curServerIp + ":80" );
        Globals.Logging.Log("IP CONNECT:" + Globals.Config.curServerIp);
        connectionStatus = Globals.ConnectionStatus.CONNECTING;
        ws.ConnectAsync();
        //ws.Connect();

        ws.EmitOnPing = true;
        ws.WaitTime = TimeSpan.FromSeconds(10); ;

        ws.OnError += (sender, e) => _HandleOnErrorWebSocket();
        ws.OnClose += (sender, e) => _HandleOnCloseWebSocket();
        ws.OnOpen += (sender, e) => _HandleOnOpenWebSocket();
        ws.OnMessage += (sender, e) => _HandleOnMessageWebSocket(e.Data);
    }
    private void _HandleOnErrorWebSocket()
    {
        if (connectionStatus == Globals.ConnectionStatus.DISCONNECTED) return;
        connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
        Globals.Logging.Log("OnError ");
        UnityMainThread.instance.AddJob(() =>
        {
            UIManager.instance.showLoginScreen(false);
        });
    }
    private void _HandleOnCloseWebSocket()
    {
        if (connectionStatus == Globals.ConnectionStatus.DISCONNECTED) return;
        connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
        Globals.Logging.Log("OnClose ");
        UnityMainThread.instance.AddJob(() =>
        {
            UIManager.instance.showLoginScreen(false);
        });
    }
    private void _HandleOnOpenWebSocket()
    {
        connectionStatus = Globals.ConnectionStatus.CONNECTED;
        _OnConnectCb?.Invoke();
        Globals.Logging.Log("OnOpen ");
        while (jobsResend.Count > 0)
            jobsResend.Dequeue().Invoke();
    }
    private void _HandleOnMessageWebSocket(string data)
    {
        UnityMainThread.instance.AddJob(() =>
            {
                UIManager.instance.hideWatting();
                JObject objData = JObject.Parse(data);
                int cmdId = (int)objData["classId"];
                switch (cmdId)
                {
                    case Globals.CMD.LOGIN_RESPONSE:
                        HandleData.handleLoginResponse(data);
                        break;
                    case Globals.CMD.SERVICE_TRANSPORT:
                        HandleData.handleServiceTransportPacket(data);
                        break;
                    case Globals.CMD.GAME_TRANSPORT:
                        HandleData.handleGameTransportPacket(data);
                        break;
                    case Globals.CMD.FORCE_LOGOUT:
                        HandleData.handleForcedLogoutPacket(data);
                        break;
                    case Globals.CMD.JOIN_RESPONSE:
                        HandleData.handleJoinResponsePacket(data);
                        break;
                    case Globals.CMD.LEAVE_RESPONSE:
                        HandleData.handleLeaveResponsePacket(data);
                        break;
                    case Globals.CMD.PING:
                        Globals.Logging.Log("PING PONG!!!!");
                        break;
                    default:
                        {
                            break;
                        }
                }
            });
    }

    public void runConnect()
    {


    }

    public void stop(bool isClearTask = true)
    {
        if (ws != null) ws.Close();
        if (isClearTask) jobsResend.Clear();
    }

    public bool IsAlive()
    {
        return ws != null && ws.IsAlive;
    }

    public void SendData(string dataSend)
    {
        if (connectionStatus == Globals.ConnectionStatus.CONNECTED && ws.ReadyState == WebSocketState.Open)
        {
            ws.SendAsync(dataSend, (msg) => { });
        }
        else
        {
            jobsResend.Enqueue(() =>
            {
                ws.SendAsync(dataSend, (msg) => { });
            });
        }

    }

    /**
     * Send a ServiceTransportPacket
     * @param {Number} pid player id
     * @param {Number} gameId gamed id
     * @param {Number} classId class id
     * @param {String} serviceContract name of service contract
     * @param {Array} byteArray game data
     */
    public void sendService(string strData, bool ping = true)
    {

        //if (NetworkManager.getInstance().statusConnect != FIREBASE.ConnectionStatus.CONNECTED) return;
        ServiceTransportPacket serviceTransport = new ServiceTransportPacket();
        serviceTransport.service = "com.athena.services.api.ServiceContract";
        serviceTransport.servicedata = Globals.Config.getByte(strData);// utf8.toByteArray(data);

        serviceTransport.pid = Globals.User.userMain.Userid;
        serviceTransport.seq = 1;
        serviceTransport.idtype = 1;
        //connector.sendProtocolObject(serviceTransport);
        SendData(JsonUtility.ToJson(serviceTransport));

        var objData = new JObject();
        var dataParse = JObject.Parse(strData);
        if (dataParse.ContainsKey("evt"))
        {
            objData["evt"] = dataParse["evt"];
        }
        else if (dataParse.ContainsKey("idevt"))
        {
            objData["idevt"] = dataParse["idevt"];
        }
        objData["data"] = strData;
        SocketIOManager.getInstance().emitSIOWithValue(objData, "ServiceTransportPacket", true);
    }
    /**
     * Send a Styx protocol object to a table. This protocol
     * object send to the game using a GameTransportPacket.
     *
     * @param {Number} pid player id
     * @param {Number} tableid table id
     * @param {Object} protocolObject Styx protocol object
     */
    public void sendDataGame(string strData)
    {
        //Globals.Logging.Log("sendDataGame:" + strData);
        GameTransportPacket gameTransportPacket = new GameTransportPacket();
        gameTransportPacket.pid = Globals.User.userMain.Userid;
        gameTransportPacket.tableid = Globals.Config.tableId;
        gameTransportPacket.gamedata = Globals.Config.Base64Encode(strData);
        SendData(JsonUtility.ToJson(gameTransportPacket));


        var objData = new JObject();
        var dataParse = JObject.Parse(strData);
        if (dataParse.ContainsKey("evt"))
        {
            objData["evt"] = dataParse["evt"];
        }
        else if (dataParse.ContainsKey("idevt"))
        {
            objData["idevt"] = dataParse["idevt"];
        }
        objData["data"] = strData;
        SocketIOManager.getInstance().emitSIOWithValue(objData, "GameTransportPacket", true);
    }

    private void Awake()
    {
        if (instance == null) instance = this;
        else
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);
    }
}