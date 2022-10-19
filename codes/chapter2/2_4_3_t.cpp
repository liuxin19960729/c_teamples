#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
inline const T &max(const T &a, const T &b)
{
    cout << "T &max(const T &a, const T &b)" << endl;
    return a > b ? a : b;
}

// 放入（T  T  T） 前面会被调用
inline int const &max(int const &a, int const &b)
{
    cout << "int max(int,int)" << endl;
    return a > b ? a : b;
}
template <typename T>
inline const T &max(const T &a, const T &b, const T &c)
{
    cout << "T max(T,T,T)" << endl;
    return ::max(::max(a, b), c);
}

// 重载放在这个位置不会 被调用
// inline int const &max(int const &a, int const &b)
// {
//     cout << "int max(int,int)" << endl;
//     return a > b ? a : b;
// }

int main(int argc, char const *argv[])
{
    max(1, 2, 3);
    return 0;
}
