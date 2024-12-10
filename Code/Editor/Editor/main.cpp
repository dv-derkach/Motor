#include "Core/Window/Win32/Win32NativeWindow.h"

int main() {
    Motor::Win32NativeWindow* window = new Motor::Win32NativeWindow();

    window->Init();

    window->Update();

    window->Shutdown();

    return 0;
}