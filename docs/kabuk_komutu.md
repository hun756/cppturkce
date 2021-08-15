### C++ 'da kabuk komutu nasıl çalıştırılır ?

```cpp
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

class Cmd
{
public:
    static std::string exec(std::string command)
    {
        std::array<char, 256> buffer;
        std::string result;
        std::unique_ptr <
            FILE, 
            decltype(&_pclose)
        > pipe(_popen(command.c_str(), "r"), _pclose);

        if (!pipe)
            throw std::runtime_error("_popen() failed!");

        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
            result += buffer.data();

        return result;
    }
};
```

Kullanım : 
````cpp
#include "execute_shell.hpp"
#include <iostream>

int main()
{
    std::cout << Cmd::exec("echo \"Hello World..!\"");
    return 0;
}
```