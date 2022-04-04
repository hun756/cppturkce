#ifndef HIDE_CONSOLE_HPP
#define HIDE_CONSOLE_HPP

#ifdef _WIN32

#include <windows.h>
#pragma comment(lib, "windowscodecs.lib")

class ConsoleVisibility
{
public:
    static void hide()
    {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
    }

    static void show()
    {
        ShowWindow(GetConsoleWindow(), SW_SHOW);
    }

    bool isVisible() const
    {
        return IsWindowVisible(GetConsoleWindow()) != false;
    }
};

#endif /* Check Platform Windows */

#endif /* end of include guard : HIDE_CONSOLE_HPP */