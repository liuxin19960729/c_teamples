#include <iostream>
#include "myfirst.hpp"

template <typename T>
void print_typeof(T const &x)
{
    std::cout << typeid(x).name() << std::endl;
}

// template void print_typeof(int const &);