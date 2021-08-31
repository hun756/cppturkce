### C++'da değişken türü nasıl belirlenir?

> typeid kullanarak belirlenebilir. Aşağıda buna örnek bir kulllanım verilmiştir.

```cpp
#include <iostream>

int main()
{
    int var1 {0};
    std::string str {"string"};

    std::cout << typeid(var1).name() << '\n';
    std::cout << typeid(str).name() << '\n';

    return 0;
}
```