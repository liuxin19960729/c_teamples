#include <iostream>
#include <string>

template <typename T>
inline const T &max(const T &a, const T &b)
{
    return a > b ? a : b;
}

void zz(int c, double g)
{
    std::cout << "void zz(int c,double g)" << std::endl;
}
void zz(double c, int g)
{
    std::cout << "void zz(double c, int g)" << std::endl;
}

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;
    std::cout << ::max(a, b) << std::endl;
    double c = 1.1;
    double d = 1.0;
    std::cout << ::max(c, d) << std::endl;
    std::string e("bc");
    std::string f("ag");
    std::cout << ::max(e, f) << std::endl;

    zz(1, 1.1);
    zz(1.1, 1);
    //zz(1.1, 1.1); 有二义
    return 0;
}
