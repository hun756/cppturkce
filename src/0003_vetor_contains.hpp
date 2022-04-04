#ifndef VECTOR_CONTAINS_HPP
#define VECTOR_CONTAINS_HPP

#include <algorithm>

template <typename T, typename U>
static bool contains(T arr, U findVal)
{
    return std::find(arr.begin(), arr.end(), findVal) != arr.end();
}

#endif /* end of include guard :  VECTOR_CONTAINS_HPP */
