#include <iostream>
#include <string>
#include <regex>

namespace String
{
    std::string replace(std::string &value, std::string &wChng, std::string &rplVal)
    {
        return std::regex_replace(value, std::regex(wChng), rplVal);
    }
} // namespace String

int main()
{
    std::string toBuyList {
        "3 kilogrm elma\
        1 paket un\
        1 kilogrm seker\
        4 kilogrm cikolata"
    };

    std::string wrong = "kilogrm";
    std::string correct = "kilogram";


    std::cout  << "Duzenlenmemis Liste --------- \n";
    std::cout << toBuyList <<  '\n';


    std::cout  << "\nDuzenlenmis Liste --------- \n";
    toBuyList =  String::replace(toBuyList, wrong, correct);
    std::cout << toBuyList <<  '\n';

    return 0;
}