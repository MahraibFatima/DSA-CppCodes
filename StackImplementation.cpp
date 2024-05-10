#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> stackElements)
{
    while (!stackElements.empty())
    {
        cout << stackElements.top() << endl;
        stackElements.pop();//function scope..
    }
}
void checkStack(stack<int> stackElements)
{
    if (stackElements.empty())
        cout << "Stack Empty" << endl;
    else
        cout << "Stack not Empty" << endl;
}

int main()
{
    stack<int> stackElements;

    checkStack(stackElements);
    //push function add at top (last in, first out)
    stackElements.push(4); // last element
    stackElements.push(3); // 3rd element
    stackElements.push(2); // 2nd element
    stackElements.push(1); // first element

    printStackElements(stackElements);
    checkStack(stackElements);//main stack still have values

    while(!stackElements.empty()){
        stackElements.pop();
    }
    
    checkStack(stackElements);//deleted all elements

    

    
}
