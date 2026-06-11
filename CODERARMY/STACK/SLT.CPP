#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
public:
    Node* top;
    int size;
    Stack(){
        this->top = NULL;
        this->size = 0;
    }

    void push(int data){
        Node* temp= new Node(data);
        if(top == NULL){
            top = temp;
            size++;
            return;
        }
        temp->next = top;//linking the new node to the previous top
        top = temp;
        size++;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        size--; 
    }

    int peek(){
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }
    int sizestack(){
        return size;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Top element: "<<s.peek()<<endl; // Output: 50
    s.pop();
    cout<<"Size of stack after pop: "<<s.sizestack()<<endl; // Output: 4
    cout<<"Top element after pop: "<<s.peek()<<endl; // Output: 40
    cout<<"Is stack empty? "<<s.isEmpty()<<endl; // Output: 0 (false)
    s.pop();
    s.pop();
    s.pop();
    s.pop(); // Popping all elements
    cout<<"Is stack empty after popping all elements? "<<s.isEmpty()<<endl; // Output: 1 (true)
    return 0;
}
