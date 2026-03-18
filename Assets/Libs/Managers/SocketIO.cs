using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using Globals;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using SimpleJSON;
using SocketIOClient;
using SocketIOClient.Messages;
using SocketIOClient.Newtonsoft.Json;
using Unity.VisualScripting;
using UnityEngine;

public class SocketIOManager
{
    private static SocketIOManager instance = null;
    public JObject DATAEVT0 = null;
    public bool isSendFirst = false;
    private List<JObject> listDataResendForPacket = new();
    private List<string> packetDetail = new(), //evt nào có trong array này thì bắn đủ data (bắn lên "packetDetail")
        blackListBehaviorIgnore = new(), //behaviorI: (behavior Ignore) evt nào có trong đây thì ko bắn lên  (bắn lên "behavior")
        whiteListOnlySendEvt = new(), //packet: evt nào có trong array này thì bắn evt, isSend, timestamp.. (bắn lên "packet")
        listResendData = new(), arrayIDBannerShowed = new();
    private ConnectionStatus connectionStatus = ConnectionStatus.NONE;
    private SocketIOUnity clientIO;
    private string EVENT = "event", REGINFO = "reginfo", LOGIN = "login", BEHAVIOR = "behavior", UPDATE = "update", url_old = "";
    private bool isGetedListFillter, isEmitReginfo, _IsJSWebSocketReady;
    private string _UriAbsolutePath;

