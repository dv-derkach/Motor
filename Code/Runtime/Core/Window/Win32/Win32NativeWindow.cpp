#include "Core/Window/Win32/Win32NativeWindow.h"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CLOSE:
            if (MessageBoxExW(hWnd, L"Are you really?", L"Closing window", MB_OKCANCEL, LANG_ENGLISH) == IDOK) {
                DestroyWindow(hWnd);
            }

            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

namespace Motor {
    Win32NativeWindow::Win32NativeWindow() {
        m_hInstance = GetModuleHandleW(NULL);

        m_wc               = {sizeof(m_wc)};
        m_wc.style         = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
        m_wc.lpfnWndProc   = WindowProc;
        m_wc.cbClsExtra    = 0;
        m_wc.cbWndExtra    = 0;
        m_wc.hInstance     = m_hInstance;
        m_wc.hIcon         = LoadIcon(m_hInstance, IDI_APPLICATION);
        m_wc.hIconSm       = LoadIcon(m_hInstance, IDI_APPLICATION);
        m_wc.hCursor       = LoadCursor(m_hInstance, IDC_ARROW);
        m_wc.hbrBackground = (HBRUSH)(GetStockObject(WHITE_BRUSH));
        m_wc.lpszMenuName  = NULL;
        m_wc.lpszClassName = L"MOTOR_WINDOW_CLASS";

        m_hWnd = CreateWindowExW(0, L"MAIN_WINDOW_CLASS", L"MAIN_WINDOW", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, m_hInstance, NULL);
    }

    Win32NativeWindow::~Win32NativeWindow() {
    }

    void Win32NativeWindow::Init() {
        RegisterClassExW(&m_wc);
    }

    void Win32NativeWindow::Update() {
    }

    void Win32NativeWindow::Shutdown() {
    }
}