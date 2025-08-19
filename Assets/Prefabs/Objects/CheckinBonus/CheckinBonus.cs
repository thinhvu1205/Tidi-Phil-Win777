using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CheckinBonus : MonoBehaviour
{
    [SerializeField] private Button buttonDaily, buttonWeekly, buttonClose, buttonReceiveDaily;
    [SerializeField] private List<SkeletonGraphic> listAnimGiftDaily;
    [SerializeField] private List<TextMeshProUGUI> listTextChipBonusDaily;
    [SerializeField] private Image imageCurrentChipBonusDaily;
    [SerializeField] private List<Sprite> listSpriteCurrentChipBonus, listSpriteChipBonusGray;
    [SerializeField] private TextMeshProUGUI textCurrentChipBonusDaily;
    [SerializeField] private Sprite spriteChoose, spriteNotChoose, spriteButtonReceiveGray, spriteButtonReceiveGreen, spriteButtonReceiveYellow;
    [SerializeField] private Sprite spriteBoxGray, spriteBoxPurple, spriteBoxYellow, spriteBoxGrayDay7, spriteBoxPurpleDay7, spriteBoxYellowDay7;
    [SerializeField] private GameObject daily, weekly, popupCheckinBonus;
    [SerializeField] private Slider sliderDaily;
    [SerializeField] private List<Day> listDayWeekly;
    private Vector3 originalScale;
    void Awake()
    {
        originalScale = popupCheckinBonus.transform.localScale;
    }
    void OnEnable()
    {
        popupCheckinBonus.transform.localScale = originalScale;
        int[] values = { 5, 10, 20, 50, 100, 200, 500 };
        for (int i = 0; i < listTextChipBonusDaily.Count; i++)
        {
            listTextChipBonusDaily[i].text = $"{values[i]}k <sprite index=0>";
        }
        for (int i = 0; i < listDayWeekly.Count; i++)
        {
            listDayWeekly[i].textDay.text = $"Day {i + 1}";
            listDayWeekly[i].textChipBonus.text = $"{values[i] * 1000} <sprite index=0>";
            listDayWeekly[i].imageTick.gameObject.SetActive(false);
            listDayWeekly[i].imageCoin.sprite = listSpriteCurrentChipBonus[i];
            listDayWeekly[i].imageCoin.SetNativeSize();
        }
        textCurrentChipBonusDaily.text = $"10,000 <sprite index=0>";
        buttonDaily.onClick.AddListener(ClickButtonDaily);
        buttonWeekly.onClick.AddListener(ClickButtonWeekly);
        buttonClose.onClick.AddListener(ClickButtonClose);
    }
    void Start()
    {
        ClickButtonDaily();
    }

    private void ClickButtonDaily()
    {
        daily.SetActive(true);
        weekly.SetActive(false);
        buttonDaily.image.sprite = spriteChoose;
        buttonDaily.image.SetNativeSize();
        buttonWeekly.image.sprite = spriteNotChoose;
        buttonWeekly.image.SetNativeSize();
    }
    private void ClickButtonWeekly()
    {
        daily.SetActive(false);
        weekly.SetActive(true);
        buttonDaily.image.sprite = spriteNotChoose;
        buttonDaily.image.SetNativeSize();
        buttonWeekly.image.sprite = spriteChoose;
        buttonWeekly.image.SetNativeSize();
    }
    private void ClickButtonClose()
    {
        popupCheckinBonus.transform.DOScale(Vector3.zero, 0.25f)
            .SetEase(Ease.InBack)
            .OnComplete(() =>
            {
                gameObject.SetActive(false);
                popupCheckinBonus.transform.localScale = originalScale;
            });
    }
}