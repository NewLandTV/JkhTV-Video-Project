#ifndef __GRAPHICS_H__
#define __GRAPHICS_H__

#include <Windows.h>
#include <gdiplus.h>

#pragma comment(lib, "gdiplus.lib")

static class Graphics
{
private:
	static ULONG_PTR token;

	static Gdiplus::Graphics* graphics;

	static Gdiplus::Image* LoadImageFromResource(HINSTANCE hInstance, int imageID, LPCWSTR resourceType);

public:
	static bool Initialize();
	static void Release();

	static void DrawImageAt(HINSTANCE hInstance, HWND hWnd, HDC hdc, int imageID, LPCWSTR resourceType, int x, int y, int width, int height);
	static void DrawTextAt(HWND hWnd, HDC hdc, LPCWSTR text, float x, float y, int fontSize, LPCWSTR fontFamilyName, Gdiplus::Color color);
};

#endif