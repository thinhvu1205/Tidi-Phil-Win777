using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Runtime.InteropServices.ComTypes;
using System.Threading;
using Newtonsoft.Json.Linq;
//using SocketIO.Client;
using SocketIOClient;
using SocketIOClient.Newtonsoft.Json;
using UnityEngine;

using WebSocketSharp;

public class SocketIOManager
{
    string EVENT = "event";
    string REGINFO = "reginfo";
    string LOGIN = "login";
    string BEHAVIOR = "behavior";
    string UPDATE = "update";

    //SocketIO clientIO = null;
    private SocketIOUnity clientIO;
    private SocketIOUnity socket;
    static SocketIOManager instance = null;

    Globals.ConnectionStatus connectionStatus = Globals.ConnectionStatus.NONE;

    List<string> packetDetail = new List<string>(); //evt nào có trong array này thì bắn đủ data (bắn lên "packetDetail")
    List<string> blackListBehaviorIgnore = new List<string>(); //behaviorI: (behavior Ignore) evt nào có trong đây thì ko bắn lên  (bắn lên "behavior")
    List<string> whiteListOnlySendEvt = new List<string>(); //packet: evt nào có trong array này thì bắn evt, isSend, timestamp.. (bắn lên "packet")
    //Dictionary<string, string> listResend = new Dictionary<string, string>();
    //List<string> listResendEvent = new List<string>();
    List<string> listResendData = new List<string>();
    List<JObject> listDataResendForPacket = new List<JObject>();

    public bool isSendFirst = false;
    bool isGetedListFillter = false;
    bool isEmitReginfo = false;
    public JObject DATAEVT0 = null;

    public static SocketIOManager getInstance()
    {
        if (instance == null)
        {
            instance = new SocketIOManager();
        }

        return instance;
    }

    public SocketIOManager()
    {
    }

    public void intiSml()
    {
        try
        {
            var _blackList = PlayerPrefs.GetString("dataFilter", "");
            if (!_blackList.Equals(""))
            {
                var blackList = JObject.Parse(PlayerPrefs.GetString("dataFilter"));
                if (blackList != null)
                {
                    packetDetail = ((JArray)blackList["packetDetail"]).ToObject<List<string>>();
                    blackListBehaviorIgnore = ((JArray)blackList["behaviorI"]).ToObject<List<string>>();
                    whiteListOnlySendEvt = ((JArray)blackList["packet"]).ToObject<List<string>>();
                }
            }
        }
        catch (System.Exception e)
        {
            Debug.LogException(e);
        }

    }
    string url_old = "";
    public void startSIO()
    {
        try
        {
            //Globals.Config.u_SIO = "https://sio.jakartagames.net/diamond.domino.slots";
            Debug.Log("-=-== startSIO " + Globals.Config.u_SIO);

            if (!url_old.Equals(Globals.Config.u_SIO))
            {
                url_old = Globals.Config.u_SIO;
                stopIO();
            }
            if (connectionStatus == Globals.ConnectionStatus.CONNECTED || connectionStatus == Globals.ConnectionStatus.CONNECTING) return;

            Debug.Log("-=-== start Connect " + Globals.Config.u_SIO);
            //IO.Options options = new IO.Options();
            SocketIOOptions options = new SocketIOOptions();
            options.IgnoreServerCertificateValidation = true;
            var uri = new Uri(Globals.Config.u_SIO);
            //clientIO = IO.Socket(uri, options);
            clientIO = new SocketIOUnity(uri, options);
            clientIO.JsonSerializer = new NewtonsoftJsonSerializer();
            connectionStatus = Globals.ConnectionStatus.CONNECTING;
            clientIO.OnConnected += (sender, e) =>
            {
                Debug.Log("-=-== CONNECTED SIO ");
                connectionStatus = Globals.ConnectionStatus.CONNECTED;
                if (!isEmitReginfo)
                {

                    emitReginfo();
                    isEmitReginfo = true;
                }


                if (isSendFirst)
                {
                    if (Globals.Config.isLoginSuccess)
                    {
                        emitLogin();
                    }
                }


                if (DATAEVT0 != null)
                {

                    if (Globals.Config.isLoginSuccess)
                    {
                        emitSIOWithValue(DATAEVT0, "LoginPacket", false);
                    }
                }

                for (var i = 0; i < listResendData.Count; i++)
                {
                    emitSIO(listResendData[i]);
                }

                listResendData.Clear();
            };

            clientIO.OnDisconnected += (sender, e) =>
            {
                Debug.Log("SML DISCONNECTED");
                isSendFirst = false;
                isEmitReginfo = false;
                connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
            };
            clientIO.OnError += (sender, e) =>
            {
                Debug.Log("SML Connect Error:" + e.ToString());
                isSendFirst = false;
                isEmitReginfo = false;
                connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
            };

            clientIO.On("event", data =>
            {
                Debug.Log("SML===============> event:" + data.ToString());
                UnityMainThread.instance.AddJob(() =>
                {
                    string dataStr = data.ToString();
                    handleEvent(dataStr);
                });
            });
            clientIO.Connect();
        }

        catch (System.Exception e)
        {
            Debug.LogException(e);
        }
    }

