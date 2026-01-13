using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Newtonsoft.Json.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ScreenFriendView : MonoBehaviour
{
    public static ScreenFriendView instance;
    [SerializeField] private GameObject m_ItemTabScreenFrien;
    [SerializeField] private Transform m_ParentListTab;
    [SerializeField] private ScrollRect m_ScrollContentFriend;
    [SerializeField] private GameObject m_BtnCancel;

    private JObject FriendData = new JObject();
    private JArray ListTabFriend = new JArray();
    private JArray ListFriend = new JArray();
    private JArray CloseFriend = new JArray();
    private JArray BestFriend = new JArray();
    private JArray SoulMate = new JArray();
    private JArray ListInvited = new JArray();
    private JArray ListRequest = new JArray();
    private List<GameObject> listTabFriend = new();
    [SerializeField] private VerticalPool m_ChatTableVPG;
    private List<PoolInfo> _ControlPIs = new();
    public List<long> listFrienDelete = new();
    [SerializeField] private GameObject m_ButtonAddMore;
    [SerializeField] private TMP_Dropdown m_Sort;
    private int isTab = 0;
    public void Awake()
    {
        instance = this;
        SocketSend.sendListFriendChat();
        SocketSend.getListFriend();
        ListTabFriend = new JArray
{
    new JObject
    {
        ["name"] = "Friend",
        ["quantity"] = 0
    },
    new JObject
    {
        ["name"] = "Close Friend",
        ["quantity"] = 0
    },
     new JObject
    {
        ["name"] = "Best Friend",
        ["quantity"] = 0
    },
     new JObject
    {
        ["name"] = "Soulmate",
        ["quantity"] = 0
    },
     new JObject
    {
        ["name"] = "Request",
        ["quantity"] = 0
    },
     new JObject
    {
        ["name"] = "Invitation",
        ["quantity"] = 0
    },


};
        m_ChatTableVPG.SetApplyDataCb((go, data, index) =>
               {
                   ItemFriendScreenListFriend aIC = go.GetComponent<ItemFriendScreenListFriend>();
                   DataFriend aCWLD = (DataFriend)data.Data;
                   aIC.setInfo(aCWLD);
               }, true);
    }
    public void Start()
    {
        ReloadListTabFriend();
        m_Sort.onValueChanged.AddListener(OnSelectOption);
        Sort(0);
        //0:point
        //1:vip
        //2:status
    }
    void OnSelectOption(int index)
    {
        string selectedText = m_Sort.options[index].text;

        Debug.Log("Option chọn = " + selectedText + " | Index = " + index);
        Sort(index);
    }
    void Sort(int option)
    {
        if (option == 0)
        {
            _ControlPIs.Sort((a, b) =>
       {
           DataFriend da = (DataFriend)a.Data;
           DataFriend db = (DataFriend)b.Data;

           return db.point.CompareTo(da.point);
       });
        }
        else if (option == 1)
        {
            _ControlPIs.Sort((a, b) =>
                  {
                      DataFriend da = (DataFriend)a.Data;
                      DataFriend db = (DataFriend)b.Data;

                      return db.vip.CompareTo(da.vip);
                  });
        }
        else
        {
            _ControlPIs.Sort((a, b) =>
                  {
                      DataFriend da = (DataFriend)a.Data;
                      DataFriend db = (DataFriend)b.Data;

                      return db.status.CompareTo(da.status);
                  });
        }
        m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
        DOVirtual.DelayedCall(0.5f, () =>
        {
            m_ScrollContentFriend.content.anchoredPosition += new Vector2(0, -0.2f);

        });

    }
    void ReloadListTabFriend()
    {
        foreach (Transform child in m_ParentListTab)
        {
            Destroy(child.gameObject);
        }
        for (int i = 0; i < ListTabFriend.Count; i++)
        {
            int index = i;
            GameObject itemTab = Instantiate(m_ItemTabScreenFrien, m_ParentListTab);
            itemTab.gameObject.SetActive(true);
            itemTab.transform.localScale = Vector3.one;
            itemTab.transform.GetChild(1).gameObject.SetActive(i == 0 ? true : false);
            itemTab.transform.GetChild(2).GetComponent<TextMeshProUGUI>().text = (string)((JObject)ListTabFriend[i])["name"];
            itemTab.transform.GetChild(3).GetComponent<TextMeshProUGUI>().text = ((int)((JObject)ListTabFriend[i])["quantity"]).ToString();
            itemTab.GetComponent<Button>().onClick.AddListener(() =>
            {
                OnClickTabFriend(index);
            });
            listTabFriend.Add(itemTab);
        }
    }
    void OnClickTabFriend(int index)
    {
        listFrienDelete.Clear();
        m_BtnCancel.SetActive(false);
        foreach (GameObject itemTab in listTabFriend)
        {
            itemTab.transform.GetChild(1).gameObject.SetActive(false);
        }
        listTabFriend[index].transform.GetChild(1).gameObject.SetActive(true);
        switch (index)
        {
            case 0:
                isTab = 0;
                m_ButtonAddMore.SetActive(true);
                reloadFriend(ListFriend, 0);
                break;
            case 1:
                isTab = 1;
                m_ButtonAddMore.SetActive(true);
                reloadFriend(CloseFriend, 1);
                break;
            case 2:
                isTab = 2;
                m_ButtonAddMore.SetActive(true);
                reloadFriend(BestFriend, 2);
                break;
            case 3:
                isTab = 3;
                m_ButtonAddMore.SetActive(true);
                reloadFriend(SoulMate, 3);
                break;
            case 4:
                isTab = 4;
                m_ButtonAddMore.SetActive(false);
                ReloadListInviteRequest(ListRequest, 4);
                break;
            case 5:
                isTab = 5;
                m_ButtonAddMore.SetActive(false);
                ReloadListInviteRequest(ListInvited, 5);
                break;
            default: reloadFriend(ListFriend, 0); break;
        }

        DOVirtual.DelayedCall(0.5f, () =>
               {
                   m_ScrollContentFriend.content.anchoredPosition += new Vector2(0, -0.2f);

               });
    }
    public void AddMore()
    {
        UIManager.instance.showInviteListFriend();
    }
    public void setButtonDelete(bool isTrue)
    {
        m_BtnCancel.SetActive(isTrue);
    }
    public void onClickDelete()
    {
        SocketSend.deleteFriend(listFrienDelete);

    }
    void ReloadListInviteRequest(JArray data, int isTab)
    {
        _ControlPIs.Clear();
        for (int i = 0; i < m_ScrollContentFriend.content.childCount; i++)
        {
            m_ScrollContentFriend.content.GetChild(i).gameObject.SetActive(false);
        }
        m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
        Debug.Log("xem list data count" + data.Count + " " + _ControlPIs.Count);
        for (int i = 0; i < data.Count; i++)
        {
            JObject jObj = (JObject)data[i];
            DataFriend dataFriend = new DataFriend();
            dataFriend.userName = (string)((JObject)data[i])["userName"];
            dataFriend.userid = jObj.ContainsKey("userid") ? (int)jObj["userid"] : (int)jObj["id"];
            dataFriend.avatar = (int)((JObject)data[i])["avatar"];
            dataFriend.fbid = (long)((JObject)data[i])["fbid"];
            dataFriend.vip = (int)((JObject)data[i])["vip"];
            dataFriend.point = (int)((JObject)data[i])["point"];
            dataFriend.isTab = isTab;
            _ControlPIs.Add(new PoolInfo { Data = dataFriend });
        }
        Debug.Log("xem sau lúc list kia có bao nhiêu" + _ControlPIs.Count);
        m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
    



    }
    public void reloadFriend(JArray data, int isTab)
    {
        _ControlPIs.Clear();
        for (int i = 0; i < m_ScrollContentFriend.content.childCount; i++)
        {
            m_ScrollContentFriend.content.GetChild(i).gameObject.SetActive(false);
        }
        m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
        Debug.Log("xem list data count" + data.Count + " " + _ControlPIs.Count);
        for (int i = 0; i < data.Count; i++)
        {
            JObject jObj = (JObject)data[i];
            DataFriend dataFriend = new DataFriend();
            dataFriend.id = (int)((JObject)data[i])["id"];
            dataFriend.userName = (string)((JObject)data[i])["userName"];
            dataFriend.userid = (int)jObj["userId"];
            dataFriend.avatar = (int)((JObject)data[i])["avatar"];
            dataFriend.vip = (int)((JObject)data[i])["vip"];
            dataFriend.point = (int)((JObject)data[i])["point"];
            dataFriend.friendLevel = (string)((JObject)data[i])["friendLevel"];
            dataFriend.reactionTime = (long)((JObject)data[i])["reactionTime"];
            dataFriend.isOnline = (bool)((JObject)data[i])["isOnline"];
            dataFriend.status = (string)((JObject)data[i])["status"];
            dataFriend.isTab = isTab;

            _ControlPIs.Add(new PoolInfo { Data = dataFriend });
        }
        Debug.Log("xem sau lúc list kia có bao nhiêu" + _ControlPIs.Count);
        m_ChatTableVPG.SetControlInfo(_ControlPIs, 0);
   


    }
    public void Rule()
    {
        UIManager.instance.showWebView(Globals.Config.linkRuleFriend);
    }
    public void reloadListFriend()
    {
        FriendData = Globals.COMMON_DATA.JsonDataFriend;
        JArray rawList = (JArray)FriendData["listFriend"];

        ListFriend = new JArray(
               rawList.Where(x => (string)x["friendLevel"] == "Friend")
           );
        CloseFriend = new JArray(
         rawList.Where(x => (string)x["friendLevel"] == "CloseFriend")
     );
        BestFriend = new JArray(
          rawList.Where(x => (string)x["friendLevel"] == "BestFriend")
      );
        SoulMate = new JArray(
          rawList.Where(x => (string)x["friendLevel"] == "SoulMate")
      );
        ListInvited = (JArray)FriendData["listInvite"];
        ListRequest = (JArray)FriendData["listRequest"];
        List<int> friendCountTab = new List<int> { ListFriend.Count, CloseFriend.Count, BestFriend.Count, SoulMate.Count, ListRequest.Count, ListInvited.Count };
        for (int i = 0; i < listTabFriend.Count; i++)
        {
            listTabFriend[i].transform.GetChild(3).GetComponent<TextMeshProUGUI>().text = friendCountTab[i].ToString();
        }
        OnClickTabFriend(isTab);

    }
    public void OnDestroy()
    {
        Destroy(gameObject);
    }
    public void commingsoon()
    {
        UIManager.instance.showComingsoon();
    }
}

public class DataFriend
{
    public long id { get; set; }
    public string userName { get; set; }
    public long userid { get; set; }
    public int avatar { get; set; }
    public long fbid { get; set; }
    public int vip { get; set; }
    public int point { get; set; }
    public int isTab { get; set; }
    public bool isOnline { get; set; }
    public string friendLevel { get; set; }
    public long reactionTime { get; set; }
    public string status { get; set; }

    //0: friend;
    // 1:closeFriend;
    // 2:BestFriend;
    // 3:soulmate;
    // 4:requets;
    // 5:invitation;

}