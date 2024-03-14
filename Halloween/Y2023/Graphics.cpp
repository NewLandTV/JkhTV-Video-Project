#include "Graphics.h"

ULONG_PTR Graphics::token = 0;

Gdiplus::Graphics* Graphics::graphics = nullptr;

Gdiplus::Image* Graphics::LoadImageFromResource(HINSTANCE hInstance, int imageID, LPCWSTR resourceType)
{
	IStream* stream = nullptr;

	HRSRC resource = FindResource(hInstance, MAKEINTRESOURCE(imageID), resourceType);

	if (resource == nullptr || CreateStreamOnHGlobal(nullptr, true, &stream) != S_OK)
	{
		return nullptr;
	}

	LPVOID resourceData = LockResource(LoadResource(hInstance, resource));

	if (resourceData == nullptr)
	{
		return nullptr;
	}

	DWORD imageSize = SizeofResource(hInstance, resource);
	DWORD dwReadWrite = 0;

	stream->Write(resourceData, imageSize, &dwReadWrite);

	Gdiplus::Image* image = Gdiplus::Image::FromStream(stream);

	stream->Release();

	return image;
}

bool Graphics::Initialize()
{
	// Setup Gdi+
	Gdiplus::GdiplusStartupInput input;

	Gdiplus::GdiplusStartup(&token, &input, nullptr);

	return true;
}

void Graphics::Release()
{
	delete graphics;

	// Gdi+ shutdown
	Gdiplus::GdiplusShutdown(token);
}

void Graphics::DrawImageAt(HINSTANCE hInstance, HWND hWnd, HDC hdc, int imageID, LPCWSTR resourceType, int x, int y, int width, int height)
{
	Gdiplus::Image* image = LoadImageFromResource(hInstance, imageID, resourceType);
	Gdiplus::Rect rect(x, y, width, height);

	// Check error
	if (image == nullptr || image->GetLastStatus() != Gdiplus::Ok)
	{
		return;
	}

	if (graphics == nullptr)
	{
		graphics = new Gdiplus::Graphics(hdc);
	}

	graphics->FromHDC(hdc)->DrawImage(image, rect);
}

void Graphics::DrawTextAt(HWND hWnd, HDC hdc, LPCWSTR text, float x, float y, int fontSize, LPCWSTR fontFamilyName, Gdiplus::Color color)
{
	Gdiplus::FontFamily fontFamily(fontFamilyName);
	Gdiplus::Font font(&fontFamily, fontSize, Gdiplus::FontStyleBold, Gdiplus::UnitPixel);
	Gdiplus::PointF rect(x, y);
	Gdiplus::SolidBrush brush(color);

	// Check error
	if (font.GetLastStatus() != Gdiplus::Ok || brush.GetLastStatus() != Gdiplus::Ok)
	{
		return;
	}

	if (graphics == nullptr)
	{
		graphics = new Gdiplus::Graphics(hdc);
	}

	graphics->FromHDC(hdc)->DrawString(text, -1, &font, rect, &brush);
}