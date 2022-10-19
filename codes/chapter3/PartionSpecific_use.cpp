#include <iostream>
#include "PartionSpecfic.hpp"

int main(int argc, char const *argv[])
{
    PartionSpecfic<float, int> a1;
    // PartionSpecfic<int, double> a2;
    PartionSpecfic<float, float> a2;

    /*
        <int,int>
        <T>
        <T,int>
        和
        <T>
        <T,T>
         有二义性

    */
    // PartionSpecfic<int, int> a3;

    /**
     * 错误 
     * T  T
     * T1* T2*
     * 这两个有二义性
     */
    PartionSpecfic<int *, int *> a4;

    return 0;
}
