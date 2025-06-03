using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using SimpleJSON;
using UnityEngine;
using UnityEngine.Networking;

public class BundleDownloader : MonoBehaviour
{
    private const string _STORED_BUNDLE_URL = "storedBundleUrl";
    private List<Coroutine> _SentGettingBundleCs = new();
    private List<BundleVersion> _NewDataBVs = new(), _StoredDataBVs = new();
    private Action _OnLoadingFailCb, _OnCompleteCb;
    private int _CountTotalBundles, _CountCachedBundles;

    public BundleLoader test;
    [ContextMenu("test")]
    public void t()
    {
        CheckAndDownloadAssets("D:/Unity projects/Tidi-Phil-Win777/Assets/AssetBundles");
    }
    public void CheckAndDownloadAssets(string url, Action onLoadingFailCb = null, Action onCompleteCb = null)
    {
        if (url.Equals("")) return;
        if (!url[^1].Equals('/')) url += "/"; // if it does not end with "/" then add it
        string platformFolder = "";
#if UNITY_ANDROID
        platformFolder = "/" + BundleHandler.PLATFORM.Android.ToString() + "/";
#elif UNITY_IOS
        platformFolder = "/" + BundleHandler.PLATFORM.iOS.ToString() + "/";
#endif
        if (!url.EndsWith(platformFolder)) url += platformFolder.Remove(0, 1);
        PlayerPrefs.SetString(_STORED_BUNDLE_URL, url);
        PlayerPrefs.Save();
        AssetBundle.UnloadAllAssetBundles(true);
        if (!url.Contains("://")) url = "file:///" + url;
        _OnLoadingFailCb = onLoadingFailCb;
        _OnCompleteCb = onCompleteCb;
        StartCoroutine(_GetAssetBundles(url));
    }
    private IEnumerator _GetAssetBundles(string url)
    {
        using UnityWebRequest aUWR = UnityWebRequest.Get(url + BundleHandler.CATEGORY); // get new category content from server
        yield return aUWR.SendWebRequest();

        if (aUWR.result != UnityWebRequest.Result.Success) Debug.Log("|   ) )=33 Get category fail: " + aUWR.error + " / Path: " + aUWR.uri);
        else
        {
            string newContent = aUWR.downloadHandler.text, storedPath = Application.persistentDataPath + "/" + BundleHandler.CATEGORY;
            if (!_TryParseCategory(_NewDataBVs, _TryParseJsonArray(newContent), url))
            {
                Debug.Log("|   ) )=33 Wrong latest bundle info!");
                _OnLoadingFailCb?.Invoke();
                yield break;
            }
            if (File.Exists(storedPath))
            {
                if (!_TryParseCategory(_StoredDataBVs, _TryParseJsonArray(File.ReadAllText(storedPath)), ""))
                {
                    Debug.Log("|   ) )=33 Wrong stored bundles info, clear all cached bundles!");
                    Caching.ClearCache();
                    File.Delete(storedPath);
                }
            }
            File.WriteAllText(storedPath, newContent);
            _ClearOldCachedBundleVersions();
            _CountTotalBundles = _NewDataBVs.Count;
            _CountCachedBundles = 0;
            if (_CountTotalBundles > 0)
            {
                _SetProgress(0);
                BundleHandler.MAIN.ClearAssetsDictionary();
                _SentGettingBundleCs.Add(StartCoroutine(_LoadAssetBundles()));
            }
            else _CompleteLoadingAssets();
        }
    }
    private IEnumerator _LoadAssetBundles()
    {
        if (_NewDataBVs.Count > 0)
        {
            BundleVersion thisBV = _NewDataBVs[0];
            while (!Caching.ready) yield return null;
            using UnityWebRequest aUWR = UnityWebRequestAssetBundle.GetAssetBundle(thisBV.Url, thisBV.HashH128, 0);
            thisBV.State = BundleVersion.STATE.Downloading;
            yield return aUWR.SendWebRequest();

            if (aUWR.result != UnityWebRequest.Result.Success)
            {
                Debug.Log("|   ) )=33 Error getting asset bundle: " + aUWR.error + " | " + aUWR.url);
                thisBV.State = BundleVersion.STATE.Cloud;
                _OnLoadingFailCb?.Invoke();
                foreach (Coroutine sentRequestC in _SentGettingBundleCs) StopCoroutine(sentRequestC);
            }
            else
            {
                thisBV.BundleAB = DownloadHandlerAssetBundle.GetContent(aUWR);
                thisBV.State = BundleVersion.STATE.Donwloaded;
                thisBV.AssetNamesHS = thisBV.BundleAB.GetAllAssetNames().ToHashSet();
                BundleHandler.MAIN.AddToLocalMap(thisBV);
                _NewDataBVs.Remove(thisBV);
                _CountCachedBundles += 1;
                _SentGettingBundleCs.Add(StartCoroutine(_LoadAssetBundles()));
            }
        }
        else _CompleteLoadingAssets();
    }
    private JSONArray _TryParseJsonArray(string input)
    {
        try { return JSON.Parse(input).AsArray; }
        catch (Exception e) { Debug.Log("|   ) )=33 Error parsing array: " + e); return null; }
    }
    private bool _TryParseCategory(List<BundleVersion> storedBVs, JSONArray categoryJA, string url)
    {
        try
        {
            storedBVs.Clear();
            for (int i = 0; i < categoryJA.Count; i++)
            {
                string[] split = categoryJA[i].Value.Split(BundleHandler.SPLIT, StringSplitOptions.RemoveEmptyEntries);
                if (split.Length <= 1) continue;
                storedBVs.Add(new() { Name = split[0], HashH128 = Hash128.Parse(split[1]), Url = url + categoryJA[i].Value });
            }
            return true;
        }
        catch (Exception e) { Debug.Log("|   ) )=33 Fail to parse Category content!!! " + e); return false; }
    }
    private void _ClearOldCachedBundleVersions()
    {
        foreach (BundleVersion aBV in _StoredDataBVs)
            if (_NewDataBVs.Find(x => x.Name.Equals(aBV.Name) && x.HashH128 != aBV.HashH128) != null)
                Caching.ClearCachedVersion(aBV.Name, aBV.HashH128);
    }
    private void _SetProgress(float percent)
    {

    }
    private void _CompleteLoadingAssets()
    {
        Debug.Log("|   ) )=33 Complete Loading AssetBundles");
        _OnCompleteCb?.Invoke();
    }
}
