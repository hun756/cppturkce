#include <iostream>
#include <iterator>

namespace My
{
    template <class T, size_t N>
    constexpr size_t _size(T (&)[N]) { return N; }
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    std::cout << std::size(arr);
    return 0;
}