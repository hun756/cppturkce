## Vektörün Toplamı

### Bir vektörde bulunan değerlerin toplamı

```cpp
#include <iostream>
#include <vector>
#include <numeric>


template <typename T>
T sumVector(std::vector<T>& v)
{
    return std::accumulate(v.begin(), v.end(), 0);
}


int main() 
{
    std::vector<int> vec { 1, 2, 3, 4, 5, -1 };
    auto res = sumVector(vec);
    
    std::cout << "Total : " << res << '\n';
    
    return 0;
}
```