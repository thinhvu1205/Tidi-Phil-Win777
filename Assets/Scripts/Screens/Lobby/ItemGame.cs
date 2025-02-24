using System.Collections;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ItemGame : MonoBehaviour
{
    [SerializeField]
    SkeletonGraphic skeletonGraphic;

    [SerializeField]
    TextNumberControl m_JackPotTNC;

    [HideInInspector]
    public int gameID;
    System.Action callbackClick = null;
    public void setInfo(int _gameID, SkeletonDataAsset skeAnim, Sprite _icon, Material material, System.Action callback)
    {
        gameID = _gameID;
        if (gameID == (int)Globals.GAMEID.RONGHO)
        {
            skeletonGraphic.transform.localPosition = new Vector2(0, 13);
        }
        else
        {
            skeletonGraphic.transform.localPosition = new Vector2(0, 0);
        }
        callbackClick = callback;
        if (skeAnim != null)
        {
            skeletonGraphic.gameObject.SetActive(true);
            //icon.gameObject.SetActive(false);

            skeletonGraphic.skeletonDataAsset = skeAnim;
            skeletonGraphic.material = material;
            if (_gameID == (int)Globals.GAMEID.RONGHO)
            {
                skeletonGraphic.allowMultipleCanvasRenderers = true;
            }
            var ab = skeAnim.GetSkeletonData(false).Animations.ToArray();
            var nameAnim = ab[ab.Length - 1].Name;

            skeletonGraphic.Initialize(true);
            skeletonGraphic.startingAnimation = nameAnim;
            skeletonGraphic.AnimationState.SetAnimation(0, nameAnim, true);
        }
        else
        {
            //icon.gameObject.SetActive(true);
            //skeletonGraphic.skeletonDataAsset = null;
            //skeletonGraphic.gameObject.SetActive(false);
            //icon.sprite = _icon;
            //icon.SetNativeSize();
            //GetComponent<RectTransform>().sizeDelta = icon.rectTransform.sizeDelta;
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
