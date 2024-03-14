#include "Sound.h"

int Sound::id;

MCI_OPEN_PARMS Sound::openMusic;

void Sound::Play(LPCWSTR path, bool loop)
{
	openMusic.lpstrElementName = path;
	openMusic.lpstrDeviceType = L"mpegvideo";

	mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, reinterpret_cast<DWORD_PTR>(&openMusic));

	id = openMusic.wDeviceID;

	mciSendCommand(id, MCI_PLAY, loop ? MCI_DGV_PLAY_REPEAT : MCI_NOTIFY, reinterpret_cast<DWORD_PTR>(&openMusic));
}