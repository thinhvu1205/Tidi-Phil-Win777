using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using DG.Tweening;
using Globals;
using Newtonsoft.Json.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ListBannerView : BaseView
{
    [SerializeField] private Transform m_PaginatesTf;
    [SerializeField] private RectTransform m_PrefBannerRT, m_PrefDotRT;
    [SerializeField] private ScrollRect m_BannersSR;
    private const float _SWIPE_TIME = .2f;
    private List<BannerView> _BannerBVs = new();
    private BannerView _BannerNowBV;
    private bool _IsInScrolling, _IsClicking;

    #region Button
    public void DoClickPrevious()
    {
        if (m_BannersSR.content.childCount <= 1) return;
        if (_IsClicking) return;
        _IsClicking = true;
        m_BannersSR.content.DOLocalMoveX(m_BannersSR.content.localPosition.x + m_PrefBannerRT.rect.width, _SWIPE_TIME)
        .OnComplete(() =>
        {
            _CheckOnEdge();
            _IsClicking = false;
        });
        _UpdatePaginateDots();
    }
    public void DoClickNext()
    {
        if (m_BannersSR.content.childCount <= 1) return;
        if (_IsClicking) return;
        _IsClicking = true;
        m_BannersSR.content.DOLocalMoveX(m_BannersSR.content.localPosition.x - m_PrefBannerRT.rect.width, _SWIPE_TIME)
        .OnComplete(() =>
        {
            _CheckOnEdge();
            _IsClicking = false;
        });
        _UpdatePaginateDots();
    }
    #endregion
    private async void _LoadListBanner()
    {
        // for (int i = 0; i < 5; i++)
        // {
        //     RectTransform go = Instantiate(m_PrefBannerRT, m_BannersSR.content);
        //     go.name = i.ToString();
        //     go.gameObject.SetActive(true);
        //     BannerView nodeBanner = go.GetComponentInChildren<BannerView>();
        //     nodeBanner.GetComponentInChildren<TextMeshProUGUI>().text = (i + 1).ToString();
        //     _BannerBVs.Add(nodeBanner);
        //     nodeBanner.transform.localScale = Vector3.one;
        //     GameObject dot = Instantiate(m_PrefDotRT, m_PaginatesTf).gameObject;
        //     dot.SetActive(true);
        // }

        for (int i = 0; i < Config.arrOnlistTrue.Count; i++)
        {
            JObject dataBanner = (JObject)Config.arrOnlistTrue[i];
            dataBanner["isClose"] = false;
            string urlImg = (string)dataBanner["urlImg"];
            Sprite spriteS = await Config.GetRemoteSprite(urlImg, true);
            if (spriteS == null) return;
            RectTransform go = Instantiate(m_PrefBannerRT, m_BannersSR.content);
            go.name = i.ToString();
            go.gameObject.SetActive(true);
            BannerView nodeBanner = go.GetComponentInChildren<BannerView>();
            _BannerBVs.Add(nodeBanner);
            nodeBanner.transform.localScale = Vector3.one;
            nodeBanner.setInfo(dataBanner, false, () => { hide(); }, spriteS);
            GameObject dot = Instantiate(m_PrefDotRT, m_PaginatesTf).gameObject;
            dot.SetActive(true);
        }
        if (_BannerBVs.Count <= 0) return;
        if (_BannerBVs.Count > 1)
        {
            Transform cloneFirstTf = Instantiate(_BannerBVs[0].transform.parent);
            Transform cloneLastTf = Instantiate(_BannerBVs[_BannerBVs.Count - 1].transform.parent);
            cloneFirstTf.SetParent(m_BannersSR.content);
            cloneLastTf.SetParent(m_BannersSR.content);
            cloneFirstTf.localScale = Vector3.one;
            cloneLastTf.localScale = Vector3.one;
            cloneFirstTf.SetAsLastSibling();
            cloneLastTf.SetAsFirstSibling();
            await Task.Yield();
            await Task.Yield();
            await Task.Yield();
            _BannerBVs.Insert(0, cloneLastTf.GetComponentInChildren<BannerView>());
            _BannerBVs.Add(cloneFirstTf.GetComponentInChildren<BannerView>());
            _BannerNowBV = _BannerBVs[1];
            m_BannersSR.content.anchoredPosition -= new Vector2(m_PrefBannerRT.rect.width, 0);
        }
        else _BannerNowBV = _BannerBVs[0];
        _UpdatePaginateDots();
    }
    private void _UpdatePaginateDots()
    {
        if (_BannerBVs.Count > 1)
        {
            for (int i = 0; i < m_PaginatesTf.childCount; i++)
                m_PaginatesTf.GetChild(i).GetChild(0).gameObject.SetActive(_BannerBVs.IndexOf(_BannerNowBV) == i + 1);
        }
        else m_PaginatesTf.GetChild(0).GetChild(0).gameObject.SetActive(true);
    }
    private Vector2 _FindNearestBannerLocalPos()
    {
        RectTransform contentRT = m_BannersSR.content, viewportRT = m_BannersSR.viewport;
        Vector2 returnedV2 = new();
        float minDistance = float.MaxValue;
        for (int i = 0; i < contentRT.childCount; i++)
        {
            RectTransform childRT = contentRT.GetChild(i).GetComponent<RectTransform>();
            Vector2 childWorldV2 = childRT.position, childLocalV2 = viewportRT.InverseTransformPoint(childWorldV2);
            float distance = childLocalV2.magnitude;
            if (distance < minDistance)
            {
                minDistance = distance;
                returnedV2 = childLocalV2;
                _BannerNowBV = childRT.GetComponentInChildren<BannerView>();
            }
        }
        return returnedV2;
    }
    private void _CheckOnEdge()
    {
        int lastId = _BannerBVs.Count - 1, countBanners = _BannerBVs.Count - 2, id = _BannerBVs.IndexOf(_BannerNowBV);
        if (id == 0)
        {
            _BannerNowBV = _BannerBVs[lastId - 1];
            m_BannersSR.content.anchoredPosition -= new Vector2(countBanners * m_PrefBannerRT.rect.width, 0);
        }
        else if (id == lastId)
        {
            _BannerNowBV = _BannerBVs[1];
            m_BannersSR.content.anchoredPosition += new Vector2(countBanners * m_PrefBannerRT.rect.width, 0);
        }
    }
    protected override void Update()
    {
        base.Update();
        if (_IsClicking) return;
        if (!Input.GetMouseButton(0))
        {
            if (!_IsInScrolling) return;
            _IsInScrolling = false;
            m_BannersSR.enabled = false;
            m_BannersSR.content.DOLocalMoveX(m_BannersSR.content.localPosition.x - _FindNearestBannerLocalPos().x, _SWIPE_TIME)
                .OnComplete(() =>
                {
                    _CheckOnEdge();
                    m_BannersSR.enabled = true;
                    _UpdatePaginateDots();
                });
        }
        else _IsInScrolling = true;
    }
    protected override void Start()
    {
        CURRENT_VIEW.setCurView(CURRENT_VIEW.NEWS_VIEW);
        m_PrefBannerRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, m_BannersSR.viewport.rect.width);
        m_PrefBannerRT.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, m_BannersSR.viewport.rect.height);
        _LoadListBanner();
    }
}
