using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
public class Sound
{
    public string name;
    public AudioClip clip;
}

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    [SerializeField]
    private AudioSource bgmPlayer;
    [SerializeField]
    private AudioSource[] sfxPlayers;
    [SerializeField]
    private Sound[] bgms;
    [SerializeField]
    private Sound[] sfxs;

    [SerializeField]
    private TextMeshProUGUI currentBgmNameText;
    [SerializeField]
    private Animator currentBgmNameTextAnimator;

    private int currentBgmNameTextShowTrigger;
    private int currentBgmNameTextHideTrigger;

    private List<int> playList = new List<int>();

    // Wait For Seconds
    private WaitForSeconds waitTime0_25f;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;

            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        currentBgmNameTextShowTrigger = Animator.StringToHash("Show");
        currentBgmNameTextHideTrigger = Animator.StringToHash("Hide");

        waitTime0_25f = new WaitForSeconds(0.25f);
    }

    public SoundManager AddPlayList(string name)
    {
        for (int i = 0; i < bgms.Length; i++)
        {
            if (bgms[i].name.Equals(name))
            {
                playList.Add(i);

                return this;
            }
        }

        return this;
    }

    public void PlayList()
    {
        StartCoroutine(PlayListCoroutine());
    }

    private IEnumerator PlayListCoroutine()
    {
        for (int i = 0; i < playList.Count; i++)
        {
            PlayBGM(bgms[playList[i]].name, false);

            currentBgmNameText.text = bgms[playList[i]].name;

            currentBgmNameTextAnimator.SetTrigger(currentBgmNameTextShowTrigger);

            while (bgmPlayer.isPlaying)
            {
                yield return null;
            }

            currentBgmNameTextAnimator.SetTrigger(currentBgmNameTextHideTrigger);

            yield return waitTime0_25f;
        }
    }

    public void PlayBGM(string name, bool loop)
    {
        for (int i = 0; i < bgms.Length; i++)
        {
            if (bgms[i].name.Equals(name))
            {
                bgmPlayer.clip = bgms[i].clip;
                bgmPlayer.loop = loop;

                bgmPlayer.Play();

                return;
            }
        }
    }

    public void PlaySFX(string name)
    {
        for (int i = 0; i < sfxs.Length; i++)
        {
            if (sfxs[i].name.Equals(name))
            {
                for (int j = 0; j < sfxPlayers.Length; j++)
                {
                    if (!sfxPlayers[j].isPlaying)
                    {
                        sfxPlayers[j].clip = sfxs[i].clip;

                        sfxPlayers[j].Play();

                        return;
                    }
                }

                return;
            }
        }
    }
}