    public static SocketIOManager getInstance()
    {
        if (instance == null) instance = new SocketIOManager();
        return instance;
    }
    public SocketIOManager() { }
    public void initSml()
    {
        try
        {
            string _blackList = PlayerPrefs.GetString("dataFilter", "");
            if (!_blackList.Equals(""))
            {
                JObject blackList = JObject.Parse(PlayerPrefs.GetString("dataFilter"));
                if (blackList != null)
                {
                    packetDetail = ((JArray)blackList["packetDetail"]).ToObject<List<string>>();
                    blackListBehaviorIgnore = ((JArray)blackList["behaviorI"]).ToObject<List<string>>();
                    whiteListOnlySendEvt = ((JArray)blackList["packet"]).ToObject<List<string>>();
                }
            }
        }
        catch (Exception e) { Debug.LogException(e); }
    }
    public void startSIO()
    {
        try
        {
            Debug.Log("-=-== startSIO " + Config.u_SIO);
            if (!url_old.Equals(Config.u_SIO))
            {
                url_old = Config.u_SIO;
                stopIO();
            }
            if (connectionStatus == ConnectionStatus.CONNECTED || connectionStatus == ConnectionStatus.CONNECTING) return;

            Debug.Log("-=-== start Connect " + Config.u_SIO);
#if UNITY_WEBGL && !UNITY_EDITOR
            Uri uri = new(Config.u_SIO);
            _UriAbsolutePath = uri.AbsolutePath;
            connectionStatus = ConnectionStatus.CONNECTING;
            Application.ExternalCall("createBannerWebSocket", Config.u_SIO);
#else
            SocketIOOptions options = new() { IgnoreServerCertificateValidation = true };
            Uri uri = new(Config.u_SIO);
            clientIO = new(uri, options) { JsonSerializer = new NewtonsoftJsonSerializer() };
            connectionStatus = ConnectionStatus.CONNECTING;
            clientIO.OnConnected += (sender, e) => HandleOnOpenBannerWebSocket();
            clientIO.OnDisconnected += (sender, e) => HandleOnCloseBannerWebSocket();
            clientIO.OnError += (sender, e) => HandleOnErrorBannerWebSocket();
            clientIO.On(EVENT, data => { HandleOnMessageBannerWebSocket(data.ToString()); });
            clientIO.Connect();
#endif
        }
        catch (Exception e) { Debug.LogException(e); }
    }
    public void HandleOnErrorBannerWebSocket()
    {
        Debug.Log("SML Connect Error:");
        isSendFirst = false;
        isEmitReginfo = false;
        connectionStatus = ConnectionStatus.DISCONNECTED;
    }
    public void HandleOnCloseBannerWebSocket()
    {
        Debug.Log("SML DISCONNECTED");
        isSendFirst = false;
        isEmitReginfo = false;
        connectionStatus = ConnectionStatus.DISCONNECTED;
    }
    public void HandleOnOpenBannerWebSocket()
    {
        Debug.Log("-=-== CONNECTED SIO ");
        connectionStatus = ConnectionStatus.CONNECTED;
        if (!isEmitReginfo)
        {
            emitReginfo();
            isEmitReginfo = true;
        }
        if (isSendFirst)
            if (Config.isLoginSuccess)
                emitLogin();
        if (DATAEVT0 != null)
            if (Config.isLoginSuccess)
                emitSIOWithValue(DATAEVT0, "LoginPacket", false);
        for (int i = 0; i < listResendData.Count; i++)
        {
            if (listResendData[i].Contains("ClickLogOut")) continue;
            emitSIO(listResendData[i]);
        }
        listResendData.Clear();
    }
    public void HandleOnMessageBannerWebSocket(string data)
    {
        Debug.Log("SML===============> event:" + data.ToString());
        UnityMainThread.instance.AddJob(() =>
        {
            string strData = data.ToString();
            handleEvent(strData);
        });
    }
    public void CheckBannerWebSocketReady(string isReady)
    {
        _IsJSWebSocketReady = isReady.Equals("true");
    }
    public void stopIO()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
    Application.ExternalCall("closeBannerWebSocket");
#else
        if (clientIO != null) clientIO.Disconnect();
        clientIO = null;
#endif
    }
    private async UniTask handleEvent(string strData)
    {
        JArray dataArr = JArray.Parse(strData);
        JToken data = dataArr[0];
        string evt = (string)data["event"];
        Debug.Log("===============> SIO: handleEvent la " + strData);
        try
        {
            switch (evt)
            {
                case "filter":
                    {
                        Debug.Log("-=-= filter");
                        //PlayerPrefs.SetString("dataFilter", strData);
                        packetDetail = ((JArray)data["packetDetail"]).ToObject<List<string>>();
                        blackListBehaviorIgnore = ((JArray)data["behaviorI"]).ToObject<List<string>>();
                        whiteListOnlySendEvt = ((JArray)data["packet"]).ToObject<List<string>>();
                        isGetedListFillter = true;
                        while (listDataResendForPacket.Count > 0)
                        {
                            JObject resend = listDataResendForPacket[0];
                            emitSIOWithValuePacket((JObject)resend["strData"], (string)resend["namePackage"], (bool)resend["isSend"], (bool)resend["isPacketDetai"], (long)resend["timestamp"]);
                            listDataResendForPacket.RemoveAt(0);
                        }
                        break;
                    }
                case "banner":
                    {
                        if (HandleData.DelayHandleLeave > 0) await UniTask.Delay((int)(HandleData.DelayHandleLeave + 0.5f) * 1000); //delay thêm 0.5s cho chắc
                        JArray arrData = (JArray)data["data"];
                        JArray arrOnlistFalse = new(), arrOnlistTrue = new(), arrBannerLobby = new();
                        for (int i = 0; i < arrData.Count; i++)
                        {
                            JObject item = (JObject)arrData[i];
                            if (item.ContainsKey("urlImg") && !((string)item["urlImg"]).Equals(""))
                            {
                                if (item.ContainsKey("showByActionType") && (int)item["showByActionType"] == 9)
                                    arrBannerLobby.Add(item);
                                else if (item.ContainsKey("isOnList") && (bool)item["isOnList"])
                                    arrOnlistTrue.Add(item);
                                else
                                    arrOnlistFalse.Add(item);
                            }
                        }
                        if (arrBannerLobby.Count > 0) Config.arrBannerLobby = arrBannerLobby;
                        //UIManager.instance.preLoadBaner(data.data);
                        UIManager.instance.handleBannerIO(arrOnlistFalse);
                        Config.arrOnlistTrue.Merge(arrOnlistTrue);
                        UIManager.instance.updateBannerNews();
                        if (UIManager.instance.lobbyView.gameObject.activeSelf) UIManager.instance.showListBannerOnLobby();
                        break;
                    }
                case "getcf":
                    {
                        break;
                    }
            }
        }
        catch (Exception e) { Debug.LogException(e); }
    }
    void emitSIO(string strData)
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        Application.ExternalCall("checkBannerWebSocketReady");
        if (connectionStatus == ConnectionStatus.CONNECTED && _IsJSWebSocketReady)
        {
            Debug.Log("-=-=SML emitSIO  data: " + strData);
            if (!IsJSON(strData))
            {
                if (strData != null && strData.Length > 0)
                {
                    byte[] result = Encoding.UTF8.GetBytes(strData);
                    if (result.Length > 0)
                    {
                        var msg = new BinaryMessage
                        {
                            Namespace = _UriAbsolutePath,
                            OutgoingBytes = new List<byte[]>() { result },
                            Event = EVENT,
                            Json = new JSONString(strData).ToString()
                        };
                        Application.ExternalCall("sendBannerData", msg);
                    }
                    else
                    {
                        var msg = new EventMessage
                        {
                            Namespace = _UriAbsolutePath,
                            Event = EVENT,
                            Json = new JSONString(strData).ToString()
                        };
                        Application.ExternalCall("sendBannerData", msg);
                    }
                }
                else
                {
                    var msg = new EventMessage
                    {
                        Namespace = _UriAbsolutePath,
                        Event = EVENT
                    };
                    Application.ExternalCall("sendBannerData", msg);
                }
            }
            else{
                var msg = new EventMessage
                {
                    Namespace = _UriAbsolutePath,
                    Event = EVENT,
                };
                if (!string.IsNullOrEmpty(strData))
                {
                    msg.Json = "[" + strData + "]";
                }
                Application.ExternalCall("sendBannerData", msg);
            } 
        }
        else
        {
            //listResendEvent.Add(eventName);
            if (listResendData.Count < 100) listResendData.Add(strData);
        }
