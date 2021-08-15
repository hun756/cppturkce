#ifndef CLEAR_CONSOLE_HPP
#define CLEAR_CONSOLE_HPP

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

#endif /* end of include guard :  CLEAR_CONSOLE_HPP */