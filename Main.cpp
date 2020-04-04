#pragma comment(lib, "user32.lib")
#pragma comment(lib, "kernel32.lib")

#define UNICODE
#define _UNICODE

#include <windows.h>


LRESULT WINAPI wndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
        case WM_CLOSE:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    WNDCLASSEX wc = {};

    wc.cbSize = sizeof(wc);
    wc.lpszClassName = L"SuperWindow";
    wc.lpfnWndProc = wndProc;
    wc.style = CS_VREDRAW | CS_HREDRAW;
    wc.hInstance = GetModuleHandle(NULL);

    RegisterClassEx(&wc);


    HWND hWnd = CreateWindow(L"SuperWindow", L"Main Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100,
        1280, 720, NULL, NULL, GetModuleHandle(NULL), NULL);


    MSG msg = {};

    while(GetMessage(&msg, NULL, 0, 0))
    {
        DispatchMessage(&msg);
    }

    return 0;
}