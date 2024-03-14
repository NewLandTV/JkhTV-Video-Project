#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "Window.h"
#include "Graphics.h"
#include "Sound.h"
#include "resource.h"

int part = 0;

HINSTANCE hGlobalInstance;

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	#pragma region Variables
	// Paint
	RECT clientRect;
	HDC hdc;
	HDC hMemoryDC;
	HDC hTempDC;
	PAINTSTRUCT paintStruct;
	HBITMAP hBitmap;
	HBITMAP hOldBitmap;
	HPEN hPen;
	HPEN hOldPen;
	HBRUSH hBrush;
	HBRUSH hOldBrush;

	// Data
	static float x = 0.0f;
	static float y = 80.0f;
	static float yOffset = 0.0f;
	static float time = 0.0f;
	static float speed = 1.0f;
	static float pumpkinPositionY = -144.0f;
	static int pumpkinCount = 1;
	#pragma endregion

	// Process message
	switch (message)
	{
	// Setup
	case WM_CREATE:
		Graphics::Initialize();

		SetTimer(hWnd, 0, FPS * 0.001f, nullptr);

		break;

	// Tick
	case WM_TIMER:
		#pragma region Drop the square star to ground
		if (time >= 1000.0f && time < 2000.0f)
		{
			part = 1;
		}
		if (time >= 2000.0f && time < 3000.0f)
		{
			part = 0;
		}
		if (time >= 3000.0f && time < 10500.0f)
		{
			part = 1;
		}
		#pragma endregion
		#pragma region Stop the square star
		if (time >= 10500.0f && time < 14500.0f)
		{
			speed = 0.0f;
		}
		#pragma endregion
		#pragma region Run left to the square star.
		if (time >= 14500.0f && time < 16500.0f)
		{
			speed = 8.0f;
			pumpkinPositionY += pow((time - 14500.0f) * 0.001f, 2.0f) * 4.9f;
		}
		#pragma endregion
		#pragma region On pumpkin tower trigger
		if (time >= 23500.0f && time < 34500.0f)
		{
			part = 0;

			pumpkinPositionY -= pow((time - 23500.0f) * 0.001f, 2.0f) * 4.9f;

			// Move square star
			if (time < 24250.0f)
			{
				yOffset += time - 23500.0f;
			}
		}
		#pragma endregion
		#pragma region The square star is shining like a star
		if (time >= 24500.0f && time < 25500.0f)
		{
			part = 1;

			pumpkinCount++;
		}
		if (time >= 24750.0f)
		{
			part = 0;
		}
		if (time >= 25000.0f)
		{
			part = 1;
		}
		if (time >= 25250.0f)
		{
			part = 0;
		}
		#pragma endregion
		#pragma region Re-pumpkin tower
		if (time >= 29000.0f)
		{
			part = 1;

			speed = 1.0f;
			pumpkinCount = 1;
			pumpkinPositionY = 378.0f;
		}
		if (time >= 31000.0f)
		{
			speed = 0.0f;
			pumpkinCount = 6;
			pumpkinPositionY = 0.0f;
		}
		#pragma endregion
		#pragma region Reverse
		if (time >= 36000.0f && time < 36500.0f)
		{
			speed -= time - 36000.0f;
		}
		#pragma endregion
		#pragma region Reverse stop.
		if (time >= 36500.0f && time < 37500.0f)
		{
			speed = 0.0f;
		}
		#pragma endregion
		#pragma region Teleportation
		if (time >= 37500.0f && time < 37750.0f)
		{
			part = 0;

			speed = 0.0f;
			x = 0.0f;
			yOffset = 0.0f;
		}
		if (time >= 37750.0f && time < 38000.0f)
		{
			part = 1;

			x = 40.0f;
		}
		if (time >= 38000.0f && time < 38250.0f)
		{
			part = 0;

			x = 160.0f;
		}
		if (time >= 38250.0f && time < 38500.0f)
		{
			part = 1;

			x = 640.0f;
		}
		#pragma endregion
		#pragma region Ending
		if (time >= 39500.0f && time < 41500.0f)
		{
			x += FPS * 0.001f;
		}
		if (time >= 41500.0f && time < 42500.0f)
		{
			x += FPS * 0.1f;
			pumpkinCount = 0;
		}
		if (time >= 46000.0f && time < 50000.0f)
		{
			part = 2;

			yOffset = 128.0f;
			pumpkinPositionY = 378.0f;
			pumpkinCount = 1;
		}
		if (time >= 50000.0f)
		{
			part = 3;

			x = 0.0f;
			y = 0.0f;
			yOffset = 0.0f;
			pumpkinCount = 0;
		}
		#pragma endregion

		// X, Y
		if (time <= 50000.0f)
		{
			y = max(min(pow(x += FPS * 0.001f * speed, 2.0f) * 4.9f, 800.0f) - yOffset, 80.0f);
			time += 1000.0f / FPS;
		}

		InvalidateRect(hWnd, nullptr, false);

		break;
	case WM_PAINT:
	{
		#pragma region Double buffering begin process
		GetClientRect(hWnd, &clientRect);

		hdc = BeginPaint(hWnd, &paintStruct);
		hMemoryDC = CreateCompatibleDC(hdc);
		hBitmap = CreateCompatibleBitmap(hdc, clientRect.right, clientRect.bottom);
		hOldBitmap = reinterpret_cast<HBITMAP>(SelectObject(hMemoryDC, hBitmap));

		PatBlt(hMemoryDC, 0, 0, clientRect.right, clientRect.bottom, BLACKNESS);

		hTempDC = hdc;
		hdc = hMemoryDC;
		hMemoryDC = hTempDC;
		#pragma endregion

		// Draw
		int pumpkinSizeX = 256;
		int pumpkinSizeY = 144;

		// Draw pumpkins
		for (int i = 0; i < pumpkinCount; i++)
		{
			float x = (clientRect.right >> 1) - (pumpkinSizeX >> 1);
			float y = pumpkinPositionY + i * pumpkinSizeY;

			Graphics::DrawImageAt(hGlobalInstance, hWnd, hdc, IDB_PUMPKIN, L"PNG", x, y, pumpkinSizeX, pumpkinSizeY);
		}

		switch (part)
		{
		case 0:
			hPen = CreatePen(PS_SOLID, 8, RGB(255, 255, 255));
			hOldPen = reinterpret_cast<HPEN>(SelectObject(hdc, hPen));
			hBrush = CreateSolidBrush(RGB(0, 0, 0));
			hOldBrush = reinterpret_cast<HBRUSH>(SelectObject(hdc, hBrush));

			Rectangle(hdc, x - 16 , y - 16, x + 16, y + 16);
			SelectObject(hdc, hOldPen);
			SelectObject(hdc, hOldBrush);
			DeleteObject(hPen);
			DeleteObject(hBrush);

			break;
		case 1:
			Graphics::DrawImageAt(hGlobalInstance, hWnd, hdc, IDB_CLOCK, L"PNG", x, y - 80, 128, 128);

			break;
		case 2:
			Graphics::DrawTextAt(hWnd, hdc, L"¡Ù", x, y, 64, L"Arial", Gdiplus::Color(178, 221, 53));

			break;
		case 3:
			Graphics::DrawTextAt(hWnd, hdc, L"HAPPY  HALLOWEEN!", (clientRect.right >> 1) - 594.0f, 0.0f, 108, L"Noto Sans", Gdiplus::Color(190, 180, 40));
			Graphics::DrawTextAt(hWnd, hdc, L"ON OCT 31, 2023.", 260.0f, 130.0f, 30, L"Arial", Gdiplus::Color(120, 160, 90));
			Graphics::DrawTextAt(hWnd, hdc, L"- Made by JkhTV -", (clientRect.right >> 1) - 119.0f, clientRect.bottom - 80.0f, 28, L"Gulim", Gdiplus::Color(40, 180, 120));

			break;
		}

		#pragma region Double buffering end process
		hTempDC = hdc;
		hdc = hMemoryDC;
		hMemoryDC = hTempDC;

		GetClientRect(hWnd, &clientRect);
		BitBlt(hdc, 0, 0, clientRect.right, clientRect.bottom, hMemoryDC, 0, 0, SRCCOPY);
		SelectObject(hMemoryDC, hOldBitmap);
		DeleteObject(hOldBitmap);
		DeleteDC(hMemoryDC);
		EndPaint(hWnd, &paintStruct);
		#pragma endregion

		break;
	}
	case WM_DESTROY:
		Graphics::Release();

		PostQuitMessage(0);

		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}

	return 0;
}

