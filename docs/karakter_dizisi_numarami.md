### Karakter Dizisinin Numara Olduğunu Kontrol Etme

Dizinin karakterleri üzerinde döngüsel işlem gerçekleştirilerek karakterin '0' - '9' aralığında bulunduğu kontrol edilerek bu işlem gerçekleştirilir.

```cpp
namespace Algo2
{
    bool isNumber(const std::string &str)
    {
        if (str.empty()) return false;
        for (const auto &ch : str)
        {
            if (ch < '0' || ch > '9')
            {
                return false;
            }
        }
        return true;
    }
}
```

Bu işlemi gerçekleştirmek için pek çok algoritma tasarlanabilir. C++11 standartlarıyla gelen std::all_of kullanılabilir. Döngü yerine STL içerisinde bulunan algoritmaları tercih etmek daha doğrudur.

```cpp
namespace Algo3 {
    bool isNumber(const std::string &str) {
        return !str.empty() && std::all_of(str.begin(), str.end(), std::isdigit);
    }
}
```