    public void stopIO()
    {
        if (clientIO != null)
        {
            clientIO.Disconnect();
        }
        clientIO = null;
    }

    void handleEvent(string strData)
    {
        var dataArr = JArray.Parse(strData);
        var data = dataArr[0];
        //{ "event":"filter","packetDetail":["0","LoginPacket","JoinPacket","LeavePacket"],"packet":["0","ltv","pctable","selectG2","uag"],"behaviorI":[],"valueGet":[]}
        var evt = (string)data["event"];
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

                        //Debug.Log("packetDetail");
                        //Debug.Log("blackListBehaviorIgnore");
                        //Debug.Log(blackListBehaviorIgnore.ToString());
                        //Debug.Log("whiteListOnlySendEvt");
                        //Debug.Log(whiteListOnlySendEvt.ToString());
                        isGetedListFillter = true;
                        while (listDataResendForPacket.Count > 0)
                        {
                            var resend = listDataResendForPacket[0];
                            emitSIOWithValuePacket((JObject)resend["strData"], (string)resend["namePackage"], (bool)resend["isSend"], (bool)resend["isPacketDetai"], (long)resend["timestamp"]);
                            listDataResendForPacket.RemoveAt(0);
                        }
                        break;
                    }
                case "banner":
                    {
                        JArray arrData = (JArray)data["data"];
                        JArray arrOnlistFalse = new JArray();
                        JArray arrOnlistTrue = new JArray();
                        JArray arrBannerLobby = new JArray();

                        for (var i = 0; i < arrData.Count; i++)
                        {
                            var item = (JObject)arrData[i];
                            if (item.ContainsKey("urlImg") && !((string)item["urlImg"]).Equals(""))
                            {
                                if (item.ContainsKey("showByActionType") && (int)item["showByActionType"] == 9)
                                {
                                    arrBannerLobby.Add(item);
                                }
                                else if (item.ContainsKey("isOnList") && (bool)item["isOnList"])
                                {
                                    arrOnlistTrue.Add(item);
                                }
                                else
                                {
                                    arrOnlistFalse.Add(item);
                                }
                            }
                        }

                        if (arrBannerLobby.Count > 0)
                        {
                            Globals.Config.arrBannerLobby = arrBannerLobby;
                        }
                        //UIManager.instance.preLoadBaner(data.data);
                        UIManager.instance.handleBannerIO(arrOnlistFalse);
                        Globals.Config.arrOnlistTrue.Merge(arrOnlistTrue);
                        UIManager.instance.updateBannerNews();
                        if (UIManager.instance.lobbyView.gameObject.activeSelf)
                        {
                            UIManager.instance.showListBannerOnLobby();
                        }
                        break;
                    }
                case "getcf":
                    {
                        break;
                    }
            }

        }
        catch (System.Exception e)
        {
            Debug.LogException(e);
        }
    }

    public void testBanner()
    {
        //var str = "{\"event\":\"banner\",\"data\":[{\"arrButton\":[{\"type\":\"openlink\",\"urlBtn\":\"https://storage.googleapis.com/cdn.lengbear.com/Banner/lq0/1011/btn_recharge.png\",\"pos\":[0.5,0.5],\"urlLink\":\"http://kenh14.vn/\"}],\"_id\":\"5dcba97af89e24167aee37f1\",\"id\":\"5dc3edacdda6164a2693f86e\",\"title\":\"testchọngame\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/demo.png\",\"isOnList\":false,\"showByActionType\":6,\"priority\":1},{\"arrButton\":[{\"type\":\"openlink\",\"urlBtn\":\"https://storage.googleapis.com/cdn.lengbear.com/Banner/lq0/1011/btn_recharge.png\",\"pos\":[0.5,0.2],\"urlLink\":\"https://vnexpress.net/\"}],\"_id\":\"5dcba97af89e24167aee37f2\",\"id\":\"5dca5cb01442f41a4c8f2242\",\"title\":\"testchọngame\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/demo.png\",\"isOnList\":false,\"showByActionType\":6,\"priority\":2}]}";

        var str = "{\"event\":\"banner\",\"data\":[{\"arrButton\":[{\"type\":\"showwebview\",\"urlBtn\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/Banner_Lobby/May25/V0.jpg\",\"urlLink\":\"http://pm.davaogames.com/fortumo?userid=%uid%&price=20\",\"pos\":[0.5,0.5]}],\"_id\":\"62c3a3fe24f9eb0018cf82ed\",\"id\":\"628d96bb56d93d00186cd4f9\",\"title\":\"[May25]NewBanner\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/Banner_Lobby/May25/V0.jpg\",\"isOnList\":false,\"showByActionType\":9,\"priority\":1,\"isShowGameView\":false},{\"arrButton\":[],\"_id\":\"62c3a3fe24f9eb0018cf82ee\",\"id\":\"62be6891d31c8e001a9385d1\",\"title\":\"Invite-01July\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/1.jpg\",\"isOnList\":false,\"showByActionType\":9,\"priority\":2,\"isShowGameView\":false},{\"arrButton\":[{\"type\":\"cashout\",\"urlBtn\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/3.png\",\"pos\":[0.5,0.5]}],\"_id\":\"62c3a3fe24f9eb0018cf82ef\",\"id\":\"62a965db08c8fb001181661d\",\"title\":\"MờiCO-01Jul\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/3.png\",\"isOnList\":false,\"showByActionType\":9,\"priority\":3,\"isShowGameView\":false},{\"arrButton\":[{\"type\":\"openlink\",\"urlBtn\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/4.png\",\"pos\":[0.5,0.5],\"urlLink\":\"https://laropay.net/\"}],\"_id\":\"62c3a3fe24f9eb0018cf82f2\",\"id\":\"62be6b0ed31c8e001a9385d3\",\"title\":\"GiớithiệuLaropay-01Jul\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/tongits_club_online_test/4.png\",\"isOnList\":false,\"showByActionType\":9,\"priority\":4,\"isShowGameView\":false},{\"arrButton\":[],\"_id\":\"62c3a3fe24f9eb0018cf82f1\",\"id\":\"62a94c6808c8fb00118165fc\",\"title\":\"Cảnhbáo-1006-all-15Jun\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/1006_ios/Warning/2.png\",\"isOnList\":true,\"showByActionType\":7,\"priority\":4,\"isShowGameView\":false},{\"arrButton\":[{\"type\":\"openlink\",\"urlBtn\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/1006_ios/HDN/b2.png\",\"urlLink\":\"https://www.facebook.com/bigwinclub.site\",\"pos\":[0.6,0.1]}],\"_id\":\"62c3a3fe24f9eb0018cf82f4\",\"id\":\"62a97e6408c8fb0011816629\",\"title\":\"Hướngdẫnnạp-1006-V0,1-15Jun\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/1006_ios/HDN/i2.png\",\"isOnList\":true,\"showByActionType\":7,\"priority\":7,\"isShowGameView\":false},{\"arrButton\":[{\"type\":\"openlink\",\"urlBtn\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/1006_ios/Laropay/3a.png\",\"urlLink\":\"https://laropay.net/\",\"pos\":[0.5,0.1]}],\"_id\":\"62c3a3fe24f9eb0018cf82f6\",\"id\":\"62a95c2308c8fb0011816602\",\"title\":\"Laropay-1006-V0,5-15Jun\",\"isClose\":true,\"urlImg\":\"https://storage.googleapis.com/cdn.davaogames.com/NewBanner/1006_ios/Laropay/3ai.png\",\"isOnList\":true,\"showByActionType\":7,\"priority\":8,\"isShowGameView\":false}]}";
        handleEvent(str);
    }

    List<string> listSend = new List<string>();
    void emitSIO(string strData)
    {
        if (clientIO != null && connectionStatus == Globals.ConnectionStatus.CONNECTED)
        {
            Debug.Log("-=-=SML emitSIO  data: " + strData);
            if (!IsJSON(strData))
            {
                clientIO.Emit("event", strData);
            }
            else
            {
                clientIO.EmitStringAsJSON("event", strData);
            }
        }
        else
        {
            //listResendEvent.Add(eventName);

            if (listResendData.Count < 100)
            {
                listResendData.Add(strData);
            }

        }
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
                var obj = JToken.Parse(str);
                return true;
            }
            catch (Exception ex) //some other exception
            {
                Debug.LogError(ex.ToString());
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    void emitSIOWithMapData(string evtName, Dictionary<string, string> mapData)
    {
        var objectVL = new JObject();
        foreach (var kvp in mapData)
        {

            //if (kvp.Key == "vip" || kvp.Key == "ag" || kvp.Key == "id")
            //{
            //    objectVL[kvp.Key] = int.Parse(kvp.Value);
            //}
            //else
            //{
            objectVL[kvp.Key] = kvp.Value;
            //}


        }
        //    mapData.forEach((valu, key) => {
        //        objectVL[key] = valu;
        //    });
        objectVL["event"] = evtName;
        objectVL["timestamp"] = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
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
            {
                // cc.NGWlog("SIO: emitSIOCCC EVT NAY THUOC DIEN CHINH SACH KO DUOC GUI DI :( -  evt: " + strData);
                return;
            }
            var mapDM = new Dictionary<string, string>();
            mapDM.Add(BEHAVIOR, strData);
            emitSIOWithMapData(BEHAVIOR, mapDM);
        }
        catch (System.Exception e)
        {
            Debug.LogException(e);
        }
    }

    void emitSIOWithValuePacket(JObject packetValue, string namePackage, bool isSend, bool isPacketDetai, long timeStamp = 0)
    {
        try
        {
            var timestamp = System.DateTimeOffset.Now.ToUnixTimeMilliseconds().ToString();
            var objectVV = packetValue; //packetValue.slice();

            if (connectionStatus != Globals.ConnectionStatus.CONNECTED || !isGetedListFillter)
            {
                var objSave = new JObject();
                objSave["strData"] = packetValue;
                objSave["isSend"] = isSend;
                objSave["isPacketDetai"] = isPacketDetai;
                objSave["namePackage"] = namePackage;
                objSave["timestamp"] = timestamp;

                listDataResendForPacket.Add(objSave);
                return;
            }
            var evtt = "";

            if (objectVV.ContainsKey("evt"))
            {
                evtt = (string)objectVV["evt"];
            }
            else if (objectVV.ContainsKey("idevt"))
            {
                evtt = (string)objectVV["idevt"];
            }
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
                    if ((string)packetValue["evt"] == "0")
                    {
                        DATAEVT0 = packetValue;
                    }
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
                    objectVV = new JObject();
                    objectVV["evt"] = evtt;
                    objectVV["event"] = "packet";
                }
                else
                {
                    //cc.NGWlog("SIO: =-=-=-=-==== CHIM CUT");
                    return;
                }
            }
            objectVV["packetData"] = namePackage;
            objectVV["isSendData"] = isSend;
            objectVV["timestamp"] = (timeStamp == 0 ? System.DateTimeOffset.Now.ToUnixTimeMilliseconds() : timeStamp);
            emitSIO(objectVV.ToString());
        }
        catch (System.Exception e)
        {
            Debug.LogException(e);
        }
    }

    //Gui sau' khi connect success --> gui thong tin device
    void emitReginfo()
    {
        //try
        //{
        JObject objectVL = new JObject();
        objectVL["event"] = REGINFO;
        //var osName = "web";
        var osName = "Android";
        if (Application.platform == RuntimePlatform.Android)
            osName = "Android";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            osName = "iOS";

        objectVL["location"] = "WHERE";
        objectVL["pkgname"] = Globals.Config.package_name;
        objectVL["versionCode"] = Globals.Config.versionGame;
        objectVL["versionName"] = Globals.Config.versionNameOS;
        objectVL["versionDevice"] = Globals.Config.versionDevice;
        objectVL["os"] = osName;
        objectVL["language"] = Globals.Config.language;
        objectVL["model"] = Globals.Config.model;
        objectVL["brand"] = Globals.Config.brand;

        //JArray jArray = new JArray();
        //jArray.Add(Screen.currentResolution.width);
        //jArray.Add(Screen.currentResolution.height);
        //objectVL["resolution"] = jArray;
        objectVL["time_start"] = Globals.Config.TimeOpenApp;
        objectVL["devID"] = Globals.Config.deviceId;
        objectVL["operatorID"] = Globals.Config.OPERATOR;
        emitSIO(objectVL.ToString());
        //}
        //catch (System.Exception e)
        //{

        //    Debug.LogException(e);
        //}
    }

    public void emitLogin()
    {
        //// isSendFirst = false;
        ////tracking io khi login success
        var mapDataLogin = new Dictionary<string, string>();
        mapDataLogin.Add("event", LOGIN);
        mapDataLogin.Add("gameIP", Globals.Config.curServerIp);
        mapDataLogin.Add("verHotUpdate", Globals.Config.versionGame);
        mapDataLogin.Add("id", Globals.User.userMain.Userid.ToString());
        mapDataLogin.Add("name", Globals.User.userMain.Username);
        mapDataLogin.Add("ag", Globals.User.userMain.AG + "");
        mapDataLogin.Add("vip", Globals.User.userMain.VIP + "");
        mapDataLogin.Add("lq", Globals.User.userMain.LQ + "");
        mapDataLogin.Add("curView", Globals.CURRENT_VIEW.getCurrentSceneName());
        mapDataLogin.Add("gameID", Globals.Config.curGameId + "");
        mapDataLogin.Add("disID", Globals.Config.disID + "");
        emitSIOWithMapData(LOGIN, mapDataLogin);

    }

    public void emitUpdateInfo()
    {
        var mapData = new Dictionary<string, string>();
        mapData.Add("id", Globals.User.userMain.Userid + "");
        mapData.Add("name", Globals.User.userMain.Username);
        mapData.Add("ag", Globals.User.userMain.AG + "");
        mapData.Add("vip", Globals.User.userMain.VIP + "");
        mapData.Add("lq", Globals.User.userMain.LQ + "");
        mapData.Add("curView", Globals.CURRENT_VIEW.getCurrentSceneName());
        mapData.Add("gameID", Globals.Config.curGameId + "");

        emitSIOWithMapData(UPDATE, mapData);
    }
    List<string> arrayIDBannerShowed = new List<string>();
    public void logEventSuggestBanner(int type, JObject dataItem)
    {
        Dictionary<string, string> dataMap = new Dictionary<string, string>();
        if (type == 1)
        {
            dataMap["action"] = "close";
        }
        else if (type == 2)
        {
            dataMap["action"] = "click";
        }
        else if (type == 3)
        {
            dataMap["action"] = "view";
        }
        dataMap["id"] = (string)dataItem["id"];
        dataMap["urlImg"] = (string)dataItem["urlImg"];

        if (!arrayIDBannerShowed.Contains((string)dataItem["id"]))
            arrayIDBannerShowed.Add((string)dataItem["id"]);


        emitSIOWithMapData("actionBanner", dataMap);

        if (type == 2)
        {
            var arrayDataBannerIO = UIManager.instance.arrayDataBannerIO;
            for (var i = 0; i < arrayDataBannerIO.Count; i++)
            {
                if (dataItem["id"] == arrayDataBannerIO[i]["id"]) { }
                else
                {
                    if (arrayIDBannerShowed.Contains((string)arrayDataBannerIO[i]["id"])) continue;
                    var dataNo = new Dictionary<string, string>();

                    dataNo.Add("action", "notshow");
                    dataNo.Add("id", (string)arrayDataBannerIO[i]["id"]);
                    dataNo.Add("urlImg", (string)arrayDataBannerIO[i]["urlImg"]);
                    emitSIOWithMapData("actionBanner", dataNo);
                }
            }
        }
    }
}