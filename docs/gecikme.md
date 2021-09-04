### C++'da gecikme nasıl oluşturulur?

```cpp
#include <chrono>
#include <thread>

void delay(int delayNum)
{
    std::this_thread::sleep_for(std::chrono::nanoseconds(10));
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(delayNum));
}

int main()
{
    delay(5);
}
```