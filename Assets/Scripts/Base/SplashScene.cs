using UnityEngine;
using UnityEngine.SceneManagement;

public class SplashScene : MonoBehaviour
{
    [SerializeField] private BundleDownloader m_BundleBD;

    private void Awake()
    {
        m_BundleBD.CheckAndDownloadAssets("D:/Unity projects/Tidi-Phil-Win777/Assets/AssetBundles",
            () =>
            {
                m_BundleBD.SetProgressText("Fail to get assets!");
            },
            () =>
            {
                SceneManager.LoadScene("MainScene");
            });
    }
}
