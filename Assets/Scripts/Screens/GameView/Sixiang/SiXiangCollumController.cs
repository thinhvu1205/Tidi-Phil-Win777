using DG.Tweening;
using Globals;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class SiXiangCollumController : CollumController
{
    // Start is called before the first frame update

    protected override void Start()
    {
        base.Start();
    }
    public override void stopCollumCompleted()
    {
        base.stopCollumCompleted();
      
    }
    public IEnumerator checkWildSpread()
    {
        float timeDelay = slotView.spintype == BaseSlotView.SPIN_TYPE.NORMAL ? 2f : 1.33f;
        float timeScale = slotView.spintype == BaseSlotView.SPIN_TYPE.NORMAL ? 1f : 1.5f;
        SiXiangSymbolController symbolWild = (SiXiangSymbolController)listSymbols.Find(symbol =>
         {
             return (symbol.id == 9 && symbol.indexSymbol != 0);

         });
        if (symbolWild != null)
        {
            symbolWild.showWild(timeScale);
            yield return new WaitForSeconds(timeDelay);
            if (symbolWild.indexSymbol > 0)
            {
                yield return showWildSpread(symbolWild.indexSymbol);
            }
        }

    }
    private IEnumerator showWildSpread(int indexWild)
    {
       
        List<IEnumerator> coroutines = new List<IEnumerator>();
        float timeDelay = slotView.spintype == BaseSlotView.SPIN_TYPE.NORMAL ? 2f : 1.33f;
        float timeScale = slotView.spintype == BaseSlotView.SPIN_TYPE.NORMAL ? 1f : 1.5f;
        for (int i = 0; i < listSymbols.Count; i++)
        {
            SiXiangSymbolController symbol = (SiXiangSymbolController)listSymbols[i];
            SymbolController symbolWild = getSylbolFromIndex(indexWild);
            if (symbol.indexSymbol != indexWild && symbol.indexSymbol > 0) //check ne thang wild ra de move spine den vi tri 2 thang nay
            {
                Vector2 wildItemPos = symbolWild.transform.localPosition;
                coroutines.Add(symbol.showEffectSpeadWild(wildItemPos));
            }

            symbolWild.setSpine(9, timeScale);
            DOTween.Sequence().AppendInterval(timeDelay).AppendCallback(() =>
            {
                symbolWild.spine.gameObject.SetActive(false);
            });
        }
        foreach (var coroutine in coroutines)
        {
            yield return StartCoroutine(coroutine);
        }
    }
    public bool checkWildSymbol()
    {
        bool isHasWild = false;
        foreach (SymbolController symbol in listSymbols)
        {

            if (symbol.id == 9)
            {
                isHasWild = true;
            }
        }
        return isHasWild;
    }
    public bool checkScatterSymbol()
    {
        bool isHasScatter = false;
        foreach (SymbolController symbol in listSymbols)
        {

            if (symbol.id == 10)
            {
                isHasScatter = true;
            }
        }
        return isHasScatter;
    }
    // Update is called once per frame


}
