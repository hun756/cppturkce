## Vector - Set Convension

```cpp
#include <set>
#include <vector>


template <typename T>
std::set<T> vectorToSet(std::vector<T>& vec)
{
    return {vec.begin(), vec.end()};
}
```

Kullanım :

```cpp
#include <iostream>

int main()
{
    std::vector<int> x{1,1,2,3,4,5};
    
    auto val = vectorToSet(x);
    
    for (auto it = val.begin(); it != val.end(); ++it) 
        std::cout << ' ' << *it;
}
```