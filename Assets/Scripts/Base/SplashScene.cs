using System.Collections;
using System.Threading.Tasks;
using Spine.Unity;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SplashScene : MonoBehaviour
{
    [SerializeField] private BundleDownloader m_BundleBD;

    private void Awake()
    {
        // m_BundleBD.CheckAndDownloadAssets("D:/Unity projects/Tidi-Phil-Win777/Assets/AssetBundles",
        m_BundleBD.CheckAndDownloadAssets("https://storage.googleapis.com/kh9/AssetBundles/",
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
