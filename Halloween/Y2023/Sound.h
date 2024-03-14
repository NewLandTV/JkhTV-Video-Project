#ifndef __SOUND_H__
#define __SOUND_H__

#include <Windows.h>
#include <mmsystem.h>
#include <Digitalv.h>

#pragma comment(lib, "winmm.lib")

#define BGM L"E:\\UserData\\Music\\Calewalk_Projects\\Halloween_Y2023_BGM\\Audio Export\\Halloween_Y2023_BGM.mp3"

static class Sound
{
private:
	static int id;

	static MCI_OPEN_PARMS openMusic;

public:
	static void Play(LPCWSTR path, bool loop);
};

#endif