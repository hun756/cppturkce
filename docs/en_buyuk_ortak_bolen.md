### C++'da en büyük ortak bölen nasıl hesaplanır?

```cpp
#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b)
{
    return b ? gcd(b, a % b) : a;
}
```

Uygulama : 

24 ve 18 sayılarının en büyük ortak böleninihesaplayalım.

```cpp
int main()
{
    std::cout << gcd(24, 18);
}
```