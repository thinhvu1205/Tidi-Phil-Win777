using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Newtonsoft.Json.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class ChatFriend : BaseView
{
    public static ChatFriend Instance;
    [SerializeField] private GameObject m_ItemTabChatFriend;
    [SerializeField] private GameObject m_TabChatFriends;
    [SerializeField] private TMP_InputField m_Message;
    [SerializeField] private VerticalPool m_ChatTableVPG;
    [SerializeField] private ScrollRect m_ScrollChat;
    private List<PoolInfo> _ControlPIs = new();
    public Dictionary<long, JObject> dictionary = new();

    public long id_friends;
    void Awake()
    {
        Instance = this;
        m_ChatTableVPG.SetApplyDataCb((go, data, index) =>
       {
           ItemChat aIC = go.GetComponent<ItemChat>();
           ChatWorldLobbyData aCWLD = (ChatWorldLobbyData)data.Data;
           aIC.SetInfo(aCWLD, null, index, (cellW, cellH) =>
               {
                   data.SetCellWidth(cellW + 20);
                   data.SetCellHeight(cellH + 40);
               });
       }, true);
    }
    void Start()
    {

    }
    public void ReloadListTabChatFriend()
    {
        for (int i = 0; i < Globals.COMMON_DATA.JsonDataListChatFriend.Count; i++)
        {
            TabFriendChat itemTab;
            int index = i;
            if (i < m_TabChatFriends.transform.childCount)
            {
                itemTab = m_TabChatFriends.transform.GetChild(i).gameObject.GetComponent<TabFriendChat>();
                itemTab.gameObject.SetActive(true);
            }
            else
            {
                itemTab = Instantiate(m_ItemTabChatFriend, m_TabChatFriends.transform).GetComponent<TabFriendChat>();
            }
            itemTab.SetInfo((string)Globals.COMMON_DATA.JsonDataListChatFriend[i]["userName"], (int)Globals.COMMON_DATA.JsonDataListChatFriend[i]["userId"], (int)Globals.COMMON_DATA.JsonDataListChatFriend[i]["avatar"], index, false);
        }

    }

    public void setOffAllTab()
    {
        for (int i = 0; i < m_TabChatFriends.transform.childCount; i++)
        {
            TabFriendChat itemTab = m_TabChatFriends.transform.GetChild(i).gameObject.GetComponent<TabFriendChat>();
            itemTab.setOffTab();
        }
    }
    public void OpenNewChat(DataFriend dataFriend = null)
    {
        ReloadListTabChatFriend();
        id_friends = dataFriend.userid;
        int index = Globals.COMMON_DATA.JsonDataListChatFriend
    .Select((item, i) => new { item, i })
    .FirstOrDefault(x => (int)x.item["userId"] == id_friends)?.i ?? -1;
        if (index != -1)
        {
            TabFriendChat itemTab = m_TabChatFriends.transform.GetChild(index).gameObject.GetComponent<TabFriendChat>();
            itemTab.OnClickChooseFriendChat();
        }
        else
        {
            TabFriendChat itemTab = Instantiate(m_ItemTabChatFriend, m_TabChatFriends.transform).GetComponent<TabFriendChat>();
            itemTab.SetInfo(dataFriend.userName, dataFriend.userid, dataFriend.avatar, -1, true);
            itemTab.OnClickChooseFriendChat();
        }



    }
    public void setInfo(JObject data = null, bool isAdd = false, JObject dataChat = null)
    {
        string timeStr = DateTime.Now.ToString("dd/MM/yyyy HH:mm");
        if (!isAdd)
        {
            Debug.Log("vao day ma");
            _ControlPIs.Clear();
            for (int i = 0; i < m_ScrollChat.content.childCount; i++)
            {
                m_ScrollChat.content.GetChild(i).gameObject.SetActive(false);
            }
            m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
            long idFriend = (long)data["idFriend"];
            Debug.Log("xem idFriend" + idFriend);
            if (!dictionary.ContainsKey(idFriend))
            {
                dictionary.Add(idFriend, data);
            }
            JObject friendData = dictionary[idFriend];
            string jsonStr = friendData["data"].ToString();
            JObject dataRaw = JObject.Parse(jsonStr);
            string name = (string)dataRaw["userName"];
            Debug.Log("xem data trả về như nào ấy" + data);
            JArray items;
            var raw = dataRaw["chatList"];
            if (raw is JArray arr)
            {
                items = arr;
            }
            else
            {
                items = JArray.Parse((string)raw ?? "[]"
                );
            }
            Debug.Log("xem data trả về như nào ấy" + items);
            foreach (JObject item in items)
            {
                ChatWorldLobbyData chatData = new ChatWorldLobbyData
                {
                    ID = (long)(item["userId"] ?? 0),
                    Name = (long)item["userId"] == Globals.User.userMain.Userid ? Globals.User.userMain.displayName : name,
                    Content = (string)(item["content"] ?? ""),
                    Time = item["createTime"] != null
    ? DateTimeOffset.FromUnixTimeMilliseconds(item["createTime"].Value<long>())
                    .ToLocalTime()
                    .ToString("dd/MM/yyyy HH:mm")
    : DateTime.Now.ToString("dd/MM/yyyy HH:mm")
                };
                _ControlPIs.Add(new PoolInfo { Data = chatData });
            }
            // dictionary.Add((int)(item["userId"] ?? 0),)

        }
        else
        {
            ChatWorldLobbyData chatData = new ChatWorldLobbyData
            {
                ID = (long)(dataChat["uid"] ?? 0),
                Name = (string)(dataChat["username"] ?? ""),
                Content = (string)(dataChat["content"] ?? ""),
                Time = timeStr
            };
            JObject dataAdd = new JObject
            {
                ["userId"] = dataChat["uid"]?.Value<long>() ?? 0,
                ["content"] = dataChat["content"]?.Value<string>() ?? "",
                ["createTime"] = DateTimeOffset.Now.ToUnixTimeMilliseconds(),
                ["username"] = dataChat["username"]?.Value<string>() ?? ""
            };


            if (dictionary.ContainsKey(id_friends))
            {
                JObject friendData = dictionary[id_friends];
                var dataRaw = JObject.Parse(friendData["data"]?.ToString() ?? "{}");

                // Lấy chatList
                JArray items;
                var raw = dataRaw["chatList"];

                if (raw is JArray arr)
                {
                    items = arr;
                }
                else
                {
                    items = new JArray();
                    dataRaw["chatList"] = items;
                }

                // Add tin nhắn
                items.Add(dataAdd);

                // (nếu cần) ghi ngược lại
                friendData["data"] = dataRaw.ToString();
            }
            else
            {
                JArray items = new JArray();
                items.Add(dataAdd);

                // Tạo dataRaw đúng format
                JObject dataRaw = new JObject
                {
                    ["userName"] = dataChat["username"]?.Value<string>() ?? "",
                    ["chatList"] = items
                };
                JObject newFriendData = new JObject
                {
                    ["idFriend"] = id_friends,
                    ["data"] = dataRaw.ToString() // LƯU DẠNG STRING
                };

                dictionary.Add(id_friends, newFriendData);
            }
            // Parse data


            _ControlPIs.Add(new PoolInfo { Data = chatData });
        }
        m_ChatTableVPG.SetControlInfo(_ControlPIs, _ControlPIs.Count - 1);

        DOVirtual.DelayedCall(0.5f, () =>
       {
           m_ScrollChat.content.anchoredPosition += new Vector2(0, -0.2f);

       });
    }
    public void SendChat()
    {
        string mess = m_Message.text.Trim(); // bỏ khoảng trắng đầu/cuối
        if (string.IsNullOrEmpty(mess))
        {
            UIManager.instance.showToast("Please enter a message.");
            return;
        }
        int maxLength = 190;
        if (mess.Length >= maxLength)
        {
            UIManager.instance.showToast($"Message too long! Max {maxLength} characters allowed.");
            return; // không gửi lên server
        }

        SocketSend.sendChatFriends(id_friends, mess);
        m_Message.text = "";
    }

}