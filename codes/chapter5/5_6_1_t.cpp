#include <iostream>
#include <string>
using namespace std;

// template <typename T>
// const T &max(const T &a, const T &b)
// {
//     return a > b ? a : b;
// }
template <typename T, size_t N, size_t M>
const T *max(const T (&a)[N], const T (&b)[M]) // 字符串 会被认为是指针类型
{
    return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
    string s;

    ::max("aa", "bb");  // char (&)[3] char (&)[3]
    ::max("abc", "dd"); // error char (&)[5] char (&)[3]
    //::max("gg",s);//error char (&)[3] string
    return 0;
}
