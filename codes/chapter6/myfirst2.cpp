#include <iostream>
#include "myfirst2.hpp"

template <typename T>
void print_typeof(T const &x)
{
    std::cout << typeid(x).name() << std::endl;
}

