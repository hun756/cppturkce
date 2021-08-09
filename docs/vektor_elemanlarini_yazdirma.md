## Vektörü Yazdırma

### Vektör Elemanlarını Konsolda Yazdırma

```cpp
template <typename T>
void printVector(std::vector<T>& vec, std::ostream& os)
{
    os << "std::vector<> [\n";
    for (auto&& var : vec) 
        os << "  " << var << ", ";
        
    os << "\n]\n";
}
```

Kullanım şu şekildedir:
```cpp
#include <iostream>

int main() {
    std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8 };
    
    printVector(v, std::cout);
}
```