#include <iostream>
#include <string>

using namespace std;

inline int const &max(int const &a, int const &b)
{
    cout << "int max(int,int)" << endl;
    return a > b ? a : b;
}
template <typename T>
inline const T &max(const T &a, const T &b)
{
    cout << "T max(T,T)" << endl;
    return a > b ? a : b;
}

template <typename T>
inline const T &max(const T &a, const T &b, const T &c)
{
    cout << "T max(T,T,T)" << endl;
    return ::max(::max(a, b), c);
}

int main(int argc, char const *argv[])
{
    // ::max(1, 2, 3);// 三个参数模版  int (int,int)  int (int,int)
    // ::max(1.1, 2.2);//T(T,T)
    // ::max<double>(1, 3);//T(T,T)
    ::max('c', 'd');//T max(T,T)
    ::max<>(1,2);//T max(T,T)
    return 0;
}
