### C++ da zamanlayıcı nasıl oluşturulur ?

```cpp
class Timer
{
public:
    void start()
    {
        startTime = std::chrono::high_resolution_clock::now();
        isRunning = true;
        
    }

    void stop()
    {
        stopTime = std::chrono::high_resolution_clock::now();
        isRunning = false;
    }

    double getElapsedTime()
    {
        if (isRunning)
            this->stop();
        
        return std::chrono::duration_cast <
            std::chrono::milliseconds
        > (stopTime - startTime).count();
    }

private:
    std::chrono::time_point <
        std::chrono::high_resolution_clock
    >  startTime;

    std::chrono::time_point <
        std::chrono::high_resolution_clock
    >  stopTime;

    bool isRunning{false};
};
```

Kullanım : 

```cpp
#include "timer.hpp"
#include <Windows.h>
#include <iostream>


int main()
{
    Timer t;
    t.start();

    ///< Code will come here
    Sleep(2000);
    ///< 
    ///< 
    ///< 
    ///< -------------------

    t.stop();

    std::cout << "Program Executed in : " << t.getElapsedTime() << '\n';

    return 0;
}
```