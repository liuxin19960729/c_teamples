#ifndef __PartionSpecific_HPP_
#define __PartionSpecific_HPP_
#include <vector>
#include <stdexcept>
using namespace std;
template <typename T1, typename T2>
class PartionSpecfic
{
private:
public:
    PartionSpecfic(/* args */);
    ~PartionSpecfic();
};
template <typename T1, typename T2>
PartionSpecfic<T1, T2>::PartionSpecfic(/* args */)
{
    cout << "T1 T2" << endl;
}
template <typename T1, typename T2>
PartionSpecfic<T1, T2>::~PartionSpecfic()
{
}

//局部特化两种模版一个类型
template <typename T>
class PartionSpecfic<T, T>
{
private:
    /* data */
public:
    PartionSpecfic(/* args */);
    ~PartionSpecfic();
};
template <typename T>
PartionSpecfic<T, T>::PartionSpecfic(/* args */)
{
    cout << "T T" << endl;
}
template <typename T>
PartionSpecfic<T, T>::~PartionSpecfic()
{
}
//
//局部特化两种模版一个类型
template <typename T>
class PartionSpecfic<T, int>
{
private:
    /* data */
public:
    PartionSpecfic(/* args */);
    ~PartionSpecfic();
};
template <typename T>
PartionSpecfic<T, int>::PartionSpecfic(/* args */)
{
    cout << "T int" << endl;
}
template <typename T>
PartionSpecfic<T, int>::~PartionSpecfic()
{
}
// 局部特化指针类型
template <typename T1, typename T2>
class PartionSpecfic<T1 *, T2 *>
{
private:
    /* data */
public:
    PartionSpecfic(/* args */);
    ~PartionSpecfic();
};
template <typename T1, typename T2>
PartionSpecfic<T1 *, T2 *>::PartionSpecfic(/* args */)
{
     cout << "T* T*" << endl;
}
template <typename T1, typename T2>
PartionSpecfic<T1 *, T2 *>::~PartionSpecfic()
{
}

// 局部特化指针类型
template <typename T>
class PartionSpecfic<T *, T *>
{
private:
    /* data */
public:
    PartionSpecfic(/* args */);
    ~PartionSpecfic();
};
template <typename T>
PartionSpecfic<T *, T *>::PartionSpecfic(/* args */)
{
     cout << "T* T*" << endl;
}
template <typename T>
PartionSpecfic<T *, T *>::~PartionSpecfic()
{
}

#endif