#else
        if (clientIO != null && connectionStatus == ConnectionStatus.CONNECTED)
        {
            Debug.Log("-=-=SML emitSIO  data: " + strData);
            if (!IsJSON(strData)) clientIO.Emit(EVENT, strData);
            else clientIO.EmitStringAsJSON(EVENT, strData);
        }
        else
        {
            //listResendEvent.Add(eventName);
            if (listResendData.Count < 100) listResendData.Add(strData);
        }
#endif
    }
    public static bool IsJSON(string str)
    {
        if (string.IsNullOrWhiteSpace(str)) { return false; }
        str = str.Trim();
        if ((str.StartsWith("{") && str.EndsWith("}")) || //For object
            (str.StartsWith("[") && str.EndsWith("]"))) //For array
        {
            try
            {
                JToken obj = JToken.Parse(str);
                return true;
            }
            catch (Exception ex) //some other exception
            {
                Debug.LogError(ex.ToString());
                return false;
            }
        }
        else return false;
    }
    void emitSIOWithMapData(string evtName, Dictionary<string, string> mapData)
    {
        JObject objectVL = new();
        foreach (KeyValuePair<string, string> kvp in mapData)
        {
            objectVL[kvp.Key] = kvp.Value;
        }
        objectVL["event"] = evtName;
        objectVL["timestamp"] = DateTimeOffset.Now.ToUnixTimeMilliseconds();
        emitSIO(objectVL.ToString());
    }
    public void emitSIOWithValue(JObject objectVL, string namePackage, bool isSend)
    {
        ////packetDetail: evt nào có trong array này thì bắn đủ data (bắn lên "packetDetail")
        emitSIOWithValuePacket(objectVL, namePackage, isSend, true);
        ////packet: evt nào có trong array này thì bắn evt, isSend, timestamp.. (bắn lên "packet")
        emitSIOWithValuePacket(objectVL, namePackage, isSend, false);
    }
    public void emitSIOCCCNew(string strData)
    {
        try
        {
            if (blackListBehaviorIgnore.Contains(strData) || blackListBehaviorIgnore.Contains("all_sio"))
                return;
            Dictionary<string, string> mapDM = new() { { BEHAVIOR, strData } };
            emitSIOWithMapData(BEHAVIOR, mapDM);
        }
        catch (Exception e) { Debug.LogException(e); }
    }
    void emitSIOWithValuePacket(JObject packetValue, string namePackage, bool isSend, bool isPacketDetai, long timeStamp = 0)
    {
        try
        {
            string timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds().ToString();
            JObject objectVV = packetValue; //packetValue.slice();
            if (connectionStatus != ConnectionStatus.CONNECTED || !isGetedListFillter)
            {
                JObject objSave = new()
                {
                    ["strData"] = packetValue,
                    ["isSend"] = isSend,
                    ["isPacketDetai"] = isPacketDetai,
                    ["namePackage"] = namePackage,
                    ["timestamp"] = timestamp
                };
                listDataResendForPacket.Add(objSave);
                return;
            }
            string evtt = "";
            if (objectVV.ContainsKey("evt")) evtt = (string)objectVV["evt"];
            else if (objectVV.ContainsKey("idevt")) evtt = (string)objectVV["idevt"];
            else
            {
                evtt = namePackage;
                objectVV["evt"] = evtt;
            }
            if (isPacketDetai)
            {
                if (packetDetail.Contains(evtt) || packetDetail.Contains("all_sio"))
                {
                    objectVV["event"] = "packetDetail";
                    if ((string)packetValue["evt"] == "0") DATAEVT0 = packetValue;
                }
                else
                {
                    //cc.NGWlog("SIO: EVT NAY THUOC DIEN CHINH SACH KO DUOC GUI DI :( -  evt: " + evtt);
                    return;
                }
            }
            else
            {
                if (whiteListOnlySendEvt.Contains(evtt) || whiteListOnlySendEvt.Contains("all_sio"))
                {
                    objectVV = new JObject
                    {
                        ["evt"] = evtt,
                        ["event"] = "packet"
                    };
                }
                else
                {
                    //cc.NGWlog("SIO: =-=-=-=-==== CHIM CUT");
                    return;
                }
            }
            objectVV["packetData"] = namePackage;
            objectVV["isSendData"] = isSend;
            objectVV["timestamp"] = timeStamp == 0 ? DateTimeOffset.Now.ToUnixTimeMilliseconds() : timeStamp;
            emitSIO(objectVV.ToString());
        }
        catch (Exception e) { Debug.LogException(e); }
    }
    //Gui sau' khi connect success --> gui thong tin device
    void emitReginfo()
    {
        //try
        //{
        JObject objectVL = new()
        {
            ["event"] = REGINFO
        };
        //string osName = "web";
        string osName = "Android";
        if (Application.platform == RuntimePlatform.Android) osName = "Android";
        else if (Application.platform == RuntimePlatform.IPhonePlayer) osName = "iOS";

        objectVL["location"] = "WHERE";
        objectVL["pkgname"] = Config.package_name;
        objectVL["versionCode"] = Config.versionGame;
        objectVL["versionName"] = Config.versionNameOS;
        objectVL["versionDevice"] = Config.versionDevice;
        objectVL["os"] = osName;
        objectVL["language"] = Config.language;
        objectVL["model"] = Config.model;
        objectVL["brand"] = Config.brand;

        //JArray jArray = new JArray();
        //jArray.Add(Screen.currentResolution.width);
        //jArray.Add(Screen.currentResolution.height);
        //objectVL["resolution"] = jArray;
        objectVL["time_start"] = Config.TimeOpenApp;
        objectVL["devID"] = Config.deviceId;
        objectVL["operatorID"] = Config.OPERATOR;
        emitSIO(objectVL.ToString());
        //}
        //catch (Exception e)
        //{

        // Debug.LogException(e);
        //}
    }

    public void emitLogin()
    {
        //// isSendFirst = false;
        ////tracking io khi login success
        Dictionary<string, string> mapDataLogin = new()
        {
            { "event", LOGIN },
            { "gameIP", Config.curServerIp },
            { "verHotUpdate", Config.versionGame },
            { "id", User.userMain.Userid.ToString() },
            { "name", User.userMain.Username },
            { "ag", User.userMain.AG + "" },
            { "vip", User.userMain.VIP + "" },
            { "lq", User.userMain.LQ + "" },
            { "curView", CURRENT_VIEW.getCurrentSceneName() },
            { "gameID", Config.curGameId + "" },
            { "disID", Config.disID + "" }
        };
        emitSIOWithMapData(LOGIN, mapDataLogin);
    }
    public void emitUpdateInfo()
    {
        Dictionary<string, string> mapData = new()
        {
            { "id", User.userMain.Userid + "" },
            { "name", User.userMain.Username },
            { "ag", User.userMain.AG + "" },
            { "vip", User.userMain.VIP + "" },
            { "lq", User.userMain.LQ + "" },
            { "curView", CURRENT_VIEW.getCurrentSceneName() },
            { "gameID", Config.curGameId + "" }
        };
        emitSIOWithMapData(UPDATE, mapData);
    }
    public void logEventSuggestBanner(int type, JObject dataItem)
    {
        Dictionary<string, string> dataMap = new();
        if (type == 1) dataMap["action"] = "close";
        else if (type == 2) dataMap["action"] = "click";
        else if (type == 3) dataMap["action"] = "view";
        dataMap["id"] = (string)dataItem["id"];
        dataMap["urlImg"] = (string)dataItem["urlImg"];
        if (!arrayIDBannerShowed.Contains((string)dataItem["id"])) arrayIDBannerShowed.Add((string)dataItem["id"]);
        emitSIOWithMapData("actionBanner", dataMap);
        if (type == 2)
        {
            JArray arrayDataBannerIO = UIManager.instance.arrayDataBannerIO;
            for (int i = 0; i < arrayDataBannerIO.Count; i++)
            {
                if (dataItem["id"] == arrayDataBannerIO[i]["id"]) { }
                else
                {
                    if (arrayIDBannerShowed.Contains((string)arrayDataBannerIO[i]["id"])) continue;
                    Dictionary<string, string> dataNo = new()
                    {
                        { "action", "notshow" },
                        { "id", (string)arrayDataBannerIO[i]["id"] },
                        { "urlImg", (string)arrayDataBannerIO[i]["urlImg"] }
                    };
                    emitSIOWithMapData("actionBanner", dataNo);
                }
            }
        }
    }
}
