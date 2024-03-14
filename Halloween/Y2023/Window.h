#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <Windows.h>

#define FPS 60

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

class Window
{
private:
	HWND handle;
	WNDCLASSEX classEx;

	bool Initialize(HINSTANCE hInstance, LPCWSTR className, LPCWSTR windowName, int x, int y, int width, int height);

public:
	Window(HINSTANCE hInstance, LPCWSTR className, LPCWSTR windowName, int x, int y, int width, int height);

	void MessageLoop();
	void Show(int nCmdShow);
};

#endif