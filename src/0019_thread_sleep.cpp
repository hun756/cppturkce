#include <iostream>
#include <thread>
#include <chrono>


void opr(std::string& str, int countNum)
{
    std::cout << str << '\n';

    for (size_t i = countNum; i > 0; --i)
    {
        std::cout << i << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}


int main()
{
    int count = 10;
    std::string _str = "Program will terminated in :";

    opr(_str, 10);

    return 0;
}