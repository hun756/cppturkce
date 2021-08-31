#include <iostream>
#include <random>

#ifdef _WIN32
#include <Windows.h>
#endif

char generateRandom() 
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dist(97, 122);

    return static_cast<char>(dist(gen));
}

int main() 
{
    while (true)
    {
        std::cout << generateRandom() << '\n';
        Sleep(500);
    }
}