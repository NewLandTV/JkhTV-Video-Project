using TMPro;
using UnityEngine;

[RequireComponent(typeof(TextMeshProUGUI))]
public class Subtitle : MonoBehaviour
{
    [SerializeField]
    private string[] messages;
    private int index;

    private TextMeshProUGUI text;

    private void Awake()
    {
        text = GetComponent<TextMeshProUGUI>();
    }

    public void Next()
    {
        text.text = $"BGM : {messages[index++]}";
    }
}
