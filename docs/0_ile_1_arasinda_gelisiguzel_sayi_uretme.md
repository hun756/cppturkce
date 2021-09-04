### 0 ile 1 arasında gelişigüzel sayı üretme

```cpp
#include <iostream>
#include <random>

#ifdef _WIN32
#include <Windows.h>
#endif

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0, 1);

    while (true)
    {
        std::cout << dist(gen) << '\n';
        Sleep(500);
    }

    return 0;
}
```

```cpp
double generateRandomBw0and1()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0, 1);

    return dist(gen);
}

```

Uygulaması : 
```cpp
int main()
{
    while (true)
    {
        std::cout << generateRandomBw0and1() << '\n';
        Sleep(500);
    }

    return 0;
}
```