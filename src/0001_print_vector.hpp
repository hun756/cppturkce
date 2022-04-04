#ifndef PRINT_VECTOR_HPP
#define PRINT_VECTOR_HPP

#include <vector>
#include <ostream>

template <typename T>
void printVector(std::vector<T>& vec, std::ostream& os)
{
    os << "std::vector<> [\n";
    for (auto&& var : vec) 
        os << "  " << var << ", ";
        
    os << "\n]\n";
}

#endif /* end of include guard :  PRINT_VECTOR_HPP */
