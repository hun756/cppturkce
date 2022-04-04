#ifndef VECTOR_TO_SET_HPP
#define VECTOR_TO_SET_HPP

#include <set>
#include <vector>


template <typename T>
std::set<T> vectorToSet(std::vector<T>& vec)
{
    return {vec.begin(), vec.end()};
}


#endif /* end of include guard :  VECTOR_TO_SET_HPP */
