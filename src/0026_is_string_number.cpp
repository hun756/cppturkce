#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>

namespace Algo1
{
    bool isNumber(const std::string &str)
    {
        if (str.empty())
            return false;
        for (const auto &ch : str)
        {
            if (!std::isdigit(ch))
            {
                return false;
            }
        }
        return true;
    }
}

namespace Algo2
{
    bool isNumber(const std::string &str)
    {
        if (str.empty())
            return false;
        for (const auto &ch : str)
        {
            if (ch < '0' || ch > '9')
            {
                return false;
            }
        }
        return true;
    }
}

namespace Algo3
{
    bool isNumber(const std::string &str)
    {
        return !str.empty() && std::all_of(str.begin(), str.end(), std::isdigit);
    }
}

namespace Test
{
    struct _testHelp
    {
        const std::string name;
        std::function<bool(void)> _fn;

        _testHelp(const std::string &name, const std::function<bool(void)> &fn) : name(name), _fn(fn) {}
    };

    std::vector<_testHelp> globTest;

    void addTest(const std::string &name, std::function<bool(void)> &&_fn)
    {
        globTest.push_back({name, _fn});
    }

    void createTest()
    {
        addTest(
            "Alog1 Check", 
            [] { 
                std::string checkstr = "77659434687123421";
                // std::cout << "__debugBreak" << std::endl;
                if(!Algo1::isNumber(checkstr)) return false;
                checkstr = "";
                if(Algo1::isNumber(checkstr)) return false;
                checkstr = "  A321?_,";
                if(Algo1::isNumber(checkstr)) return false;

                return true;
            }
        );

        addTest(
            "Alog2 Check", 
            [] { 
                std::string checkstr = "77659434687123421";
                // std::cout << "__debugBreak" << std::endl;
                if(!Algo2::isNumber(checkstr)) return false;
                checkstr = "";
                if(Algo2::isNumber(checkstr)) return false;
                checkstr = "  A321?_,";
                if(Algo2::isNumber(checkstr)) return false;

                return true;
            }
        );

        addTest(
            "Alog3 Check", 
            [] { 
                std::string checkstr = "77659434687123421";
                // std::cout << "__debugBreak" << std::endl;
                if(!Algo3::isNumber(checkstr)) return false;
                checkstr = "";
                if(Algo3::isNumber(checkstr)) return false;
                checkstr = "  A321?_,";
                if(Algo3::isNumber(checkstr)) return false;

                return true;
            }
        );
    }

    void Run()
    {
        createTest();
        for(int i = 0; i < globTest.size(); ++i) {
            if(globTest[i]._fn()) {
                std::cout << "[ Ok ] " << globTest[i].name << '\n';
            } else {
                std::cout << "[ Err ] " << globTest[i].name << '\n';
            }
        }
    }
}

int main(int argc, char *argv[])
{
    Test::Run();
    return 0;
}