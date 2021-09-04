### C++' da vektörün başına eleman ekleme

```cpp
#include <vector>

template<typename T>
void insertBegin(std::vector<T>& vec, T elem)
{
    vec.insert(vec.begin(), elem);
}
```

Burada vektör sınıfnın insert işlevini kullandık. Insert işlevine ilgili vektör nesnesinin başlangıç yineleyicisini ve ekleyeceğimiz elementi parametre olarak vererek vektörün başlangıcına ekleme işlemi gerçekleştirebiliriz.

> Uygulaması : 

```cpp
#include <iostream>

int main()
{
    std::vector<int> vec {2, 3, 4};

    // vec.insert(vec.begin(), 1);
    insertBegin(vec, 1);

    for (auto&& var : vec)
        std::cout  << var << '\n';

    return 0;
}
```