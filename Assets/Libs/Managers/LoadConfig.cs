using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Globals;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;
public class CertificateWhore : CertificateHandler
{
    protected override bool ValidateCertificate(byte[] certificateData)
    {
        return true;
    }
}
public class LoadConfig : MonoBehaviour
{
    public static LoadConfig instance;
    string url_start = "https://n.cfg.davaogames.com/info";
    //string url_start = "https://cfg.jakartagames.net/info";
    string config_info = "";

    public bool isLoadedConfig = false;
    void Awake()
    {
        instance = this;
        //if (Application.platform == RuntimePlatform.Android)
        //{
        //    config_info = @"{""gamenotification"":false,""allowPushOffline"":true,""is_reg"":false,""isShowLog"":false,""is_login_guest"":true,""is_login_fb"":true,""time_request"":5,""avatar_change"":2,""avatar_count"":10,""avatar_build"":""https://cdn.topbangkokclub.com/api/public/dl/VbfRjo1c/avatar/%avaNO%.png"",""avatar_fb"":""https://graph.facebook.com/v9.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%"",""name_fb"":""https://graph.facebook.com/%userID%/?fields=name&access_token=%token%"",""text"":[{""lang"":""EN"",""url"":""https://conf.topbangkokclub.com/textEnglish""},{""lang"":""THAI"",""url"":""https://conf.topbangkokclub.com/textThai""}],""url_help"":"""",""bundleID"":""71D97F59-4763-5A1E-8862-B29980CF2D4C"",""version"":""1.00"",""operatorID"":7000,""os"":""android_unity"",""publisher"":""dummy_co_1_10"",""disID"":1007,""fbprivateappid"":"""",""fanpageID"":"""",""groupID"":"""",""hotline"":"""",""listGame"":[{""id"":8015,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8100,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8013,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8010,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8802,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9008,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":9007,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8818,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9950,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9900,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2}],""u_chat_fb"":"""",""infoChip"":"""",""infoDT"":"""",""infoBNF"":""https://conf.topbangkokclub.com/infoBNF"",""url_rule_js_new"":"""",""delayNoti"":[{""time"":5,""title"":""Pusoy"",""text"":""⚡️ Chip Free ⚡️"",""ag"":100000},{""time"":600,""title"":""Pusoy"",""text"":""💰Chip Free 💰"",""ag"":0},{""time"":86400,""title"":""Pusoy"",""text"":""⏰ Chip Free ⏰"",""ag"":0}],""data0"":false,""infoUser"":"""",""umode"":4,""uop1"":""Quit"",""umsg"":""This version don't allow to play game"",""utar"":"""",""newest_versionUrl"":""""}";

        //}
        //else if (Application.platform == RuntimePlatform.IPhonePlayer)
        //{
        //    config_info = @"{""gamenotification"":false,""allowPushOffline"":true,""is_reg"":false,""isShowLog"":false,""is_login_guest"":true,""is_login_fb"":true,""time_request"":5,""avatar_change"":2,""avatar_count"":10,""avatar_build"":""https://cdn.topbangkokclub.com/api/public/dl/VbfRjo1c/avatar/%avaNO%.png"",""avatar_fb"":""https://graph.facebook.com/v9.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%"",""name_fb"":""https://graph.facebook.com/%userID%/?fields=name&access_token=%token%"",""text"":[{""lang"":""EN"",""url"":""https://conf.topbangkokclub.com/textEnglish""},{""lang"":""THAI"",""url"":""https://conf.topbangkokclub.com/textThai""}],""url_help"":"""",""bundleID"":""71D97F59-4763-5A1E-8862-B29980CF2D4C"",""version"":""1.00"",""operatorID"":7000,""os"":""android_unity"",""publisher"":""dummy_co_1_10"",""disID"":1007,""fbprivateappid"":"""",""fanpageID"":"""",""groupID"":"""",""hotline"":"""",""listGame"":[{""id"":8015,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8100,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8013,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8010,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8802,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9008,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":9007,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8818,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9950,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9900,""ip"":""35.240.208.204"",""ip_dm"":""app1.topbangkokclub.com"",""agSvipMin"":25000,""v_tb"":2}],""u_chat_fb"":"""",""infoChip"":"""",""infoDT"":"""",""infoBNF"":"""",""url_rule_js_new"":"""",""delayNoti"":[{""time"":5,""title"":""Pusoy"",""text"":""⚡️ Chip Free ⚡️"",""ag"":100000},{""time"":600,""title"":""Pusoy"",""text"":""💰Chip Free 💰"",""ag"":0},{""time"":86400,""title"":""Pusoy"",""text"":""⏰ Chip Free ⏰"",""ag"":0}],""data0"":false,""infoUser"":"""",""umode"":4,""uop1"":""Quit"",""umsg"":""This version don't allow to play game"",""utar"":"""",""newest_versionUrl"":""""}";

        //}
        //else
        //{
        config_info = "{\"gamenotification\":false,\"is_reg\":false,\"isShowLog\":false,\"is_login_guest\":true,\"is_login_fb\":true,\"time_request\":5,\"avatar_change\":2,\"avatar_count\":10,\"avatar_build\":\"https://cdn.tongitsonline.com/api/public/dl/ierd34s/images/avatar/%avaNO%.png?inline=true\",\"avatar_fb\":\"https://graph.facebook.com/v10.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%\",\"name_fb\":\"https://graph.facebook.com/%userID%/?fields=name&access_token=%token%\",\"contentChat\":\"https://cfg.jakartagames.net/contentChat\",\"bundleID\":\"diamond.domino.slots\",\"version\":\"1.00\",\"operatorID\":7000,\"os\":\"android_cocosjs\",\"publisher\":\"config_offline_android\",\"disID\":1005,\"fbprivateappid\":\"\",\"fanpageID\":\"\",\"groupID\":\"\",\"hotline\":\"\",\"listGame\":[{\"id\":8009,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8010,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8020,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8021,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8044,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8805,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":8818,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9007,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9008,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9500,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9501,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9900,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9950,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9011,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2}],\"u_chat_fb\":\"\",\"infoUser\":\"https://cfg.jakartagames.net/infoUser\",\"umode\":0,\"uop1\":\"OK\",\"umsg\":\"\",\"utar\":\"\",\"uop2\":\"Cancel\",\"newest_versionUrl\":\"https://play.google.com/store/apps/details?id=diamond.domino.slots\"}";
        //}
        if (Application.platform == RuntimePlatform.Android)
        {
            this.config_info = "{\"gamenotification\":false,\"is_reg\":false,\"isShowLog\":false,\"is_login_guest\":true,\"is_login_fb\":true,\"time_request\":5,\"avatar_change\":2,\"avatar_count\":10,\"avatar_build\":\"https://cdn.tongitsonline.com/api/public/dl/ierd34s/images/avatar/%avaNO%.png?inline=true\",\"avatar_fb\":\"https://graph.facebook.com/v10.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%\",\"name_fb\":\"https://graph.facebook.com/%userID%/?fields=name&access_token=%token%\",\"contentChat\":\"https://cfg.jakartagames.net/contentChat\",\"bundleID\":\"indo.test\",\"version\":\"1.00\",\"operatorID\":7000,\"os\":\"android_cocosjs\",\"publisher\":\"config_offline_android\",\"disID\":1005,\"fbprivateappid\":\"\",\"fanpageID\":\"\",\"groupID\":\"\",\"hotline\":\"\",\"listGame\":[{\"id\":8009,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8010,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8020,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8021,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8044,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8805,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":8818,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9007,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9008,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9500,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9501,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9900,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9950,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9011,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2}],\"u_chat_fb\":\"\",\"infoUser\":\"https://cfg.jakartagames.net/infoUser\",\"umode\":0,\"uop1\":\"OK\",\"umsg\":\"\",\"utar\":\"\",\"uop2\":\"Cancel\",\"newest_versionUrl\":\"https://play.google.com/store/apps/details?id=indo.test\"}";
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            this.config_info = @"{""gamenotification"":false,""allowPushOffline"":true,""is_reg"":false,""isShowLog"":true,""is_login_guest"":true,""is_login_fb"":true,""time_request"":5,""avatar_change"":2,""avatar_count"":10,""avatar_build"":""https://storage.googleapis.com/cdn.davaogames.com/img/avatar/%avaNO%.png"",""avatar_fb"":""https://graph.facebook.com/v10.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%"",""listGame"":[{""id"":8091,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8044,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8090,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8088,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":6688,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":9007,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8802,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8011,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8808,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8012,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9008,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":9500,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":10000,""v_tb"":2},{""id"":8803,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8010,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":1111,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2},{""id"":8818,""ip"":""34.87.57.36"",""ip_dm"":""app2.davaogames.com"",""agSvipMin"":25000,""v_tb"":2}],""bundleID"":""bitbet.global.tongits"",""version"":""1.05"",""operatorID"":7000,""os"":""ios_cocosjs"",""publisher"":""config_offline_ios"",""disID"":1007,""fbprivateappid"":"""",""fanpageID"":"""",""groupID"":"""",""hotline"":"""",""u_chat_fb"":"""",""infoUser"":""https://n.cfg.davaogames.com/infoUser"",""umode"":0,""uop1"":""OK"",""umsg"":"""",""utar"":"""",""uop2"":""Cancel"",""newest_versionUrl"":""https://play.google.com/store/apps/details?id=bitbet.global.tongits""}';this.config_PM='[{""type"":""iap"",""title"":""iap"",""title_img"":""https://storage.googleapis.com/cdn.davaogames.com/img/shop/IAPIOS.png"",""items"":[{""url"":""bitbet.global.tongits.1"",""txtPromo"":""1USD=392,727Chips"",""txtChip"":""388,800Chips"",""txtBuy"":""0.99USD"",""txtBonus"":""0%"",""cost"":1},{""url"":""bitbet.global.tongits.2"",""txtPromo"":""1USD=390,754Chips"",""txtChip"":""777,600Chips"",""txtBuy"":""1.99USD"",""txtBonus"":""0%"",""cost"":2},{""url"":""bitbet.global.tongits.5"",""txtPromo"":""1USD=389,579Chips"",""txtChip"":""1,944,000Chips"",""txtBuy"":""4.99USD"",""txtBonus"":""0%"",""cost"":5},{""url"":""bitbet.global.tongits.10"",""txtPromo"":""1USD=486,486Chips"",""txtChip"":""4,860,000Chips"",""txtBuy"":""9.99USD"",""txtBonus"":""25%"",""cost"":10},{""url"":""bitbet.global.tongits.20"",""txtPromo"":""1USD=486,243Chips"",""txtChip"":""9,720,000Chips"",""txtBuy"":""19.99USD"",""txtBonus"":""25%"",""cost"":20},{""url"":""bitbet.global.tongits.50"",""txtPromo"":""1USD=486,097Chips"",""txtChip"":""24,300,000Chips"",""txtBuy"":""49.99USD"",""txtBonus"":""25%"",""cost"":50}]}]";
        }
        else
        {
            this.config_info = "{\"gamenotification\":false,\"is_reg\":false,\"isShowLog\":false,\"is_login_guest\":true,\"is_login_fb\":true,\"time_request\":5,\"avatar_change\":2,\"avatar_count\":10,\"avatar_build\":\"https://cdn.tongitsonline.com/api/public/dl/ierd34s/images/avatar/%avaNO%.png?inline=true\",\"avatar_fb\":\"https://graph.facebook.com/v10.0/%fbID%/picture?width=200&height=200&redirect=true&access_token=%token%\",\"name_fb\":\"https://graph.facebook.com/%userID%/?fields=name&access_token=%token%\",\"contentChat\":\"https://cfg.jakartagames.net/contentChat\",\"bundleID\":\"diamond.domino.slots\",\"version\":\"1.00\",\"operatorID\":7000,\"os\":\"android_cocosjs\",\"publisher\":\"config_offline_ios\",\"disID\":1005,\"fbprivateappid\":\"\",\"fanpageID\":\"\",\"groupID\":\"\",\"hotline\":\"\",\"listGame\":[{\"id\":8009,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8010,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8020,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8021,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8044,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":8805,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":8818,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9007,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9008,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9500,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":10000,\"v_tb\":2},{\"id\":9501,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9900,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9950,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2},{\"id\":9011,\"ip\":\"8.213.193.230\",\"ip_dm\":\"app1.jakartagames.net\",\"agSvipMin\":25000,\"v_tb\":2}],\"u_chat_fb\":\"\",\"infoUser\":\"https://cfg.jakartagames.net/infoUser\",\"umode\":0,\"uop1\":\"OK\",\"umsg\":\"\",\"utar\":\"\",\"uop2\":\"Cancel\",\"newest_versionUrl\":\"https://play.google.com/store/apps/details?id=diamond.domino.slots\"}";
        }

        var configOff = PlayerPrefs.GetString("config_save", "");
        init();
        // handleConfigInfo(configOff.Equals("") ? config_info : configOff);
        // isLoadedConfig = false;
        // getConfigInfo();
    }

    void init()
    {
        Globals.Config.deviceId = SystemInfo.deviceUniqueIdentifier;
        //Globals.Config.versionGame = Application.version;

    }

    //IEnumerator GetRequest(string uri, WWWForm wwwForm, System.Action<string> callback)
    //{
    //    //Thread trd = new Thread(new ThreadStart(()=> {
    //    Globals.Logging.Log("-=-=uri " + uri);
    //    using (UnityWebRequest webRequest = UnityWebRequest.Post(uri, wwwForm))
    //        {
    //        // Request and wait for the desired page.
    //        yield return webRequest.SendWebRequest();

    //        Globals.Logging.Log("Received: " + webRequest.downloadHandler.text);
    //        //Globals.Logging.Log("Received code: " + webRequest.responseCode);

    //        if (!webRequest.isNetworkError)
    //        {
    //            callback.Invoke(webRequest.downloadHandler.text);
    //        }
    //        else {
    //            Globals.Logging.LogError(webRequest.error);
    //        }
    //        }
    //    //}));

    //    //trd.Start();
    //}

    async void ProgressHandle(string url, string json, Action<string> callback, Action callbackError = null)
    {
        UIManager.instance.showWaiting();
        UnityWebRequest www = new UnityWebRequest(url, "POST");

        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        www.uploadHandler = new UploadHandlerRaw(jsonToSend);
        www.downloadHandler = new DownloadHandlerBuffer();
        //uwr.SetRequestHeader("Content-Type", "application/json");
        www.certificateHandler = new CertificateWhore();
        // begin request:
        www.SetRequestHeader("Access-Control-Allow-Origin", "*");
        www.SetRequestHeader("Content-type", "application/json; charset=UTF-8");
        if (Application.isMobilePlatform)
            www.SetRequestHeader("X-Requested-With", "XMLHttpRequest");
        var asyncOp = www.SendWebRequest();


        //// await until it's done: 
        while (!asyncOp.isDone)
        {
            await Task.Yield();
            //await Task.Delay(200);//30 hertz
        }
        UIManager.instance.hideWatting();
        // read results:
        if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError || www.result == UnityWebRequest.Result.DataProcessingError)
        {
            Globals.Logging.Log("Error While Sending: " + www.error);
            if (callbackError != null)
            {
                callbackError.Invoke();
            }
            www.Dispose();
        }
        else
        {
            Globals.Logging.Log("Received: " + www.downloadHandler.text);
            callback.Invoke(www.downloadHandler.text);
            www.Dispose();
        }

        //StartCoroutine(GetRequest(url, json, callback));
    }

    //IEnumerator GetRequest(string url, string json, Action<string> callback, Action callbackError = null)
    //{

    //    //Globals.Logging.Log("===> datapost ===>> : " + json);
    //    UIManager.instance.showWatting();
    //    var uwr = new UnityWebRequest(url, "POST");
    //    byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
    //    uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
    //    uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
    //    //uwr.SetRequestHeader("Content-Type", "application/json");
    //    uwr.certificateHandler = new CertificateWhore();
    //    //    System.Net.ServicePointManager.ServerCertificateValidationCallback +=
    //    //(sender, certificate, chain, sslPolicyErrors) => true;

    //    uwr.SetRequestHeader("Access-Control-Allow-Origin", "*");
    //    uwr.SetRequestHeader("Content-type", "application/json; charset=UTF-8");
    //    if (Application.isMobilePlatform)
    //        uwr.SetRequestHeader("X-Requested-With", "XMLHttpRequest");

    //    //Send the request then wait here until it returns
    //    yield return uwr.SendWebRequest();

    //    UIManager.instance.hideWatting();
    //    if (uwr.result == UnityWebRequest.Result.ConnectionError)
    //    {
    //        Globals.Logging.Log("Error While Sending: " + uwr.error);
    //        if (callbackError != null)
    //        {
    //            callbackError.Invoke();
    //        }
    //    }
    //    else
    //    {
    //        Globals.Logging.Log("Received2: " + uwr.downloadHandler.text);
    //        callback.Invoke(uwr.downloadHandler.text);
    //    }
    //}

    JObject createBodyJsonNormal()
    {
        var osName = "android_unity";
        if (Application.platform == RuntimePlatform.Android)
            osName = "android_unity";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            osName = "ios_unity";

        //form.AddField("os", osName);
        //form.AddField("mcc", "[0,0]");

        JObject wWForm = new JObject();
        wWForm["version"] = Globals.Config.versionGame + "";
        wWForm["operatorID"] = Globals.Config.OPERATOR + "";
        // wWForm["bundleID"] = "tongits11.game.cocos"; //old
        wWForm["bundleID"] = "win777.unity.apk"; wWForm["publisher"] = "win777_unity_apk_100";
        wWForm["os"] = osName;
        wWForm["mcc"] = "[0,0]";
        if (Globals.User.userMain != null)
        {
            wWForm["vip"] = Globals.User.userMain.VIP + "";
        }
        return wWForm;
    }

    JObject createBodyJson()
    {
        var wWForm = createBodyJsonNormal();
        if (Globals.User.userMain != null)
        {
            wWForm["id"] = Globals.User.userMain.Userid + "";
            wWForm["ag"] = Globals.User.userMain.AG + "";
            wWForm["lq"] = Globals.User.userMain.LQ + "";
            wWForm["vip"] = Globals.User.userMain.VIP + "";
            wWForm["group"] = (int)Globals.User.userMain.Group + "";
        }
        return wWForm;
    }


    public void getConfigInfo()
    {
        //loadInfo();
        var wWForm = createBodyJsonNormal();
        Debug.Log("-=-=getConfigInfo   " + wWForm.ToString());
        //StartCoroutine(GetRequest(url_start, wWForm.ToString(), handleConfigInfo));
        ProgressHandle(url_start, wWForm.ToString(), handleConfigInfo);
    }


    public void getInfoUser(string _data0)
    {
        var wWForm = createBodyJson();
        if (Globals.Config.data0)
            wWForm["data0"] = _data0;

        Debug.Log("-=-=getInfoUser   " + wWForm.ToString());
        //StartCoroutine(GetRequest(Globals.Config.infoUser, wWForm.ToString(), handleUserInfo));
        ProgressHandle(Globals.Config.infoUser, wWForm.ToString(), handleUserInfo);
    }

    public void getInfoShop(Action<string> callback, Action callbackError = null)
    {
        var wWForm = createBodyJson();
        Globals.Logging.Log(wWForm);
        Globals.Logging.Log(Globals.Config.infoChip);

        Debug.Log("-=-=Globals.Config.infoChip===" + Globals.Config.infoChip);
        //StartCoroutine(GetRequest(Globals.Config.infoChip, wWForm.ToString(), callback, callbackError));
        ProgressHandle(Globals.Config.infoChip, wWForm.ToString(), callback, callbackError);
    }

    public void getInfoEX(Action<string> callback)
    {
        var wWForm = createBodyJson();
        //StartCoroutine(GetRequest(Globals.Config.infoDT, wWForm.ToString(), callback));
        ProgressHandle(Globals.Config.infoDT, wWForm.ToString(), callback);
    }

    public void getInfoBenefit(Action<string> callback)
    {
        var wWForm = createBodyJson();
        //StartCoroutine(GetRequest(Globals.Config.infoBNF, wWForm.ToString(), callback));
        ProgressHandle(Globals.Config.infoBNF, wWForm.ToString(), callback);
    }
    public void getTextConfig(string _url, string _language, bool isInit)
    {
        var wWForm = createBodyJsonNormal();
        //StartCoroutine(GetRequest(_url, wWForm.ToString(), (string strData) =>
        //{
        //    //Globals.Logging.Log("___ language  " + _language);
        //    //Globals.Logging.Log(_url + ": " + strData);
        //    JObject jConfig = null;
        //    try
        //    {
        //        jConfig = JObject.Parse(strData);
        //    }
        //    catch (Exception e)
        //    {
        //        Globals.Logging.LogException(e);
        //    }

        //    if (jConfig == null) return;
        //    var key = "config_text_" + _language.ToUpper();
        //    PlayerPrefs.SetString(key, strData);
        //    if (isInit)
        //        Globals.Config.loadTextConfig();
        //}));

        ProgressHandle(_url, wWForm.ToString(), (string strData) =>
        {
            //Globals.Logging.Log("___ language  " + _language);
            //Globals.Logging.Log(_url + ": " + strData);
            JObject jConfig = null;
            try
            {
                jConfig = JObject.Parse(strData);
            }
            catch (Exception e)
            {
                Globals.Logging.LogException(e);
            }

            if (jConfig == null) return;
            var key = "config_text_" + _language.ToUpper();
            PlayerPrefs.SetString(key, strData);
            if (isInit)
                Globals.Config.loadTextConfig();
        });
    }

    void handleConfigInfo(string strData)
    {
        PlayerPrefs.SetString("config_save", strData);
        isLoadedConfig = true;
        Globals.Logging.Log("-=-=handleConfigInfo: " + strData);
        JObject jConfig = null;
        try
        {
            jConfig = JObject.Parse(strData);
        }
        catch (Exception e)
        {
            Globals.Logging.LogException(e);
        }

        if (jConfig == null) return;
        //Globals.Logging.Log("-=-=-=-=-=-=-=-=-= 1");
        //Globals.Logging.Log(jConfig);

        if (jConfig.ContainsKey("gamenotification"))
            Globals.Config.gamenotification = (bool)jConfig["gamenotification"];
        if (jConfig.ContainsKey("allowPushOffline"))
            Globals.Config.allowPushOffline = (bool)jConfig["allowPushOffline"];
        if (jConfig.ContainsKey("is_reg"))
            Globals.Config.is_reg = (bool)jConfig["is_reg"];
        if (jConfig.ContainsKey("isShowLog"))
            Globals.Config.isShowLog = (bool)jConfig["isShowLog"];
        if (jConfig.ContainsKey("is_login_guest"))
            Globals.Config.is_login_guest = (bool)jConfig["is_login_guest"];
        if (jConfig.ContainsKey("is_login_fb"))
            Globals.Config.is_login_fb = (bool)jConfig["is_login_fb"];
        if (jConfig.ContainsKey("time_request"))
            Globals.Config.time_request = (int)jConfig["time_request"];
        if (jConfig.ContainsKey("avatar_change"))
            Globals.Config.avatar_change = (int)jConfig["avatar_change"];
        if (jConfig.ContainsKey("avatar_count"))
            Globals.Config.avatar_count = (int)jConfig["avatar_count"];
        if (jConfig.ContainsKey("avatar_build"))
            Globals.Config.avatar_build = (string)jConfig["avatar_build"];
        if (jConfig.ContainsKey("url_privacy_policy"))
            Globals.Config.url_privacy_policy = (string)jConfig["url_privacy_policy"];
        if (jConfig.ContainsKey("lotteryEnable"))
            Config.enableLottery = (bool)jConfig["lotteryEnable"];
        if (jConfig.ContainsKey("u_SIO"))
        {
            Globals.Config.u_SIO = (string)jConfig["u_SIO"];
            Globals.Logging.LogWarning("-=-=-u_SIO  " + Globals.Config.u_SIO);
            SocketIOManager.getInstance().intiSml();
            SocketIOManager.getInstance().startSIO();
        }
        else
        {
            Globals.Config.u_SIO = "";
        }

        if (jConfig.ContainsKey("avatar_fb"))
            Globals.Config.avatar_fb = (string)jConfig["avatar_fb"];
        if (jConfig.ContainsKey("name_fb"))
            Globals.Config.name_fb = (string)jConfig["name_fb"];
        if (jConfig.ContainsKey("text"))
        {
            Globals.Config.listTextConfig = jConfig["text"] as JArray;//arr
            for (var i = 0; i < Globals.Config.listTextConfig.Count; i++)
            {
                JObject itemLanguage = (JObject)Globals.Config.listTextConfig[i];
                getTextConfig((string)itemLanguage["url"], (string)itemLanguage["lang"], i >= Globals.Config.listTextConfig.Count - 1);
            }
        }
        if (jConfig.ContainsKey("disID"))
            Globals.Config.disID = (int)jConfig["disID"];

        Globals.Logging.Log("-=-=disID   " + Globals.Config.disID);
        if (jConfig.ContainsKey("fbprivateappid"))
            Globals.Config.fbprivateappid = (string)jConfig["fbprivateappid"];
        if (jConfig.ContainsKey("fanpageID"))
            Globals.Config.fanpageID = (string)jConfig["fanpageID"];
        else
            Globals.Config.fanpageID = "";
        if (jConfig.ContainsKey("groupID"))
            Globals.Config.groupID = (string)jConfig["groupID"];
        else
            Globals.Config.groupID = "";
        if (jConfig.ContainsKey("hotline"))
            Globals.Config.hotline = (string)jConfig["hotline"];
        else
            Globals.Config.hotline = "";

        if (jConfig.ContainsKey("listGame"))
        {
            Config.listGame = new();
            JArray tempListGameJA = jConfig["listGame"] as JArray;
            List<GAMEID> sortedListGI = new() {
                GAMEID.TONGITS_OLD, GAMEID.LUCKY9, GAMEID.PUSOY, GAMEID.TONGITS, GAMEID.TONGITS_JOKER,
                GAMEID.BACCARAT, GAMEID.LUCKY_89, GAMEID.SABONG, GAMEID.SICBO, GAMEID.SLOTTARZAN, GAMEID.SLOT_INCA,
                GAMEID.SLOT20FRUIT, GAMEID.SLOTNOEL, GAMEID.SLOT_JUICY_GARDEN, GAMEID.SLOT_SIXIANG
            };
            while (sortedListGI.Count > 0)
            {
                foreach (JToken item in tempListGameJA)
                {
                    if ((int)item["id"] == (int)sortedListGI[0])
                    {
                        Config.listGame.Add(item);
                        tempListGameJA.Remove(item);
                        sortedListGI.RemoveAt(0);
                        break;
                    }
                }
            }
            Config.listGame.AddRange(tempListGameJA);
        }
        Debug.Log("=-=-=-=-=-=-=-=-=- list agam");
        Debug.Log(Globals.Config.listGame);
        if (jConfig.ContainsKey("listTop"))
        {
            Globals.Config.listRankGame = jConfig["listTop"] as JArray;//array
        }
        else Globals.Config.listRankGame.Clear();
        if (jConfig.ContainsKey("u_chat_fb"))
            Globals.Config.u_chat_fb = (string)jConfig["u_chat_fb"];
        else Globals.Config.u_chat_fb = "";
        if (jConfig.ContainsKey("infoChip"))
        {
            Globals.Config.infoChip = (string)jConfig["infoChip"];
        }
        else
        {
            Globals.Config.infoChip = "";
        }
        if (jConfig.ContainsKey("infoDT"))
            Globals.Config.infoDT = (string)jConfig["infoDT"];
        else Globals.Config.infoDT = "";
        if (jConfig.ContainsKey("infoBNF"))
        {
            Globals.Config.infoBNF = (string)jConfig["infoBNF"];
            getInfoBenefit((res) =>
            {
                if (res == "") return;
                var objData = JObject.Parse(res);
                if (objData.ContainsKey("jackpot"))
                {
                    Globals.Config.listRuleJackPot.Clear();

                    var data = (JArray)objData["jackpot"];

                    for (var i = 0; i < data.Count; i++)
                    {
                        JObject item = new JObject();
                        item["gameid"] = data[i]["gameid"];
                        JArray arrMark = new JArray();
                        JArray arrChip = new JArray();
                        JArray mark = (JArray)data[i]["mark"];
                        JArray chip = (JArray)data[i]["chip"];

                        for (var id = 0; id < mark.Count; id++)
                        {
                            arrMark.Add(mark[id]);
                            arrChip.Add(chip[id]);
                        }
                        item["listMark"] = arrMark;
                        item["listChip"] = arrChip;
                        Globals.Config.listRuleJackPot.Add(item);
                        Globals.Config.listVipBonusJackPot.Add(data[i]["bonus_vip"]);
                    }
                }

                if (objData.ContainsKey("agContactAd"))
                    Globals.Config.agContactAd = (int)objData["agContactAd"];
                if (objData.ContainsKey("agRename"))
                    Globals.Config.agRename = (int)objData["agRename"];

            });
        }
        if (jConfig.ContainsKey("url_rule_js_new"))
            Globals.Config.url_rule = (string)jConfig["url_rule_js_new"];
        else
            Globals.Config.url_rule = "";
        if (jConfig.ContainsKey("url_help"))
            Globals.Config.url_help = (string)jConfig["url_help"];
        else
            Globals.Config.url_help = "";
        if (jConfig.ContainsKey("url_rule_refGuide"))
            Globals.Config.url_rule_refGuide = (string)jConfig["url_rule_refGuide"];
        if (jConfig.ContainsKey("delayNoti"))
            Globals.Config.delayNoti = jConfig["delayNoti"] as JArray;//array
        Globals.Config.data0 = jConfig.ContainsKey("") ? (bool)jConfig["data0"] : false;
        if (jConfig.ContainsKey("infoUser"))
            Globals.Config.infoUser = (string)jConfig["infoUser"];
        else
            Globals.Config.infoUser = "";

        if (jConfig.ContainsKey("newest_versionUrl"))
            Globals.Config.newest_versionUrl = (string)jConfig["newest_versionUrl"];
        if (jConfig.ContainsKey("apkfull"))
            Config.ApkFullUrl = (string)jConfig["apkfull"];
        var umode = jConfig.ContainsKey("umode") ? (int)jConfig["umode"] : 0;
        var uop1 = jConfig.ContainsKey("uop1") ? (string)jConfig["uop1"] : "";
        var uop2 = jConfig.ContainsKey("uop2") ? (string)jConfig["uop2"] : "";
        var umsg = jConfig.ContainsKey("umsg") ? (string)jConfig["umsg"] : "";
        var utar = jConfig.ContainsKey("utar") ? (string)jConfig["utar"] : "";
        //Globals.Logging.Log("dmmm    " + umode);
        updateConfigUmode(umode, uop1, uop2, utar, umsg);
        UIManager.instance.refreshUIFromConfig();
        PlayerPrefs.Save();
    }

    void handleUserInfo(string strData)
    {
        //-=-= handleUserInfo { "bundleID":"7E26B7BB-77C6-5938-AF2B-401DFB79724A","version":"1.00","operatorID":7000,"os":"android_unity","publisher":"dummy_co_1_10","disID":1006,"ketPhe":5,"is_dt":true,"ketT":true,"ket":true,"ismaqt":true,"is_bl_salert":true,"is_bl_fb":true,"is_xs":false}
        Globals.Logging.Log("-=-=handleUserInfo " + strData);
        JObject jConfig = null;
        try
        {
            jConfig = JObject.Parse(strData);
        }
        catch (Exception e)
        {
            Globals.Logging.LogException(e);
        }

        if (jConfig == null) return;
        Globals.Logging.Log("-------------------->Config Game<------------------>\n" + jConfig);

        if (jConfig.ContainsKey("disID"))
            Globals.Config.disID = (int)jConfig["disID"];

        Globals.Config.ketPhe = jConfig.ContainsKey("ketPhe") ? (int)jConfig["ketPhe"] : 10;
        Globals.Config.is_dt = jConfig.ContainsKey("is_dt") ? (bool)jConfig["is_dt"] : false;
        Globals.Config.ketT = jConfig.ContainsKey("ketT") ? (bool)jConfig["ketT"] : false;
        Globals.Config.ket = jConfig.ContainsKey("ket") ? (bool)jConfig["ket"] : false;
        Globals.Config.ismaqt = jConfig.ContainsKey("ismaqt") ? (bool)jConfig["ismaqt"] : false;
        Globals.Config.is_bl_salert = jConfig.ContainsKey("is_bl_salert") ? (bool)jConfig["is_bl_salert"] : false;
        Globals.Config.is_bl_fb = jConfig.ContainsKey("is_bl_fb") ? (bool)jConfig["is_bl_fb"] : false;
        Globals.Config.is_xs = jConfig.ContainsKey("is_xs") ? (bool)jConfig["is_xs"] : false;
        Globals.Config.show_new_alert = jConfig.ContainsKey("show_new_alert") ? (bool)jConfig["show_new_alert"] : false;

        if (UIManager.instance.gameView == null) UIManager.instance.showLobbyScreen(true);
        UIManager.instance.refreshUIFromConfig();
    }

    void updateConfigUmode(int umode, string uop1, string uop2, string utar, string umsg)
    {
        //// let umode = 0; /*FIXED CHANGE WHEN RELEASE*/
        umode = 0;//dev de test
        switch (umode)
        {
            case 0: // mode == 0, vao thang ko can hoi
                    //cc.NGWlog('umode0: show login');
                break;
            case 1: // mode == 1, hoi update, 2 lua chon
                UIManager.instance.showDialog(umsg, uop1, () =>
                {
                    Application.OpenURL(utar);
                    Application.Quit();
                }, uop2);
                break;
            case 2: // mode == 2, hoi update, khong lua chon
                UIManager.instance.showDialog(umsg, uop1, () =>
                {
                    Application.OpenURL(utar);
                    Application.Quit();
                });
                break;
            case 3: // mode == 3, thong bao, 1 lua chon OK va vao game
                UIManager.instance.showMessageBox(umsg);
                break;
            case 4:// mode == 4, thong bao, 1 lua chon OK va finish
                UIManager.instance.showMessageBox(umsg, () =>
                {
                    Application.Quit();
                });
                break;
        }
    }
}
