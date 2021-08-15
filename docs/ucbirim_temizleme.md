### Uç birim nasıl temizlenir?


> cls

komutu, komut istemi penceresinde görünen tüm bilgileri temizler. Bunun için standart kitaplık içerisinde bulunan `system(const char*)` işlevinde "cls" komutunu geçireceğiz.

```cpp
#include <string>
#include <iostream>

namespace System
{
    static void exec(std::string cmd)
    {
        system(cmd.c_str());
    }
} ///< namespace System


void clearConsole()
{
    System::exec("cls");
}


int main() 
{
    ///< Clear Console
    clearConsole();
}
```

Komut satırı:

> clang++ -o app.exe clear_console.cpp
> 
> `echo strings before program execution`
> 
> app.exe 