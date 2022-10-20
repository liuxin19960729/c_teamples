#ifndef __TEST2_HPP__
#define __TEST2_HPP__
#include <iostream>
template <typename T>
void tem(T x){
    std::cout<<typeid(x).name()<<std::endl;
}

#endif
