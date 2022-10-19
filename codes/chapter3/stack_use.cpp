#include <iostream>
#include "Stack.hpp"
#include "PartionSpecfic.hpp"

using namespace std;
int main(int argc, char const *argv[])
{
    Stack<int> stack;
    Stack<string> stack2;
    Stack<double> zz;
    Stack<double>::s_imem = 2000;
    stack.push(1);
    cout << Stack<int>::s_imem << endl;

    cout << Stack<double>::s_imem << endl;
    return 0;
}
