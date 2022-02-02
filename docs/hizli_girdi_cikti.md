### C++'da Hızlı girdi ve çıktı işlemleri

```cpp 
std::ios_base::sync_with_stdio(false)
``` 
    İlgili programda std::cin / std::cout objelerinden önce çağrıldığında C++'ın C akışları ile olan bütün senkronizasyonlarını değiştirir. 
```cpp 
std::cin.tie(NULL);
``` 
    Girdi alınmadan önce STDOUT'u temizlemeye yardımcı olur.

```cpp
#define ENABLE_FAST_IO std::ios_base::sync_with_stdio(false); \     
        std::cin.tie(NULL); 
```
```cpp
int main() {
    ENABLE_FAST_IO

    ///< Operations ...
    ///< ...
    ///<  ...
}
```