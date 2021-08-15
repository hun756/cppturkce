### C++ ' da uç birim (Konsol/Terminal) nasıl gizlenir?

Gerçekleştirim:
```cpp
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
```

Kullanım:
```cpp
#include <iostream>
#include "hide_console.hpp"


int main(int argc, const char* argv[])
{
    std::cout << "Program started, after 5 seonds, console is going to be hidden : " << '\n';
    Sleep(5000);
    ConsoleVisibility::hide();

    Sleep(5000);

    std::cout << "after 5 seonds, now console is visible: " << '\n';
    ConsoleVisibility::show();

    return 0;
}
```