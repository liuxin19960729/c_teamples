#ifndef __STACK_HPP__
#define __STACK_HPP__
#include <iostream>
#include <stdexcept>
template <typename T, int MAX_SIZE=50>
class Stack
{
private:
    T elems[MAX_SIZE]; //包含元素的数组
    size_t nums = 0;

public:
    Stack(/* args */);
    ~Stack();
    void push(T const &);
    T pop();
    T top() const;
    bool empty()
    {
        return nums == 0;
    }
    bool full() const
    {
        return nums == MAX_SIZE;
    }
};
template <typename T, int MAX_SIZE>
Stack<T, MAX_SIZE>::Stack(/* args */)
{
}
template <typename T, int MAX_SIZE>
Stack<T, MAX_SIZE>::~Stack()
{
}
template <typename T, int MAX_SIZE>
void Stack<T, MAX_SIZE>::push(T const &ele)
{
    if (full())
    {
        throw std::out_of_range("Stack<T, MAX_SIZE>::push(T const &)");
    }
    elems[nums] = ele;
    nums++;
}
template <typename T, int MAX_SIZE>
T Stack<T, MAX_SIZE>::pop()
{
    if (empty())
    {
        throw std::out_of_range("T Stack<T, MAX_SIZE>::pop()");
    }

    return elems[--nums];
}
template <typename T, int MAX_SIZE>
T Stack<T, MAX_SIZE>::top() const
{
    if (empty())
    {
        throw std::out_of_range("T Stack<T, MAX_SIZE>::top())");
    }
    return elems[nums - 1];
}
#endif