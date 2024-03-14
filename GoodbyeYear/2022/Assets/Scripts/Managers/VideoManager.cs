using UnityEngine;
using UnityEngine.Video;

[System.Serializable]
public class Video
{
    public string name;
    public string url;
}

public class VideoManager : MonoBehaviour
{
    public static VideoManager instance;

    [SerializeField]
    private VideoPlayer videoPlayer;
    [SerializeField]
    private Video[] videos;
    [SerializeField]
    private GameObject videoScreen;

    private void Awake()
    {
        if (instance == null)
        {
            instance= this;
            
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void PlayVideo(string name)
    {
        videoScreen.SetActive(true);

        for (int i = 0; i < videos.Length; i++)
        {
            if (videos[i].name.Equals(name))
            {
                videoPlayer.url = videos[i].url;

                videoPlayer.Play();

                return;
            }
        }
    }

    public void StopVideo()
    {
        videoPlayer.Stop();
        videoScreen.SetActive(false);
    }
}
