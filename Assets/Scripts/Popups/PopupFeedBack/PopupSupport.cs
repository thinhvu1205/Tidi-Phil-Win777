using Globals;
using UnityEngine;

public class PopupSupport : BaseView
{

    public void OnclickTele()
    {
        Application.OpenURL(Config.chat_tele_support_link);
    }

    public void OnclickMess()
    {
        Application.OpenURL(Config.chat_support_link);
    }
    public void OnclickClose()
    {
        SoundManager.instance.soundClick();
        hide();
    }
    
}
