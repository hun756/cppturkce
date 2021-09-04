### C++'da dizinin uzunluğu nasıl belirlenir?

```cpp
int arr[] = {1, 2, 3, 4};
```
4 elemanlı bir dizimiz olduğunu kabul edelim.

```cpp
namespace My
{
    template <class T, size_t N>
    constexpr size_t _size(T (&)[N]) { return N; }
}
```

Uygulama:
```cpp
int main()
{
    int arr[] = {1, 2, 3, 4};

    std::cout << My::_size(arr);
    return 0;
}
```

C tipi `sizeof(arr)/sizeof(*arr)` da kullanılabilir.

C++ standart kitaplık içerisinde bulunan std::size kullanarak dizinin uzunluğunu hesaplayabiliriz.

```cpp
int main()
{
    int arr[] = {1, 2, 3, 4};

    std::cout << std::size(arr);
    return 0;
}
```