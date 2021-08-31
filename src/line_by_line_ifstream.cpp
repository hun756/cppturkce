#include <iostream>
#include <fstream>
#include <string>


int main()
{
    std::ifstream file("./try.txt", std::ios::in);
    std::string line;

    if(file.is_open())
    {
        while(std::getline(file, line))
        {
            std::cout << line << '\n';
        }
    }
    else
    {
        std::cerr << "Unable to open file : " << '\n'; 
    }

    return 0;
}