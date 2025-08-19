using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

[Serializable]
public class OnlinePolicyData
{
    public List<int> timeWaiting;
    public List<int> chipBonus;
}

[Serializable]
public class CheckinBonusData
{
    public int OC;   // lần nhận hiện tại
    public int OM;   // số lần tối đa trong ngày
    public int T;    // thời gian còn lại (giây)
    public OnlinePolicyData OnlinePolicy;

    // Parse từ JObject server gửi
    public static CheckinBonusData FromJson(JObject json)
    {
        var data = new CheckinBonusData
        {
            OC = json["OC"]?.ToObject<int>() ?? 0,
            OM = json["OM"]?.ToObject<int>() ?? 0,
            T = json["T"]?.ToObject<int>() ?? 0,
        };

        if (json.ContainsKey("OnlinePolicy"))
        {
            string onlinePolicyStr = json["OnlinePolicy"].ToString();
            data.OnlinePolicy = JsonConvert.DeserializeObject<OnlinePolicyData>(onlinePolicyStr);
        }

        return data;
    }

    // Đổi T sang hh:mm:ss
    public string GetTimeRemainFormatted()
    {
        TimeSpan ts = TimeSpan.FromSeconds(T);
        return $"{ts.Hours:D2}:{ts.Minutes:D2}:{ts.Seconds:D2}";
    }

    // Lấy thưởng lần kế tiếp dựa theo OC
    public int GetNextBonus()
    {
        if (OnlinePolicy?.chipBonus == null) return 0;
        if (OC < OnlinePolicy.chipBonus.Count)
            return OnlinePolicy.chipBonus[OC];
        return 0;
    }

    // Lấy thời gian chờ lần kế tiếp
    public int GetNextWaitingTime()
    {
        if (OnlinePolicy?.timeWaiting == null) return 0;
        if (OC < OnlinePolicy.timeWaiting.Count)
            return OnlinePolicy.timeWaiting[OC];
        return 0;
    }
}
