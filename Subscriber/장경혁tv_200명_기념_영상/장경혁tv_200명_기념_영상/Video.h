#ifndef __VIDEO_H__
#define __VIDEO_H__

#include <iostream>
#include <Windows.h>

// 콘솔 가로 세로
#define CONSOLE_WIDTH 180
#define CONSOLE_HEIGHT 45

typedef struct _Vector2Int
{
	int x;
	int y;
} Vector2Int;

class Video
{
private:
	Vector2Int v2iLEffect;
	Vector2Int v2iREffect;

	void Gotoxy(int x, int y);

public:
	void Play();
};

#endif