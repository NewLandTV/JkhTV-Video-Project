using UnityEngine;

public class Main : MonoBehaviour
{
    [SerializeField]
    private MasterManager masterManager;

    private void Start()
    {
        masterManager.Main();
    }
}
