using System.Collections;
using TMPro;
using UnityEngine;

public class MasterManager : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI dateTimeText;
    [SerializeField]
    private Animator dateTimeTextAnimator;
    [SerializeField]
    private GameObject currentDateTimeText;
    [SerializeField]
    private GameObject particles;
    [SerializeField]
    private GameObject backgroundImage;

    private int dateTimeTextShowTrigger;
    private int dateTimeTextHideTrigger;

    // Wait For Seconds
    private WaitForSeconds waitTime4f;
    private WaitForSeconds waitTime4_75f;

    private void Awake()
    {
        dateTimeTextShowTrigger = Animator.StringToHash("Show");
        dateTimeTextHideTrigger = Animator.StringToHash("Hide");

        waitTime4f = new WaitForSeconds(4f);
        waitTime4_75f = new WaitForSeconds(4.75f);
    }

    // Start video
    public void Main()
    {
        SoundManager.instance.AddPlayList("High Day").AddPlayList("Quiet Time").AddPlayList("Dark Flash").AddPlayList("Fitst Start").AddPlayList("Automatic Jump Code").AddPlayList("Small Light And Rotate").AddPlayList("Untitled").AddPlayList("Desert Adventure").AddPlayList("Minor Magical").AddPlayList("JkhTV_200_BGM_(Round_Yama)").AddPlayList("Buffer Scale").AddPlayList("Christmas_Y2022-12-25_BGM").PlayList();

        StartCoroutine(ShowMainScreenCoroutine());
    }

    private IEnumerator ShowMainScreenCoroutine()
    {
        // 2022.01.01
        StartCoroutine(ShowAndHideDateTimeText(1, 1));

        VideoManager.instance.PlayVideo("오늘의 개발노트 #5 - Game Jam 프로젝트 (2022-01-01)");

        yield return waitTime4_75f;

        // 2022.01.06
        StartCoroutine(ShowAndHideDateTimeText(1, 6));

        VideoManager.instance.PlayVideo("Unity 기초 강좌 3 플레이어 점프와 프로젝트 정리 (2022-01-06)");

        yield return waitTime4_75f;

        // 2022.01.31
        StartCoroutine(ShowAndHideDateTimeText(1, 31));

        VideoManager.instance.PlayVideo("프로그래밍 언어 기초 - C 언어 기초 1 Hello World 출력 (2022-01-31)");

        yield return waitTime4_75f;

        // 2022.02.12
        StartCoroutine(ShowAndHideDateTimeText(2, 12));

        VideoManager.instance.PlayVideo("오늘의 개발노트 9 - Boss Killer 게임 (2022-02-12)");

        yield return waitTime4_75f;

        // 2022.02.19
        StartCoroutine(ShowAndHideDateTimeText(2, 19));

        VideoManager.instance.PlayVideo("오늘의 개발노트 12 - PC Volt Survival Game 만들기 1편 (2022-02-19)");

        yield return waitTime4_75f;

        // 2022.02.20
        StartCoroutine(ShowAndHideDateTimeText(2, 20));

        VideoManager.instance.PlayVideo("오늘의 개발노트 13 - Virtual Reality Multi Box World 게임 만들기 1편 동기화 테스트 (2022-02-20)");

        yield return waitTime4_75f;

        // 2022.02.23
        StartCoroutine(ShowAndHideDateTimeText(2, 23));

        VideoManager.instance.PlayVideo("오늘의 개발노트 16 - 14시간 (2022-02-23)");

        yield return waitTime4_75f;

        // 2022.02.28
        StartCoroutine(ShowAndHideDateTimeText(2, 28));

        VideoManager.instance.PlayVideo("장경혁tv 두 번째 아웃트로 (2022-02-28)");

        yield return waitTime4_75f;

        // 2022.03.10
        StartCoroutine(ShowAndHideDateTimeText(3, 10));

        VideoManager.instance.PlayVideo("오늘의 개발노트 26 - Dots Game 개발 일상 (2022-03-10)");

        yield return waitTime4_75f;

        // 2022.03.20
        StartCoroutine(ShowAndHideDateTimeText(3, 20));

        VideoManager.instance.PlayVideo("오늘의 개발노트 35 - 6개의 프로그래밍 언어로 Hello World! (2022-03-20)");

        yield return waitTime4_75f;

        // 2022.03.21
        StartCoroutine(ShowAndHideDateTimeText(3, 21));

        VideoManager.instance.PlayVideo("C언어로 틱택토 게임 만들기 (2022-03-21)");

        yield return waitTime4_75f;

        // 2022.03.22
        StartCoroutine(ShowAndHideDateTimeText(3, 22));

        VideoManager.instance.PlayVideo("오늘의 개발노트 36 - Move Run 게임 만들기 (2022-03-22)");

        yield return waitTime4_75f;

        // 2022.03.28
        StartCoroutine(ShowAndHideDateTimeText(3, 28));

        VideoManager.instance.PlayVideo("[오늘의 개발노트] 41 - QT Creator를 이용한 Hello World! (2022-03-28)");

        yield return waitTime4_75f;

        // 2022.04.02
        StartCoroutine(ShowAndHideDateTimeText(4, 2));

        VideoManager.instance.PlayVideo("[지뢰찾기 플레이] 초급 4초 가능? (2022-04-02)");

        yield return waitTime4_75f;

        // 2022.04.07
        StartCoroutine(ShowAndHideDateTimeText(4, 7));

        VideoManager.instance.PlayVideo("[오늘의 개발노트] 46 - 아두이노 테스트 (2022-04-07)");

        yield return waitTime4_75f;

        // 2022.04.13
        StartCoroutine(ShowAndHideDateTimeText(4, 13));

        VideoManager.instance.PlayVideo("CPP GAME #1 - [기타 게임 개발] (2022-04-13)");

        yield return waitTime4_75f;

        // 2022.04.14
        StartCoroutine(ShowAndHideDateTimeText(4, 14));

        VideoManager.instance.PlayVideo("언리얼 엔진 5 출시 - [오늘의 개발노트] 52 (2022-04-14)");

        yield return waitTime4_75f;

        // 2022.04.22
        StartCoroutine(ShowAndHideDateTimeText(4, 22));

        VideoManager.instance.PlayVideo("SSEMA, VSG, VR MBW 비교 - [오늘의 개발노트] 55 (2022-04-22)");

        yield return waitTime4_75f;

        // 2022.05.02
        StartCoroutine(ShowAndHideDateTimeText(5, 2));

        VideoManager.instance.PlayVideo("멀티 게임 제작 - [오늘의 개발노트] 65 (2022-05-02)");

        yield return waitTime4_75f;

        // 2022.05.12
        StartCoroutine(ShowAndHideDateTimeText(5, 12));

        VideoManager.instance.PlayVideo("무엇을 만들까? - [오늘의 개발노트] 74 (2022-05-12)");

        yield return waitTime4_75f;

        // 2022.05.15
        StartCoroutine(ShowAndHideDateTimeText(5, 15));

        VideoManager.instance.PlayVideo("NewLand 계정 연동 패키지 제작 - [오늘의 개발노트] 77 (2022-05-15)");

        yield return waitTime4_75f;

        // 2022.05.21
        StartCoroutine(ShowAndHideDateTimeText(5, 21));

        VideoManager.instance.PlayVideo("C언어 피아노 - [오늘의 개발노트] 83 (2022-05-21)");

        yield return waitTime4_75f;

        // 2022.05.22
        StartCoroutine(ShowAndHideDateTimeText(5, 22));

        VideoManager.instance.PlayVideo("New Life Game 개발 중 #1 - [기타 게임 개발] (2022-05-22)");

        yield return waitTime4_75f;

        // 2022.05.23
        StartCoroutine(ShowAndHideDateTimeText(5, 23));

        VideoManager.instance.PlayVideo("타이틀과 로딩 화면 - [오늘의 개발노트] 84 (2022-05-23)");

        yield return waitTime4_75f;

        // 2022.05.25
        StartCoroutine(ShowAndHideDateTimeText(5, 25));

        VideoManager.instance.PlayVideo("2022년 오늘은 내 생일 (xx날 - My Birthday) (2022-05-25)");

        yield return waitTime4_75f;

        // 2022.05.27
        StartCoroutine(ShowAndHideDateTimeText(5, 27));

        VideoManager.instance.PlayVideo("NewLand Challenge - (오늘의 개발노트 - 86편) (2022-05-27)");

        yield return waitTime4_75f;

        // 2022.05.31
        StartCoroutine(ShowAndHideDateTimeText(5, 31));

        VideoManager.instance.PlayVideo("C언어로 웹 서버 - (오늘의 개발노트 - 90편) (2022-05-31)");

        yield return waitTime4_75f;

        // 2022.06.01
        StartCoroutine(ShowAndHideDateTimeText(6, 1));

        VideoManager.instance.PlayVideo("JS로 만들기 - (오늘의 개발노트 - 91편) (2022-06-01)");

        yield return waitTime4_75f;

        // 2022.06.05
        StartCoroutine(ShowAndHideDateTimeText(6, 5));

        VideoManager.instance.PlayVideo("적은 시간으로 게임 만들기 - (오늘의 개발노트 - 94편) (2022-06-05)");

        yield return waitTime4_75f;

        // 2022.06.14
        StartCoroutine(ShowAndHideDateTimeText(6, 14));

        VideoManager.instance.PlayVideo("100편 중 조회수가 많은 - (오늘의 개발노트 - 101편) (2022-06-14)");

        yield return waitTime4_75f;

        // 2022.06.19
        StartCoroutine(ShowAndHideDateTimeText(6, 19));

        VideoManager.instance.PlayVideo("채팅 앱에 대하여 - (오늘의 개발노트 - 106편) (2022-06-19)");

        yield return waitTime4_75f;

        // 2022.06.23
        StartCoroutine(ShowAndHideDateTimeText(6, 23));

        VideoManager.instance.PlayVideo("파이썬으로 게임 개발 - (기타게임개발) (2022-06-23)");

        yield return waitTime4_75f;

        // 2022.06.24
        StartCoroutine(ShowAndHideDateTimeText(6, 24));

        VideoManager.instance.PlayVideo("간단하게 실행 - (기타게임개발 - Hello RPG) (2022-06-24)");

        yield return waitTime4_75f;

        // 2022.06.27
        StartCoroutine(ShowAndHideDateTimeText(6, 27));

        VideoManager.instance.PlayVideo("Assembly 사용하기 - (오늘의 개발노트 - 111편) (2022-06-27)");

        yield return waitTime4_75f;

        // 2022.07.14
        StartCoroutine(ShowAndHideDateTimeText(7, 14));

        VideoManager.instance.PlayVideo("7월 14일 엘프고등학교 재오픈 (게임 - 좀비고등학교) (2022-07-14)");

        yield return waitTime4_75f;

        // 2022.07.20
        StartCoroutine(ShowAndHideDateTimeText(7, 20));

        VideoManager.instance.PlayVideo("C언어로 2048 (오늘의 개발노트 - 127편) (2022-07-20)");

        yield return waitTime4_75f;

        // 2022.07.22
        StartCoroutine(ShowAndHideDateTimeText(7, 22));

        VideoManager.instance.PlayVideo("유니티 엔진 설치부터 C# 스크립트 기초까지 (Unity EE) (2022-07-22)");

        yield return waitTime4_75f;

        // 2022.07.23
        StartCoroutine(ShowAndHideDateTimeText(7, 23));

        VideoManager.instance.PlayVideo("C언어로 리듬 게임 (기타게임개발 - 리듬 게임) (2022-07-23)");

        yield return waitTime4_75f;

        // 2022.07.27
        StartCoroutine(ShowAndHideDateTimeText(7, 27));

        VideoManager.instance.PlayVideo("100명 (구독자 N명 기념) (2022-07-27)");

        yield return waitTime4_75f;

        // 2022.07.31
        StartCoroutine(ShowAndHideDateTimeText(7, 31));

        VideoManager.instance.PlayVideo("C언어로 만든 그림 그리는 프로그램 (오늘의 개발노트 - 131편) (2022-07-31)");

        yield return waitTime4_75f;

        // 2022.08.02
        StartCoroutine(ShowAndHideDateTimeText(8, 2));

        VideoManager.instance.PlayVideo("YoRoTo 멀티 게임 (오늘의 개발노트 - 133편) (2022-08-02)");

        yield return waitTime4_75f;

        // 2022.08.09
        StartCoroutine(ShowAndHideDateTimeText(8, 9));

        VideoManager.instance.PlayVideo("심심해서 만든 게임 (오늘의 개발노트 - 140편) (2022-08-09)");

        yield return waitTime4_75f;

        // 2022.08.13
        StartCoroutine(ShowAndHideDateTimeText(8, 13));

        VideoManager.instance.PlayVideo("C언어로 스도쿠 만들기 (오늘의 개발노트 - 143편) (2022-08-13)");

        yield return waitTime4_75f;

        // 2022.08.23
        StartCoroutine(ShowAndHideDateTimeText(8, 23));

        VideoManager.instance.PlayVideo("할 일을 웹 서버로 만들기 (오늘의 개발노트 - 153편) (2022-08-23)");

        yield return waitTime4_75f;

        // 2022.08.25
        StartCoroutine(ShowAndHideDateTimeText(8, 25));

        VideoManager.instance.PlayVideo("C언어로 만든 콘솔에서 코딩을 할 수 있는 프로그램 (오늘의 개발노트 - 155편) (2022-08-25)");

        yield return waitTime4_75f;

        // 2022.08.27
        StartCoroutine(ShowAndHideDateTimeText(8, 27));

        VideoManager.instance.PlayVideo("Growing Town PV 영상 (Growing Town PV) (2022-08-27)");

        yield return waitTime4_75f;

        // 2022.08.30
        StartCoroutine(ShowAndHideDateTimeText(8, 30));

        VideoManager.instance.PlayVideo("C언어로 달력 만들기 (오늘의 개발노트 - 159편) (2022-08-30)");

        yield return waitTime4_75f;

        // 2022.09.04
        StartCoroutine(ShowAndHideDateTimeText(9, 4));

        VideoManager.instance.PlayVideo("C# WPF로 사칙연산 계산기 만들기 (오늘의 개발노트 - 164편) (2022-09-04)");

        yield return waitTime4_75f;

        // 2022.09.08
        StartCoroutine(ShowAndHideDateTimeText(9, 8));

        VideoManager.instance.PlayVideo("플레이 방법 (기타게임개발 - Static Jump) (2022-09-08)");

        yield return waitTime4_75f;

        // 2022.09.09
        StartCoroutine(ShowAndHideDateTimeText(9, 9));

        VideoManager.instance.PlayVideo("Growing Town 게임 출시 (오늘의 개발노트 - 168편) (2022-09-09)");

        yield return waitTime4_75f;

        // 2022.09.15
        StartCoroutine(ShowAndHideDateTimeText(9, 15));

        VideoManager.instance.PlayVideo("이번에는 더 적은 시간으로 게임 만들기 (오늘의 개발노트 - 172편) (2022-09-15)");

        yield return waitTime4_75f;

        // 2022.09.17
        StartCoroutine(ShowAndHideDateTimeText(9, 17));

        VideoManager.instance.PlayVideo("Gotoxy 함수에 대하여 (C언어 콘솔 게임 강좌 - 1강) (2022-09-17)");

        yield return waitTime4_75f;

        // 2022.09.25
        StartCoroutine(ShowAndHideDateTimeText(9, 25));

        VideoManager.instance.PlayVideo("콘솔에서 BMP 파일 그리기 (오늘의 개발노트 - 176편) (2022-09-25)");

        yield return waitTime4_75f;

        // 2022.09.27
        StartCoroutine(ShowAndHideDateTimeText(9, 27));

        VideoManager.instance.PlayVideo("Win32 API로 공 튕기기 (오늘의 개발노트 - 178편) (2022-09-27)");

        yield return waitTime4_75f;

        // 2022.10.03
        StartCoroutine(ShowAndHideDateTimeText(10, 3));

        VideoManager.instance.PlayVideo("C언어로 파일을 다운로드하기 (오늘의 개발노트 - 184편) (2022-10-03)");

        yield return waitTime4_75f;

        // 2022.10.05
        StartCoroutine(ShowAndHideDateTimeText(10, 5));

        VideoManager.instance.PlayVideo("로그인 화면 (Unity로 Natty OS 만들기 - 1편) (2022-10-05)");

        yield return waitTime4_75f;

        // 2022.10.09
        StartCoroutine(ShowAndHideDateTimeText(10, 9));

        VideoManager.instance.PlayVideo("아희로 안녕, 세상 출력하기 (xx날 - 한글날) (2022-10-09)");

        yield return waitTime4_75f;

        // 2022.10.12
        StartCoroutine(ShowAndHideDateTimeText(10, 12));

        VideoManager.instance.PlayVideo("한글로 코딩 구현 (오늘의 개발노트 - 189편) (2022-10-12)");

        yield return waitTime4_75f;

        // 2022.10.13
        StartCoroutine(ShowAndHideDateTimeText(10, 13));

        VideoManager.instance.PlayVideo("콘솔에서 일인칭 시점을 구현해보았다. (오늘의 개발노트 - 190편) (2022-10-13)");

        yield return waitTime4_75f;

        // 2022.10.18
        StartCoroutine(ShowAndHideDateTimeText(10, 18));

        VideoManager.instance.PlayVideo("200명 (구독자 N명 기념) (2022-10-18)");

        yield return waitTime4_75f;

        // 2022.10.25
        StartCoroutine(ShowAndHideDateTimeText(10, 25));

        VideoManager.instance.PlayVideo("C언어 system 함수로 만들 것 (오늘의 개발노트 - 198편) (2022-10-25)");

        yield return waitTime4_75f;

        // 2022.10.30
        StartCoroutine(ShowAndHideDateTimeText(10, 30));

        VideoManager.instance.PlayVideo("파이썬 튜토리얼 Hello World! (파이썬 기초 3.11.0 - 1강) (2022-10-30)");

        yield return waitTime4_75f;

        // 2022.11.02
        StartCoroutine(ShowAndHideDateTimeText(11, 2));

        VideoManager.instance.PlayVideo("선을 그리는 다양한 방법 (오늘의 개발노트 - 204편) (2022-11-02)");

        yield return waitTime4_75f;

        // 2022.11.06
        StartCoroutine(ShowAndHideDateTimeText(11, 6));

        VideoManager.instance.PlayVideo("거의 9개월 만에 업데이트하는 앱 (오늘의 개발노트 - 206편) (2022-11-06)");

        yield return waitTime4_75f;

        // 2022.11.10
        StartCoroutine(ShowAndHideDateTimeText(11, 10));

        VideoManager.instance.PlayVideo("디스코드에서 게임하기 (오늘의 개발노트 - 208편) (2022-11-10)");

        yield return waitTime4_75f;

        // 2022.11.13
        StartCoroutine(ShowAndHideDateTimeText(11, 13));

        VideoManager.instance.PlayVideo("콘솔 게임 엔진 기획 (오늘의 개발노트 p.211) (2022-11-13)");

        yield return waitTime4_75f;

        // 2022.11.18
        StartCoroutine(ShowAndHideDateTimeText(11, 18));

        VideoManager.instance.PlayVideo("300명 (구독자 N명 기념) (2022-11-18)");

        yield return waitTime4_75f;

        // 2022.12.01
        StartCoroutine(ShowAndHideDateTimeText(12, 1));

        VideoManager.instance.PlayVideo("구글 플레이에 세 번째로 출시할 예정인 게임 (오늘의 개발노트 p.221) (2022-12-01)");

        yield return waitTime4_75f;

        // 2022.12.07
        StartCoroutine(ShowAndHideDateTimeText(12, 7));

        VideoManager.instance.PlayVideo("C언어로 cmd 만들기 (오늘의 개발노트 p.226) (2022-12-07)");

        yield return waitTime4_75f;

        // 2022.12.09
        StartCoroutine(ShowAndHideDateTimeText(12, 9));

        VideoManager.instance.PlayVideo("유니티에서 최근에 알게 된 기능 (오늘의 개발노트 p.228) (2022-12-09)");

        yield return waitTime4_75f;

        // 2022.12.12
        StartCoroutine(ShowAndHideDateTimeText(12, 12));

        VideoManager.instance.PlayVideo("클라우드 서비스 제작 (오늘의 개발노트 p.230) (2022-12-12)");

        yield return waitTime4_75f;

        // 2022.12.13
        StartCoroutine(ShowAndHideDateTimeText(12, 13));

        VideoManager.instance.PlayVideo("사칙연산 문제 풀기 (오늘의 개발노트 p.231) (2022-12-13)");

        yield return waitTime4_75f;

        // 2022.12.14
        StartCoroutine(ShowAndHideDateTimeText(12, 14));

        VideoManager.instance.PlayVideo("프로젝트 시작부터 지금까지의 변화 (오늘의 개발노트 p.232) (2022-12-14)");

        yield return waitTime4_75f;

        // 2022.12.15
        StartCoroutine(ShowAndHideDateTimeText(12, 15));

        VideoManager.instance.PlayVideo("간단한 퍼즐 게임 (오늘의 개발노트 p.233) (2022-12-15)");

        yield return waitTime4_75f;

        // 2022.12.19
        StartCoroutine(ShowAndHideDateTimeText(12, 19));

        VideoManager.instance.PlayVideo("Unity로 모바일 푸시 알림 구현하기 (오늘의 개발노트 p.237) (2022-12-19)");

        yield return waitTime4_75f;

        // 2022.12.20
        StartCoroutine(ShowAndHideDateTimeText(12, 20));

        VideoManager.instance.PlayVideo("Unity로 모바일 진동 구현하기 (오늘의 개발노트 p.238) (2022-12-20)");

        yield return waitTime4_75f;

        // 2022.12.24
        StartCoroutine(ShowAndHideDateTimeText(12, 24));

        VideoManager.instance.PlayVideo("Win32 API 그림을 그릴 수 있는 앱 만들기 (오늘의 개발노트 p.242) (2022-12-24)");

        yield return waitTime4_75f;

        // 2022.12.25
        StartCoroutine(ShowAndHideDateTimeText(12, 25));

        VideoManager.instance.PlayVideo("2022년 12월 25일 (크리스마스) (2022-12-25)");

        yield return waitTime4_75f;

        // 2022.12.26
        StartCoroutine(ShowAndHideDateTimeText(12, 26));

        VideoManager.instance.PlayVideo("계산기를 위한 서버 만들기 (오늘의 개발노트 p.244) (2022-12-26)");

        yield return waitTime4_75f;

        // 2022.12.30
        StartCoroutine(ShowAndHideDateTimeText(12, 30));

        VideoManager.instance.PlayVideo("예전에 만든 게임을 재활용한 프로젝트 (오늘의 개발노트 p.247) (2022-12-30)");

        yield return waitTime4_75f;

        // 2022.12.31
        StartCoroutine(ShowAndHideDateTimeText(12, 31));

        VideoManager.instance.PlayVideo("Re Dot Empty Two Game Launcher (오늘의 개발노트 p.248) (2022-12-31)");

        yield return waitTime4_75f;

        VideoManager.instance.StopVideo();

        yield return waitTime4_75f;

        SoundManager.instance.PlaySFX("Chick");

        backgroundImage.SetActive(false);
        currentDateTimeText.SetActive(true);
        particles.SetActive(true);
    }

    private IEnumerator ShowAndHideDateTimeText(ushort month, ushort day)
    {
        dateTimeText.text = $"2022.{month}.{day}";

        dateTimeTextAnimator.SetTrigger(dateTimeTextShowTrigger);

        yield return waitTime4f;

        dateTimeTextAnimator.SetTrigger(dateTimeTextHideTrigger);
    }
}
