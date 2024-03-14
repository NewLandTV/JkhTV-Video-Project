using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Video;

[RequireComponent(typeof(VideoPlayer))]
public class VideoGroup : MonoBehaviour
{
    [Serializable]
    public class Data
    {
        [SerializeField]
        private string title = "Title";
        public string Title => title;
        [SerializeField]
        private string videoURL = "Your Video URL...";
        public string VideoURL => videoURL;
        [SerializeField]
        private float duration = 5f;
        public float Duration => duration;
    }

    public Data[] datas;
    private VideoPlayer player;

    [SerializeField]
    private TextMeshProUGUI titleText;

    private void Awake()
    {
        player = GetComponent<VideoPlayer>();
    }

    public void PlayAll()
    {
        StartCoroutine(PlayAllRoutine(0));
    }

    private IEnumerator PlayAllRoutine(int index)
    {
        if (datas.Length <= index)
        {
            yield break;
        }

        player.url = datas[index].VideoURL;

        player.Prepare();
        player.Play();

        titleText.text = datas[index].Title;

        yield return new WaitForSeconds(datas[index].Duration);

        StartCoroutine(PlayAllRoutine(index + 1));
    }
}
