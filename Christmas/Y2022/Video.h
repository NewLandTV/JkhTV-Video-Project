#ifndef __VIDEO_H__
#define __VIDEO_H__

#define CONSOLE_WIDTH 160
#define CONSOLE_HEIGHT 40
#define MAX_FRAME 200
#define MAX_BUFFER_SIZE (CONSOLE_WIDTH * CONSOLE_HEIGHT * MAX_FRAME + 1)

// Macro functions
#define Gotoxy(x, y) { SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y }); }

class Video
{
private:
	char* buffer;

	unsigned int UintDivideEx(unsigned int a, unsigned int b);
	void PrintBuffer(unsigned int frame);
	void Wait(unsigned long long milliseconds);

public:
	Video();
	~Video();

	void Play(unsigned int fps);
};

#endif