using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Day : MonoBehaviour
{
    public TextMeshProUGUI textDay, textChipBonus, textButtonReceive;
    public Image imageCoin, imageTick, imageBoxChip;
    public Image imageFrame;
    public Button buttonReceive;
    public int IdDay;
    void OnEnable()
    {
        textDay.text = $"Day {IdDay + 1}";
    }
    void Start()
    {
        buttonReceive.onClick.AddListener(ClickButtonReceive);
    }
    private void ClickButtonReceive()
    {
        SocketSend.sendReceiveDailyBonus();
        CheckinBonus.instance.SetDayReceived(IdDay);
        SocketSend.sendUAG();
    }
}
