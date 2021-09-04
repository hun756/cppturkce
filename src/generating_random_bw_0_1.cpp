#include <iostream>
#include <random>

#ifdef _WIN32
#include <Windows.h>
#endif

double generateRandomBw0and1()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0, 1);

    return dist(gen);
}

int main()
{
    while (true)
    {
        std::cout << generateRandomBw0and1() << '\n';
        Sleep(500);
    }

    return 0;
}