using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json.Linq;
using Spine.Unity;
using System.Threading.Tasks;
using System;
using DG.Tweening;
using System.Threading;
using Globals;

public class DragonPearlItem : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] TextMeshProUGUI lbChipWin;
    [SerializeField] TextMeshProUGUI lbChipFSP;

    [SerializeField] Image BgItem;
    [SerializeField] SkeletonGraphic SpineItem;
    [SerializeField] List<Material> materialText = new List<Material>();
    [HideInInspector] SiXiangDragonPearlView dragonPearlView;
    public Task setInfoTask;
    public Task setInfoTask2;
    // public CancellationTokenSource cts_ShowEffectItem;
    private bool isCancelEffect = false;

    private string PATH_ANIM_GOLD = "GameView/SiXiang/Spine/DragonPearl/ItemGold/skeleton_SkeletonData";
    private string PATH_ANIM_LIXI = "GameView/SiXiang/Spine/DragonPearl/Lixi/skeleton_SkeletonData";
    private string PATH_ANIM_THANHLONG = "GameView/SiXiang/Spine/DragonPearl/ThanhLong/skeleton_SkeletonData";
    private string PATH_ANIM_BACHHO = "GameView/SiXiang/Spine/DragonPearl/BachHo/skeleton_SkeletonData";
    private string PATH_ANIM_CHUTUOC = "GameView/SiXiang/Spine/DragonPearl/ChuTuoc/skeleton_SkeletonData";
    private string PATH_ANIM_HUYENVU = "GameView/SiXiang/Spine/DragonPearl/HuyenVu/skeleton_SkeletonData";

    void Start()
    {
    }

    private IEnumerator HandleSymbolAnimation(SkeletonDataAsset skeData, JObject data)
    {
        if ((bool)data["isDoubled"]) //x2
        {
            // await Task.Delay(TimeSpan.FromSeconds(1.0f), cts_ShowEffectItem.Token);
            yield return new WaitForSeconds(1.0f);
        }
        
        if ((bool)data["isBonusSpin"]) 
        {
            yield return new WaitForSeconds(2.0f);
            Vector2 posChuTuoc = dragonPearlView.getPosSymbolChuTuoc();
            Vector2 posItem = dragonPearlView.getPosItem((int)data["col"], (int)data["row"]);
            GameObject itemGold = Instantiate(dragonPearlView.itemInitGold, dragonPearlView.transform);

            itemGold.transform.localPosition = dragonPearlView.transform.InverseTransformPoint(posChuTuoc);
            itemGold.SetActive(true);
            itemGold.transform.localScale = Vector2.one;
            itemGold.transform.DOLocalMove(dragonPearlView.transform.InverseTransformPoint(posItem), 1.0f)
                .SetEase(Ease.OutSine)
                .OnComplete(() => Destroy(itemGold));

            yield return new WaitForSeconds(1.0f);
        }

        BgItem.enabled = true;
        SpineItem.gameObject.SetActive(true);
        SpineItem.skeletonDataAsset = skeData;
        SpineItem.Initialize(true);
        SpineItem.AnimationState.SetAnimation(0, "start", false);
        SpineItem.transform.localPosition = Vector2.zero;
        SpineItem.transform.localScale = new Vector2(1, 1);

        yield return new WaitForSeconds(SpineItem.Skeleton.Data.FindAnimation("start").Duration);

        SpineItem.AnimationState.SetAnimation(0, "rung", false);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_SLOT_BASE.PEARL_Item_Normal);

        yield return new WaitForSeconds(SpineItem.Skeleton.Data.FindAnimation("rung").Duration / 2);

        lbChipWin.fontMaterial = materialText[0];
        lbChipWin.gameObject.SetActive(true);
        int itemWinAmount = (int)data["winAmount"];
        lbChipWin.text = Globals.Config.FormatMoney(itemWinAmount, true);
        lbChipWin.transform.localScale = Vector2.zero;
        lbChipWin.transform.DOScale(Vector2.one, 0.2f).SetEase(Ease.OutBack);
        SpineItem.AnimationState.SetAnimation(0, "normal", true);
    }

    private IEnumerator HandleLuckyMoney(JObject data)
    {
        string soundSymbol = Globals.SOUND_SLOT_BASE.PEARL_ITEM;
        BgItem.enabled = true;
        string pathEye = "";

        switch ((int)data["luckyMoney"])
        {
            case 1:
                pathEye = PATH_ANIM_HUYENVU;
                soundSymbol = Globals.SOUND_SLOT_BASE.PEARL_Phoenix;
                break;
            case 2:
                pathEye = PATH_ANIM_BACHHO;
                soundSymbol = Globals.SOUND_SLOT_BASE.PEARL_Tiger;
                break;
            case 3:
                pathEye = PATH_ANIM_CHUTUOC;
                soundSymbol = Globals.SOUND_SLOT_BASE.PEARL_Turtle;
                break;
            case 4:
                pathEye = PATH_ANIM_THANHLONG;
                soundSymbol = Globals.SOUND_SLOT_BASE.PEARL_Dragon;
                break;
        }

        SpineItem.gameObject.SetActive(true);
        SpineItem.transform.localPosition = Vector2.zero;
        SpineItem.skeletonDataAsset = UIManager.instance.loadSkeletonData(PATH_ANIM_LIXI);

        yield return new WaitForSeconds(0.1f);
        SpineItem.Initialize(true);
        SpineItem.AnimationState.SetAnimation(0, "animation", false);

        yield return new WaitForSeconds(SpineItem.Skeleton.Data.FindAnimation("animation").Duration);
        SoundManager.instance.playEffectFromPath(soundSymbol);

        SpineItem.skeletonDataAsset = UIManager.instance.loadSkeletonData(pathEye);

        yield return new WaitForSeconds(0.1f);
        SpineItem.Initialize(true);
        SpineItem.AnimationState.SetAnimation(0, "animation", false);
    }
    
    public IEnumerator setInfo(JObject data, SiXiangDragonPearlView dpView)
    {
        // cts_ShowEffectItem = SiXiangView.Instance.getCancelToken();
        dragonPearlView = dpView;
        // Task setInfoItemTask = new Task(() => { });
        UnityMainThread.instance.AddJob(() =>
        {
            if ((int)data["item"] != 1)
            {
                Action<SkeletonDataAsset> cb = (skeData) => { StartCoroutine(HandleSymbolAnimation(skeData, data)); };
                UnityMainThread.instance.AddJob(() =>
                {
                    StartCoroutine(UIManager.instance.loadSkeletonDataAsync(PATH_ANIM_GOLD, cb));
                });
            }
            else
            {
                StartCoroutine(HandleLuckyMoney(data));
            }
        });
        yield return null;
    }

    private string getAnimNameType(int type)
    {
        string name = "";
        switch (type)
        {
            case 1:
                name = "xanh";
                break;
            case 2:
                name = "bien";
                break;
            case 3:
                name = "tim";
                break;
            case 4:
                name = "do";
                break;
        }

        return name;
    }

    public void hideItem()
    {
        BgItem.enabled = false;
        SpineItem.gameObject.SetActive(false);
        lbChipWin.gameObject.SetActive(false);
        lbChipFSP.gameObject.SetActive(false);
    }

    public void setBgItem(Sprite spr)
    {
        BgItem.sprite = spr;
    }
}