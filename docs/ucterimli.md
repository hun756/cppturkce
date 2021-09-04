### C++'da kısa koşul ifadesi nasıl yazılır.

Aşağıda bir if-else örneği verilmiştir.

```cpp
#include <iostream>

int main()
{
    int age = 21;

    if (age >= 18)
    {
        std::cout << "You can vote.!\n";
    }
    else
    {
        std::cout << "You can't vote.!\n";
    }
}
```

Buradaki program yaş değişkeni 18 den büyük ise oy verileceğini aksi halde oy verilemeyeceğini ekrana yazdırmaktadır.

> Üç terimli sözdizimi şu şekildedir : `condition ? expression1 : expression 2`;

Yukarıdaki işlemi tekrardan düzenlersek :

```cpp
#include <iostream>

int main()
{
    int age = 21;

    age >= 18   ?   std::cout << "You can vote.!\n"
                :   std::cout << "You can't vote.!\n";
}

```
