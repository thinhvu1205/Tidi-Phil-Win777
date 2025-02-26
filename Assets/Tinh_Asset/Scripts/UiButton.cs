
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace UiPopup
{
    public class UiButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler,
        IPointerEnterHandler
    {
        public bool interactable = true;
        public UnityEvent onClick;

        private const float Duration = 0.1f;
        private bool _entered;
        private Tween _t;

        private readonly Vector3 _scale = new(0.8f, 0.8f, 1);

        public void OnPointerDown(PointerEventData eventData)
        {
            //TODO:Tinh_PlaySoundHere
            _t?.Kill();
            _t = transform.DOScale(_scale, Duration).SetEase(Ease.Linear).OnComplete(() => _t?.Kill());
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _t?.Kill();
            _t = transform.DOScale(Vector3.one, Duration).SetEase(Ease.Linear).OnComplete(() => _t?.Kill());
            if (_entered)
            {
                if(interactable) onClick?.Invoke();
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            _entered = false;
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            _entered = true;
        }
    }
}