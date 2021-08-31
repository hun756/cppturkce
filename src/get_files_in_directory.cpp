#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

std::vector<std::string> getFiles(std::string path)
{
    std::vector<std::string> res{};
    for (const auto &entry : std::filesystem::directory_iterator(path))
        res.push_back(entry.path().string());

    return res;
}

namespace App
{
    static void Run(std::vector<std::string> args)
    {
        // const std::string _path = ".";
        const std::string _path = args[0];

        for (auto &&var : getFiles(_path))
            std::cout << var << '\n';
    }
} // namespace App

int main(int argc, const char *argv[])
{
    App::Run( {argv + 1, argv + argc} );

    return 0;
}