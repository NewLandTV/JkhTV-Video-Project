using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarGroup : MonoBehaviour
{
    [SerializeField]
    private GameObject starPrefab;
    [SerializeField]
    private int starCount = 25;
    [SerializeField]
    private float starRadius = 5f;
    [SerializeField]
    private float sortingTime = 2f;

    private List<GameObject> starPooling;
    private WaitForSeconds sortingWaitTime;

    private void Awake()
    {
        starPooling = new List<GameObject>(starCount);
        sortingWaitTime = new WaitForSeconds(sortingTime / starCount);

        for (int i = 0; i < starCount; i++)
        {
            starPooling.Add(MakeStar());
        }
    }

    private void OnDisable()
    {
        for (int i = 0; i < starCount; i++)
        {
            starPooling[i].SetActive(false);
        }
    }

    private GameObject MakeStar()
    {
        GameObject instance = Instantiate(starPrefab, transform.position, Quaternion.identity, transform);

        return instance;
    }

    public void SortAround()
    {
        StartCoroutine(SortAroundRoutine());
    }

    private IEnumerator SortAroundRoutine()
    {
        float angle = 360f / starCount;

        for (int i = 0; i < starCount; i++)
        {
            starPooling[i].transform.position = transform.position;

            starPooling[i].SetActive(true);

            Vector3 endPosition = transform.position + AngleToDirection(angle * i);

            StartCoroutine(StarRoutine(i, endPosition));

            yield return sortingWaitTime;
        }
    }

    private IEnumerator StarRoutine(int index, Vector3 endPosition)
    {
        Vector3 startPosition = starPooling[index].transform.position;

        for (float t = 0f; t < 1f; t += Time.deltaTime)
        {
            starPooling[index].transform.position = Vector3.Lerp(startPosition, endPosition, t);

            yield return null;
        }

        starPooling[index].transform.position = endPosition;

        starPooling[index].transform.LookAt(transform.position);
    }

    private Vector3 AngleToDirection(float angle)
    {
        Vector3 direction = transform.forward * starRadius;
        Quaternion quaternion = Quaternion.Euler(0f, angle, 0f);
        Vector3 result = quaternion * direction;

        return result;
    }
}
