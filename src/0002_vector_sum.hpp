#ifndef VECTOR_SUM_HPP
#define VECTOR_SUM_HPP

#include <vector>
#include <numeric>

template <typename T>
T sumVector(std::vector<T>& v)
{
    return std::accumulate(v.begin(), v.end(), 0);
}


#endif /* end of include guard :  VECTOR_SUM_HPP */