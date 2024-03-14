#include "Video.h"

void Video::Gotoxy(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void Video::Play()
{
	system("title 장경혁tv 구독자 200명 기념");
	system("mode con cols=180 lines=45");

	CONSOLE_CURSOR_INFO consoleCursorInfo;

	consoleCursorInfo.bVisible = 0;
	consoleCursorInfo.dwSize = 1;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleCursorInfo);

	for (int y = 0; y < CONSOLE_HEIGHT; y++)
	{
		for (int x = 0; x < CONSOLE_WIDTH; x += 2)
		{
			Gotoxy(x, y);
			printf("┼");
		}

		Sleep(25);
	}

	for (int y = 0; y < CONSOLE_HEIGHT; y++)
	{
		for (int x = 0; x < CONSOLE_WIDTH; x += 2)
		{
			Gotoxy(x, y);
			printf("  ");
		}

		Sleep(25);
	}

	Sleep(500);

	// 작은 200
	Gotoxy((CONSOLE_WIDTH >> 1) - 1, CONSOLE_HEIGHT >> 1);
	printf("200");
	Sleep(400);

	// 작은 200 지우기
	Gotoxy((CONSOLE_WIDTH >> 1) - 1, CONSOLE_HEIGHT >> 1);
	printf("   ");

	// 중간 200
	// 0. 2
	Gotoxy((CONSOLE_WIDTH >> 1) - 8, (CONSOLE_HEIGHT >> 1) - 2);
	printf(".---.");
	Gotoxy((CONSOLE_WIDTH >> 1) - 8, (CONSOLE_HEIGHT >> 1) - 1);
	printf("   / ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 8, CONSOLE_HEIGHT >> 1);
	printf("  /  ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 8, (CONSOLE_HEIGHT >> 1) + 1);
	printf(" /   ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 8, (CONSOLE_HEIGHT >> 1) + 2);
	printf("`---`");

	// 1. 0
	Gotoxy((CONSOLE_WIDTH >> 1) - 2, (CONSOLE_HEIGHT >> 1) - 2);
	printf(".---.");
	Gotoxy((CONSOLE_WIDTH >> 1) - 2, (CONSOLE_HEIGHT >> 1) - 1);
	printf("|  /|");
	Gotoxy((CONSOLE_WIDTH >> 1) - 2, CONSOLE_HEIGHT >> 1);
	printf("| / |");
	Gotoxy((CONSOLE_WIDTH >> 1) - 2, (CONSOLE_HEIGHT >> 1) + 1);
	printf("|/  |");
	Gotoxy((CONSOLE_WIDTH >> 1) - 2, (CONSOLE_HEIGHT >> 1) + 2);
	printf("`---`");

	// 2. 0
	Gotoxy((CONSOLE_WIDTH >> 1) + 4, (CONSOLE_HEIGHT >> 1) - 2);
	printf(".---.");
	Gotoxy((CONSOLE_WIDTH >> 1) + 4, (CONSOLE_HEIGHT >> 1) - 1);
	printf("|  /|");
	Gotoxy((CONSOLE_WIDTH >> 1) + 4, CONSOLE_HEIGHT >> 1);
	printf("| / |");
	Gotoxy((CONSOLE_WIDTH >> 1) + 4, (CONSOLE_HEIGHT >> 1) + 1);
	printf("|/  |");
	Gotoxy((CONSOLE_WIDTH >> 1) + 4, (CONSOLE_HEIGHT >> 1) + 2);
	printf("`---`");
	Sleep(400);

	// 화면 전환
	for (int x = 0; x < CONSOLE_WIDTH; x += 2)
	{
		for (int y = 0; y < CONSOLE_HEIGHT; y++)
		{
			Gotoxy(x, y);
			printf("■");
		}

		Sleep(5);
	}

	for (int x = 0; x < CONSOLE_WIDTH; x += 2)
	{
		for (int y = 0; y < CONSOLE_HEIGHT; y++)
		{
			Gotoxy(x, y);
			printf("  ");
		}

		Sleep(5);
	}

	Sleep(3000);

	// 큰 200
	system("color be");

	// 0. 2
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 10);
	printf("  222222222222222222  ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 9);
	printf(" 2                  2 ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 8);
	printf("2                    2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 7);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 6);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 5);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 4);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 3);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 2);
	printf("                     2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) - 1);
	printf("                    2 ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, CONSOLE_HEIGHT >> 1);
	printf("  222222222222222222  ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 1);
	printf(" 2                    ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 2);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 3);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 4);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 5);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 6);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 7);
	printf("2                     ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 8);
	printf("2                    2");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 9);
	printf(" 2                  2 ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 39, (CONSOLE_HEIGHT >> 1) + 10);
	printf("  222222222222222222  ");

	// 1. 0
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 10);
	printf(" 00000000000000000000 ");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 9);
	printf("0                  000");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 8);
	printf("0                 00 0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 7);
	printf("0                00  0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 6);
	printf("0               00   0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 5);
	printf("0              00    0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 4);
	printf("0             00     0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 3);
	printf("0            00      0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 2);
	printf("0           00       0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) - 1);
	printf("0          00        0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, CONSOLE_HEIGHT >> 1);
	printf("0         00         0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 1);
	printf("0        00          0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 2);
	printf("0       00           0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 3);
	printf("0      00            0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 4);
	printf("0     00             0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 5);
	printf("0    00              0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 6);
	printf("0   00               0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 7);
	printf("0  00                0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 8);
	printf("0 00                 0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 9);
	printf("000                  0");
	Gotoxy((CONSOLE_WIDTH >> 1) - 12, (CONSOLE_HEIGHT >> 1) + 10);
	printf(" 00000000000000000000 ");

	// 2. 0
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 10);
	printf(" 00000000000000000000 ");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 9);
	printf("0                  000");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 8);
	printf("0                 00 0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 7);
	printf("0                00  0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 6);
	printf("0               00   0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 5);
	printf("0              00    0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 4);
	printf("0             00     0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 3);
	printf("0            00      0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 2);
	printf("0           00       0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) - 1);
	printf("0          00        0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, CONSOLE_HEIGHT >> 1);
	printf("0         00         0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 1);
	printf("0        00          0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 2);
	printf("0       00           0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 3);
	printf("0      00            0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 4);
	printf("0     00             0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 5);
	printf("0    00              0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 6);
	printf("0   00               0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 7);
	printf("0  00                0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 8);
	printf("0 00                 0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 9);
	printf("000                  0");
	Gotoxy((CONSOLE_WIDTH >> 1) + 15, (CONSOLE_HEIGHT >> 1) + 10);
	printf(" 00000000000000000000 ");
	Sleep(250);

	// 이펙트
	int waitTimeMs = 50;

	v2iLEffect.x = CONSOLE_WIDTH >> 2;
	v2iLEffect.y = CONSOLE_HEIGHT - 1;
	v2iREffect.x = (CONSOLE_WIDTH >> 2) * 3;
	v2iREffect.y = CONSOLE_HEIGHT - 1;

	Gotoxy(v2iLEffect.x, v2iLEffect.y);
	printf("▲");
	Gotoxy(v2iREffect.x, v2iREffect.y);
	printf("▲");
	Sleep(250);

	while (v2iLEffect.y > 5)
	{
		Gotoxy(v2iLEffect.x, v2iLEffect.y);
		printf("  ");

		v2iLEffect.y--;

		Gotoxy(v2iLEffect.x, v2iLEffect.y);
		printf("●");
		Sleep(waitTimeMs);

		waitTimeMs += 1.5f;
	}

	Gotoxy(v2iLEffect.x, v2iLEffect.y);
	printf("◈");
	Sleep(100);
	Gotoxy(v2iLEffect.x, v2iLEffect.y);
	printf("  ");
	Gotoxy(v2iLEffect.x + 2, v2iLEffect.y);
	printf("◈");
	Gotoxy(v2iLEffect.x - 2, v2iLEffect.y);
	printf("◈");
	Gotoxy(v2iLEffect.x, v2iLEffect.y + 1);
	printf("◈");
	Gotoxy(v2iLEffect.x, v2iLEffect.y - 1);
	printf("◈");
	Sleep(100);
	Gotoxy(v2iLEffect.x + 2, v2iLEffect.y);
	printf("  ");
	Gotoxy(v2iLEffect.x - 2, v2iLEffect.y);
	printf("  ");
	Gotoxy(v2iLEffect.x, v2iLEffect.y + 1);
	printf("  ");
	Gotoxy(v2iLEffect.x, v2iLEffect.y - 1);
	printf("  ");
	Gotoxy(v2iLEffect.x + 2, v2iLEffect.y + 1);
	printf("↖");
	Gotoxy(v2iLEffect.x - 2, v2iLEffect.y + 1);
	printf("↗");
	Gotoxy(v2iLEffect.x + 2, v2iLEffect.y - 1);
	printf("↙");
	Gotoxy(v2iLEffect.x - 2, v2iLEffect.y - 1);
	printf("↘");
	Sleep(100);
	Gotoxy(v2iLEffect.x, v2iLEffect.y);
	printf("◎");

	waitTimeMs = 50;

	while (v2iREffect.y > 14)
	{
		Gotoxy(v2iREffect.x, v2iREffect.y);
		printf("  ");

		v2iREffect.y--;

		Gotoxy(v2iREffect.x, v2iREffect.y);
		printf("●");
		Sleep(waitTimeMs);

		waitTimeMs += 1.5f;
	}

	Gotoxy(v2iREffect.x, v2iREffect.y);
	printf("◈");
	Sleep(100);
	Gotoxy(v2iREffect.x, v2iREffect.y);
	printf("  ");
	Gotoxy(v2iREffect.x + 2, v2iREffect.y);
	printf("◈");
	Gotoxy(v2iREffect.x - 2, v2iREffect.y);
	printf("◈");
	Gotoxy(v2iREffect.x, v2iREffect.y + 1);
	printf("◈");
	Gotoxy(v2iREffect.x, v2iREffect.y - 1);
	printf("◈");
	Sleep(100);
	Gotoxy(v2iREffect.x + 2, v2iREffect.y);
	printf("  ");
	Gotoxy(v2iREffect.x - 2, v2iREffect.y);
	printf("  ");
	Gotoxy(v2iREffect.x, v2iREffect.y + 1);
	printf("  ");
	Gotoxy(v2iREffect.x, v2iREffect.y - 1);
	printf("  ");
	Gotoxy(v2iREffect.x + 2, v2iREffect.y + 1);
	printf("↖");
	Gotoxy(v2iREffect.x - 2, v2iREffect.y + 1);
	printf("↗");
	Gotoxy(v2iREffect.x + 2, v2iREffect.y - 1);
	printf("↙");
	Gotoxy(v2iREffect.x - 2, v2iREffect.y - 1);
	printf("↘");
	Sleep(100);
	Gotoxy(v2iREffect.x, v2iREffect.y);
	printf("◎");

	while (1)
	{
		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y + 1);
		printf("  ");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y + 1);
		printf("  ");
		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y - 1);
		printf("  ");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y - 1);
		printf("  ");
		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y);
		printf("←");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y);
		printf("→");
		Gotoxy(v2iLEffect.x, v2iLEffect.y + 1);
		printf("↑");
		Gotoxy(v2iLEffect.x, v2iLEffect.y - 1);
		printf("↓");

		Gotoxy(v2iREffect.x + 2, v2iREffect.y + 1);
		printf("  ");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y + 1);
		printf("  ");
		Gotoxy(v2iREffect.x + 2, v2iREffect.y - 1);
		printf("  ");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y - 1);
		printf("  ");
		Gotoxy(v2iREffect.x + 2, v2iREffect.y);
		printf("←");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y);
		printf("→");
		Gotoxy(v2iREffect.x, v2iREffect.y + 1);
		printf("↑");
		Gotoxy(v2iREffect.x, v2iREffect.y - 1);
		printf("↓");
		Sleep(100);

		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y);
		printf("  ");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y);
		printf("  ");
		Gotoxy(v2iLEffect.x, v2iLEffect.y + 1);
		printf("  ");
		Gotoxy(v2iLEffect.x, v2iLEffect.y - 1);
		printf("  ");
		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y + 1);
		printf("↖");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y + 1);
		printf("↗");
		Gotoxy(v2iLEffect.x + 2, v2iLEffect.y - 1);
		printf("↙");
		Gotoxy(v2iLEffect.x - 2, v2iLEffect.y - 1);
		printf("↘");

		Gotoxy(v2iREffect.x + 2, v2iREffect.y);
		printf("  ");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y);
		printf("  ");
		Gotoxy(v2iREffect.x, v2iREffect.y + 1);
		printf("  ");
		Gotoxy(v2iREffect.x, v2iREffect.y - 1);
		printf("  ");
		Gotoxy(v2iREffect.x + 2, v2iREffect.y + 1);
		printf("↖");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y + 1);
		printf("↗");
		Gotoxy(v2iREffect.x + 2, v2iREffect.y - 1);
		printf("↙");
		Gotoxy(v2iREffect.x - 2, v2iREffect.y - 1);
		printf("↘");
		Sleep(100);
	}
}