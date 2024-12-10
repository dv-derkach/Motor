#pragma once
#include "windows.h"

namespace Motor {
    class Win32NativeWindow {
        private:
            HINSTANCE   m_hInstance;
            HWND        m_hWnd;
            WNDCLASSEXW m_wc;

        public:
            Win32NativeWindow();

            ~Win32NativeWindow();

            void Init();

            void Update();

            void Shutdown();
    };
}