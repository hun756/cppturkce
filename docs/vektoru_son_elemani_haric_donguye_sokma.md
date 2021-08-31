### Bir vektör son eleman hariç nasıl döngüye sokulur ?

> std::prev kullanarak bitiş yineleyicisine buna parametre olarak geçirdiğimizde döngü bitiş yinleyicisinin bir öncesindeki elemanında çıkacaktır..

    
```cpp
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> fruits {"melon", "watermelon", "cherry", "peach"};   

    for (auto iter = fruits.begin(); iter != std::prev(fruits.end()); ++iter)
    {
        ///< Do something
        std::cout << *iter << '\n';
    }
}
```

> Şu şekilde de kullanılabilir.
```cpp
for (int i = 0; i < fruits.size() - 1; ++i)
{
    ///< Do Something
    std::cout << fruits[i] << '\n';
}
```