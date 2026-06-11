//using array
#include <iostream>
using namespace std;

class stack
{
    int top;
    int *arr;
    int size;
public:
    stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
       
            arr[++top] = x;//means first increment top and then assign x to arr[top]
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];//means first return arr[top] and then decrement top
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size - 1;
    }
   int sizestack(){
    return top+1;
   }
};
int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.peek() << endl; // 5
    cout << s.pop() << endl; // 5
    cout << s.peek() << endl; // 4
    cout << s.isEmpty() << endl; // 0
    cout << s.isFull() << endl; // 0
    cout<< s.sizestack()<<"\n";
    return 0;
}