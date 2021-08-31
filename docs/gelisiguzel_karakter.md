### C++'da gelişigüzel karakter nasıl üretilir?

```cpp
#include <random>

char generateRandom() 
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dist(97, 122);

    return static_cast<char>(dist(gen));
}
```

> ASCII tablosunda alfabetik karakterler 97- 122 (küçük harfler) aralığındadadır.
> Bu işlev bu sayı aralığında gelişigüzel bir sayı oluşturarak onun alfabetik karakter 
> karşılığını döndürür.   

Uygulama:

```cpp
#include <iostream>

#ifdef _WIN32
#include <Windows.h>
#endif

int main() 
{
    while (true)
    {
        std::cout << generateRandom() << '\n';
        Sleep(500);
    }
}

```