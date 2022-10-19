#include <iostream>

using namespace std;

template <typename T, int Val>
T addV(T const &x)
{
    return x + Val;
}

void zz(int a, int (*fun)(int const &))
{
    auto c = fun(a);

    cout << c << endl;
}

template <typename T, char * pch>
T addVPch(T const &x)
{
    return x + Val;
}

int main(int argc, char const *argv[])
{
    // zz(10,addV<int,300>);
    
    return 0;
}
