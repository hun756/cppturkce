#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b)
{
    return b ? gcd(b, a % b) : a;
}


int main()
{
    std::cout << gcd(24, 18);
}