#include <windows.h>
#include "Renderer.h"
#include "Input.h"
#include "Game.h"
#include "InputMapper.h"
#include "Libraries/sigslot.h"

RenderState renderState;
bool running = true;

BITMAPINFO bitmapInfo;

LRESULT CALLBACK WindowCallback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	LRESULT result = 0;
	switch (uMsg)
	{
	case WM_CLOSE:
	case WM_DESTROY: {
		running = false;
	} break;

	case WM_SIZE: {
		RECT rect;
		GetClientRect(hwnd, &rect);
		renderState.Width = rect.right - rect.left;
		renderState.Height = rect.bottom - rect.top;
		int bufferSize = renderState.Width * renderState.Height * sizeof(Color);

		if (renderState.Memory) VirtualFree(&renderState.Memory, 0, MEM_RELEASE);
		renderState.Memory = VirtualAlloc(0, bufferSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

		bitmapInfo.bmiHeader.biSize = sizeof(bitmapInfo.bmiHeader);
		bitmapInfo.bmiHeader.biHeight = renderState.Height;
		bitmapInfo.bmiHeader.biWidth = renderState.Width;
		bitmapInfo.bmiHeader.biPlanes = 1;
		bitmapInfo.bmiHeader.biBitCount = 32;
		bitmapInfo.bmiHeader.biCompression = BI_RGB;

	} break;

	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return result;
}

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	//Create Window Class
	WNDCLASS windowClass = {};
	windowClass.style = CS_HREDRAW | CS_VREDRAW;
	windowClass.lpszClassName = "GameWindowClassBoi";
	windowClass.lpfnWndProc = WindowCallback;

	//Register Class
	RegisterClass(&windowClass);

	//CreateWindow
	HWND window = CreateWindow(windowClass.lpszClassName, "woooooo, a game boiii",
		WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT,
		1280, 720, nullptr, nullptr, hInstance, nullptr);
	HDC hdc = GetDC(window);

	sigslot::signal<float> newFrameEvent;
	Renderer renderer(renderState);
	Input input{ &newFrameEvent };
	Game gameLoop{input, renderer};

	while (running) {
		// Input
		MSG message;
		newFrameEvent(0.1f); //deltaTime

		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {
			switch (message.message)
			{
			case WM_KEYUP:
			case WM_KEYDOWN:
			{
				UINT32 vkCode = static_cast<UINT32>(message.wParam);
				bool isDown = ((message.lParam & (18446744071562067968 /*1 << 31*/)) == 0);
				bool prevStateIsDown = ((message.lParam & (1 << 30)) > 0);

				if (prevStateIsDown ^ isDown)
				{
					input.SetButtonState(InputMapper::MapWindows(vkCode), isDown);					
				}
			} break;

			default:
			{
				TranslateMessage(&message);
				DispatchMessage(&message);
			} break;
			}
		}

		// Simulate
		gameLoop.SimulateFrame();

		//Render
		StretchDIBits(hdc, 0, 0, renderState.Width, renderState.Height, 0, 0,
			renderState.Width, renderState.Height, renderState.Memory,
			&bitmapInfo, DIB_RGB_COLORS, SRCCOPY);
	}
	return 0;
}