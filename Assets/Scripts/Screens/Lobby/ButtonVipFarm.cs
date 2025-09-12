using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Spine.Unity;
using TMPro;
using DG.Tweening;
using Globals;

public class ButtonVipFarm : MonoBehaviour
{
    [SerializeField] private List<Sprite> listFG = new List<Sprite>();
    [SerializeField] private TextMeshProUGUI txtPercentVipFarm;
    [SerializeField] private Image imgFG;
    [SerializeField] private SkeletonGraphic animBar;
    private float _farmPercent;

    #region Button
    public void OnClickVipFarm()
    {
        SoundManager.instance.soundClick();
        UIManager.instance.openVipFarm();
    }
    #endregion
    public void SetData(float farmPercent)
    {
        _farmPercent = farmPercent;
        txtPercentVipFarm.text = farmPercent + "%";
        bool isFull = _farmPercent >= 100;
        animBar.gameObject.SetActive(isFull);
        imgFG.gameObject.SetActive(!isFull);
        if (!isFull)
        {
            imgFG.sprite = listFG[farmPercent >= 100f ? 1 : 0];
            imgFG.DOFillAmount(farmPercent / 100, 0.3f);
        }
    }
    public float GetFarmPercent()
    {
        return _farmPercent;
    }
    private void OnDestroy()
    {
        UIManager.instance.UpdateVipFarmsList(this, false);
    }
    private void OnEnable()
    {
        SocketSend.getFarmInfo();
    }
    private void Start()
    {
        if (User.userMain != null) gameObject.SetActive(User.userMain.VIP > 1);
        UIManager.instance.SetDataVipFarmList();
        if (gameObject.activeSelf) StartCoroutine(ContinuouslyGetVipFarm());
    }
    private IEnumerator ContinuouslyGetVipFarm()
    {
        while (UIManager.instance.gameView != null && gameObject.activeSelf)
        {
            yield return new WaitForSecondsRealtime(20f);
            SocketSend.getFarmInfo();
        }
    }
    private void Awake()
    {
        UIManager.instance.UpdateVipFarmsList(this, true);
    }
}
