using System.Collections.Generic;
using Spine.Unity;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Video;

public class BundleHandler
{
    public enum PLATFORM { Android, iOS }
    public static BundleHandler MAIN
    {
        get
        {
            if (_INSTANCE == null) _INSTANCE = new();
            return _INSTANCE;
        }
    }
    private static string[] _PREFAB_TAILS = { ".prefab" }, _TEXT_TAILS = { ".txt" }, _IMAGE_TAILS = { ".png", ".jpg", ".jpeg" },
        _AUDIO_TAILS = { ".mp3" }, _VIDEO_TAILS = { ".mp4" }, _MATERIAL_TAILS = { ".mat" }, _SKELETON_TAILS = { ".asset" };
    private static BundleHandler _INSTANCE;
    public const string BASE_PATH = "Assets/AssetBundles/", CATEGORY = "category.txt", SPLIT = "_hash_";
    private Dictionary<string, BundleVersion> _AssetsMapD = new();
    private Dictionary<Object, BundleLoader> _LoadersBLs = new();

    public void AddLoader(Object loader) => _LoadersBLs.Add(loader, loader.GetComponent<BundleLoader>());
    public void RemoveLoader(Object loader) => _LoadersBLs.Remove(loader);

    public void ClearAssetsDictionary() => _AssetsMapD.Clear();
    public void AddToLocalMap(BundleVersion aBV)
    {
        foreach (string assetName in aBV.AssetNamesHS)
        {
            if (_AssetsMapD.ContainsKey(assetName)) _AssetsMapD[assetName] = aBV;
            else _AssetsMapD.Add(assetName, aBV);
        }
    }
    //-------------------------------------------------- |   ) )=33 --------------------------------------------------
    //                          path must starts from Assets, like Assets/AssetsBundles/...
    private static T _GetAsset<T>(string path, string[] tails) where T : Object
    {
        foreach (string tail in tails)
        {
            if (path.EndsWith(tail)) path = path.Replace(tail, "");
            string fullPath = (path + tail).ToLower();
            if (MAIN._AssetsMapD.ContainsKey(fullPath)) return MAIN._AssetsMapD[fullPath].BundleAB.LoadAsset<T>(fullPath);
        }
        return Resources.Load<T>(path.Replace("Assets/Resources/", ""));
    }
    private static T[] _GetAssetWithSubAssets<T>(string path, string[] tails) where T : Object
    {
        foreach (string tail in tails)
        {
            if (path.EndsWith(tail)) path = path.Replace(tail, "");
            string fullPath = (path + tail).ToLower();
            if (MAIN._AssetsMapD.ContainsKey(fullPath)) return MAIN._AssetsMapD[fullPath].BundleAB.LoadAssetWithSubAssets<T>(fullPath);
        }
        return Resources.LoadAll<T>(path.Replace("Assets/Resources/", ""));
    }
    #region Load Assets
    public static GameObject LoadPrefab(string path) { return _GetAsset<GameObject>(path, _PREFAB_TAILS); }
    public static TextAsset LoadTextAsset(string path) { return _GetAsset<TextAsset>(path, _TEXT_TAILS); }
    public static Sprite LoadSprite(string path) { return _GetAsset<Sprite>(path, _IMAGE_TAILS); }
    public static Texture LoadTexture(string path) { return _GetAsset<Texture>(path, _IMAGE_TAILS); }
    public static Texture2D LoadTexture2D(string path) { return _GetAsset<Texture2D>(path, _IMAGE_TAILS); }
    public static AudioClip LoadAudioClip(string path) { return _GetAsset<AudioClip>(path, _AUDIO_TAILS); }
    public static VideoClip LoadVideoClip(string path) { return _GetAsset<VideoClip>(path, _VIDEO_TAILS); }
    public static Material LoadMaterial(string path) { return _GetAsset<Material>(path, _MATERIAL_TAILS); }
    public static SkeletonDataAsset LoadSkeletonData(string path) { return _GetAsset<SkeletonDataAsset>(path, _SKELETON_TAILS); }
    public static Sprite[] LoadMultipleSprites(string path) { return _GetAssetWithSubAssets<Sprite>(path, _IMAGE_TAILS); }
    #endregion
    public static bool SetDataForASkeletonGraphic(SkeletonGraphic targetSG, string animName, bool loop, string path)
    {
        if (targetSG == null) return false;
        SkeletonDataAsset skeDataSDA = LoadSkeletonData(path);
        if (skeDataSDA == null) return false;
        targetSG.skeletonDataAsset = skeDataSDA;
        targetSG.Initialize(true);
        targetSG.allowMultipleCanvasRenderers = false;
        if (skeDataSDA.atlasAssets.Length > 1
            || skeDataSDA.atlasAssets[0].MaterialCount > 1
            || skeDataSDA.blendModeMaterials.additiveMaterials.Count > 0
            || skeDataSDA.blendModeMaterials.multiplyMaterials.Count > 0
            || skeDataSDA.blendModeMaterials.screenMaterials.Count > 0
            || targetSG.canvasRenderers.Count > 0)
        {   // if these options were turned on before then now keep using them
            targetSG.allowMultipleCanvasRenderers = true;
            targetSG.canvasRenderer.Clear();
            targetSG.TrimRenderers();
            targetSG.UpdateMesh();
        }
        targetSG.AnimationState.SetAnimation(0, animName, loop);
        return true;
    }
}
public class BundleVersion
{
    public enum STATE { Cloud, Downloading, Donwloaded }
    public STATE State = STATE.Cloud;
    public HashSet<string> AssetNamesHS = new();
    public AssetBundle BundleAB;
    public Hash128 HashH128;
    public string Name, Url;
}
