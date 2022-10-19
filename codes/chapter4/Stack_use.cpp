#include <iostream>
#include "Stack.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    ::Stack<int, 2> stack;
    stack.push(2);
    stack.push(3);

    auto v = stack.pop();
    stack.pop();
    stack.pop();
    cout << stack.empty() << endl;
    return 0;
}
