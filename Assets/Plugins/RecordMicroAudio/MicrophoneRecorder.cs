using System;
using System.Collections;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;


public class MicrophoneRecorder : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private GameObject m_Root;
    [SerializeField] private AudioSource m_DataAS;
    [SerializeField] private TextMeshProUGUI m_RecordingTimeTMPUI, m_InstructionTMPUI;
    private byte[] _AudioBytes;
    private const int _SAMPLE_RATE = 16000;
    private AudioClip _MicAC;
    private Action _OnStartRecordingCb, _OnRecordingCb, _OnEndRecordingCb;
    private Coroutine _RecordingC;
    private string _MicDevice;
    private int _RecordingDuration = 30;
    private bool _IsRecording;

    private float _StartTime;
    #region Button
    public void DoClickClose()
    {
        m_Root.SetActive(false);
    }
    #endregion
    public void test(float[] data)
    {
        _MicAC.SetData(data, 0);
        m_DataAS.clip = _MicAC;
        m_DataAS.Play();
    }
    [ContextMenu("test")]
    public void t()
    {
        byte[] returnedBytes;
        using (MemoryStream output = new())
        {
            using (GZipStream gzip = new(output, System.IO.Compression.CompressionLevel.Optimal))
            {
                gzip.Write(_AudioBytes, 0, _AudioBytes.Length);
            }
            returnedBytes = output.ToArray();
        }
        byte[] reversedBytes;
        using (MemoryStream input = new(returnedBytes))
        {
            using (GZipStream gzip = new(input, System.IO.Compression.CompressionMode.Decompress))
            {
                using (MemoryStream output = new())
                {
                    gzip.CopyTo(output);
                    reversedBytes = output.ToArray();
                }
            }
        }
        int totalSamples = reversedBytes.Length / 4;
        float[] samples = new float[totalSamples];
        Buffer.BlockCopy(reversedBytes, 0, samples, 0, reversedBytes.Length);
        _MicAC.SetData(samples, 0);
        m_DataAS.clip = _MicAC;
        m_DataAS.Play();
    }
    public void SetData(int duration, Action onStartCb = null, Action onRecordingCb = null, Action onEndCb = null)
    {
        if (duration <= 0) return;
        _RecordingDuration = duration;
        _OnStartRecordingCb = onStartCb;
        _OnRecordingCb = onRecordingCb;
        _OnEndRecordingCb = onEndCb;
        m_InstructionTMPUI.text = "Tap and hold for up to " + _RecordingDuration + "s to record.";
    }
    public bool IsDeviceHasMicro() { return Microphone.devices.Length > 0; }
    public byte[] GetBytes() { return _AudioBytes; }
    public void PlayRecord(float[] samples = null)
    {
        if (samples != null) _MicAC.SetData(samples, 0);
        m_DataAS.clip = _MicAC;
        m_DataAS.Play();
    }
    private Stopwatch testSW = new Stopwatch();
    public void OnPointerDown(PointerEventData eventData)
    {
        testSW.Reset();
        testSW.Start();
        _StartTime = Time.realtimeSinceStartup;
        _RecordingC = StartCoroutine(_Recording());
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        if (!_IsRecording) return;
        _EndRecording();
        if (_RecordingC != null) StopCoroutine(_RecordingC);
        _OnEndRecordingCb?.Invoke();
    }
    private void _EndRecording()
    {
        Microphone.End(_MicDevice);
        _MicAC = _TrimAudioClip();
        m_RecordingTimeTMPUI.gameObject.SetActive(false);

    }
    private AudioClip _TrimAudioClip()
    {
        float recordedLength = Time.realtimeSinceStartup - _StartTime;
        int samplesLength = (int)(_MicAC.frequency * recordedLength);
        float[] samples = new float[samplesLength];
        _MicAC.GetData(samples, 0);
        _AudioBytes = new byte[samples.Length * 4];
        Buffer.BlockCopy(samples, 0, _AudioBytes, 0, _AudioBytes.Length);
        UnityEngine.Debug.Log("xem frequence may" + _MicAC.frequency+"  "+AudioSettings.outputSampleRate);
        AudioClip trimmedAC = AudioClip.Create(_MicAC.name, samplesLength, _MicAC.channels, _SAMPLE_RATE, false);
        trimmedAC.SetData(samples, 0);
        return trimmedAC;
    }

    private IEnumerator _Recording()
    {
        _IsRecording = true;
        _MicAC = Microphone.Start(_MicDevice, false, _RecordingDuration, _SAMPLE_RATE);
        // m_InstructionTMPUI.gameObject.SetActive(false);
        m_RecordingTimeTMPUI.gameObject.SetActive(true);
        m_RecordingTimeTMPUI.text = "00:00:00";
        _OnStartRecordingCb?.Invoke();
        int countDownTime = _RecordingDuration;
        while (countDownTime > 0)
        {

            countDownTime -= 1;
            _OnRecordingCb?.Invoke();
            int time = _RecordingDuration - countDownTime;
            if (time > 0) m_RecordingTimeTMPUI.text = string.Format("{0:00}:{1:00}:{2:00}",
                Mathf.FloorToInt(time / 60 / 60), Mathf.FloorToInt(time / 60 % 60), Mathf.FloorToInt(time % 60));
            yield return new WaitForSecondsRealtime(1f);
        }
        _EndRecording();
        if (_OnEndRecordingCb == null) DoClickClose();
        else _OnEndRecordingCb.Invoke();
        _IsRecording = false;
    }

    private void Start()
    {
        if (IsDeviceHasMicro()) _MicDevice = Microphone.devices[0];
    }
}
