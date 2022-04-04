#include <iostream>
#include <vector>

template<typename T>
void insertBegin(std::vector<T>& vec, T elem)
{
    vec.insert(vec.begin(), elem);
}


int main()
{
    std::vector<int> vec {2, 3, 4};

    // vec.insert(vec.begin(), 1);
    insertBegin(vec, 1);

    for (auto&& var : vec)
        std::cout  << var << '\n';

    return 0;
}