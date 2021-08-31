### C++'da Girdi Beyaz Boşlukla Birlite Nasıl Alınır?

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string inputStr;
    std::getline(std::cin >> std::ws, inputStr);

    std::cout << inputStr << '\n';

    return 0;
}
```