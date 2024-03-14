#include "Window.h"
#include "Sound.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	Window window(hInstance, L"Y2023 Happy Halloween", L"Y2023 Happy Halloween", CW_USEDEFAULT, CW_USEDEFAULT, 1600, 900);

	window.Show(nCmdShow);

	Sleep(250);

	Sound::Play(BGM, false);

	window.MessageLoop();

	return 0;
}