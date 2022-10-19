#include <iostream>

using namespace std;

template <typename T>
class Base
{
public:
    void exit();
};

template <typename T>
void Base<T>::exit()
{
    cout << "exit" << endl;
}

template <typename T>
class Child : Base<T>
{
public:
    void foo()
    {
        //并不会决定考虑基类的exit
        this->exit(); //调用外部的exit() or 出现错误
    }
};

int main(int argc, char const *argv[])
{
    Child<int> cid;
    cid.foo();
    cid.foo();
    return 0;
}
