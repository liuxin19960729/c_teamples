#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
inline const T &max(const T &a, const T &b)
{
    cout << "T&" << endl;
    return a > b ? a : b;
}
template <typename T>
inline T *const &max(T *const &a, T *const &b)
{
    cout << "T*&" << endl;
    return *a > *b ? a : b;
}

inline const char *&max(const char *&a, const char *&b)
{
    cout << "char*&" << endl;
    return strcmp(a, b) > 0 ? a : b;
}

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 'g';
    ::max(a, b); // T&

    string c("aa");
    string d("b");
    ::max(c, d); // T&

    int *p1 = &a;
    int *p2 = &b;
    ::max(p1, p2); // T*& 

    const char s1[] = "aa";
    const char s2[] = "b";
    const char *ps1 = s1;
    const char *ps2 = s2;
    ::max(ps1, ps2); // char*&
    return 0;
}
