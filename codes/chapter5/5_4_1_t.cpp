
#include <deque>
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class TA1
{
public:
    TA1()
    {
        cout << "A" << endl;
    }
};
template <typename T>
class TB1
{
public:
    TB1()
    {
        cout << "B" << endl;
    }
};

using namespace std;
template <typename T, template <typename E, typename Alloc = std::allocator<E>> class CONT = deque>
class AA
{
public:
    CONT<T> a; // T 第一个参数T 类型
};

int main(int argc, char const *argv[])
{
    AA<int> a;
    return 0;
}

/*

template <typename A> class CONT = std::deque 类模板
第二个参数必须是类模版类型的参数


CONT<T> gg; 第一个模版作为第二个类的模版类型
*/