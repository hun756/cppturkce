## Vektör Belirtilen Değeri İçeriyor Mu?

```cpp
#include <algorithm>

template <typename T, typename U>
static bool contains(T arr, U findVal)
{
    return std::find(arr.begin(), arr.end(), findVal) != arr.end();
}
```