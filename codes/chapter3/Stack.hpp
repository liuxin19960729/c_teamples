#ifndef __STACK_HPP_
#define __STACK_HPP_
#include <vector>
#include <stdexcept>

template <typename T>
class Stack
{
private:
    std::vector<T> elems;

public:
    Stack(/* args */);
    ~Stack() = default;
    void push(T const &);
    void pop();
    T top() const;
    bool empty() const
    {
        return elems.empty();
    }
    static int s_imem;
};

template <typename T>
int Stack<T>::s_imem = 200;

template <typename T>
Stack<T>::Stack()
{
    std::cout << "Stack<T>::Stack()" << std::endl;
}

template <typename T>
void Stack<T>::push(T const &e)
{
    elems.push_back(e);
}

template <typename T>
void Stack<T>::pop()
{
    if (empty())
        throw std::out_of_range("Stack<T>::pop()");
    elems.pop_back();
}
template <typename T>
T Stack<T>::top() const
{
    if (empty())
        throw std::out_of_range("Stack<T>::top()");

    return elems.back();
}

//特化string 类型的Stack
template <>
class Stack<std::string>
{
private:
    std::vector<std::string> elems;

public:
    Stack(/* args */);
    ~Stack() = default;
    void push(std::string const &);
    void pop();
    std::string top() const;
     bool empty() const
    {
        return elems.empty();
    }
    static int s_imem;
};
int Stack<std::string>::s_imem = 300;
Stack<std::string>::Stack()
{
    std::cout << "Stack<T>的特化string" << std::endl;
}

void Stack<std::string>::push(std::string const &e)
{
    elems.push_back(e);
}

void Stack<std::string>::pop()
{
    if (empty())
        throw std::out_of_range("Stack<T>::pop()");
    elems.pop_back();
}

std::string Stack<std::string>::top() const
{
    if (empty())
        throw std::out_of_range("Stack<T>::top()");

    return elems.back();
}

#endif