using System.Collections;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;
using TMPro;
using Globals;
using UnityEngine.UI.Extensions;


public class ItemGame : MonoBehaviour
{
    [SerializeField] SkeletonGraphic m_LargeSG, m_SmallSG;
    [SerializeField] TextNumberControl m_JackPotTNC;
    [HideInInspector] public int GameId;
    System.Action callbackClick = null;

    public void setInfo(int _gameID, SkeletonDataAsset skeAnim, Material material, System.Action callback, bool isShowAllGames = true)
    {
        GameId = _gameID;
        callbackClick = callback;
        if (skeAnim != null)
        {
            bool isBigSG = (!isShowAllGames && Config.listGameSlot.Contains(GameId)) ||
                GameId == (int)GAMEID.TONGITS_OLD || GameId == (int)GAMEID.PUSOY || GameId == (int)GAMEID.LUCKY9;
            SkeletonGraphic shownSG = isBigSG ? m_LargeSG : m_SmallSG;
            shownSG.transform.parent.gameObject.SetActive(true);

            shownSG.skeletonDataAsset = skeAnim;
            shownSG.material = material;
            Spine.Animation[] ab = skeAnim.GetSkeletonData(false).Animations.ToArray();
            string nameAnim = ab[ab.Length - 1].Name;
            shownSG.Initialize(true);
            shownSG.startingAnimation = nameAnim;
            shownSG.AnimationState.SetAnimation(0, nameAnim, true);
        }
    }
    public void UpdateJackpot(long number)
    {
        m_JackPotTNC.setValue(number, true);
        m_JackPotTNC.transform.parent.gameObject.SetActive(true);
    }

    public void onClick()
    {
        if (callbackClick != null)
        {
            callbackClick.Invoke();
        }
    }
}
