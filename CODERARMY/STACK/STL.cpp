#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("!");
    s.push("How");
    s.push("Are");
    s.push("You");

    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;

    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Size of stack after pop: "<<s.size()<<endl;
    //empty stack
    cout<<"Is stack empty? "<<s.empty()<<endl;

    return 0;
}
//vector vs stack
//1. Vector is a dynamic array that can grow and shrink in size, while stack is a container adapter that provides a LIFO (Last In First Out) data structure.
//2. Vector allows random access to its elements, while stack only allows access to the top element.
//3. Vector can be used to implement a stack, but stack cannot be used to implement a vector.
//extraoverhead in vector due to dynamic resizing and memory management, while stack has less overhead as it only needs to manage the top element.