bool Window::Initialize(HINSTANCE hInstance, LPCWSTR className, LPCWSTR windowName, int x, int y, int width, int height)
{
	// Regist window class
	classEx.hInstance = hInstance;
	classEx.lpszClassName = className;
	classEx.lpfnWndProc = WindowProcedure;
	classEx.style = CS_DBLCLKS;
	classEx.cbSize = sizeof(WNDCLASSEX);
	classEx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON));
	classEx.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON));
	classEx.hCursor = LoadCursor(nullptr, IDC_ARROW);
	classEx.lpszMenuName = nullptr;
	classEx.cbClsExtra = 0;
	classEx.cbWndExtra = 0;
	classEx.hbrBackground = static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH));

	if (!RegisterClassEx(&classEx))
	{
		return false;
	}

	// Create window handle
	handle = CreateWindowEx(WS_EX_TOPMOST, className, windowName, WS_CAPTION | WS_SYSMENU, x, y, width, height, HWND_DESKTOP, nullptr, hInstance, nullptr);

	RECT desktopRect;

	GetWindowRect(GetDesktopWindow(), &desktopRect);

	if (x == CW_USEDEFAULT)
	{
		x = (desktopRect.right - width) >> 1;
	}

	if (y == CW_USEDEFAULT)
	{
		y = (desktopRect.bottom - height) >> 1;
	}

	MoveWindow(handle, x, y, width, height, true);

	return true;
}

Window::Window(HINSTANCE hInstance, LPCWSTR className, LPCWSTR windowName, int x, int y, int width, int height)
{
	hGlobalInstance = hInstance;

	if (!Initialize(hInstance, className, windowName, x, y, width, height))
	{
		std::cout << "Windows could not be initialized.";

		exit(-1);
	}
}

void Window::MessageLoop()
{
	MSG message;

	while (GetMessage(&message, nullptr, 0, 0))
	{
		TranslateMessage(&message);

		DispatchMessage(&message);
	}
}

void Window::Show(int nCmdShow)
{
	ShowWindow(handle, nCmdShow);
}