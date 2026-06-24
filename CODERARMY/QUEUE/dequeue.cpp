//using doubly linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class Dequeue{
    Node* front;
    Node* rear;
    public:
    Dequeue(){
        front=NULL;
        rear=NULL;
    }
    void push_Front(int val){
        Node* newNode=new Node(val);
        if(front==NULL){
            front=rear=newNode;
            return;
        }
        newNode->next=front;
        front->prev=newNode;
        front=newNode;
    }

    void push_Rear(int val){
        Node* newNode=new Node(val);
        if(rear==NULL){
            front=rear=newNode;
            return;
        }
        rear->next=newNode;
        newNode->prev=rear;
        rear=newNode;
    }

    void pop_Front(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=front;
        front=front->next;
        delete temp;
        if(front!=NULL)
            front->prev=NULL;
        else
            rear=NULL; // If the queue becomes empty
    }

    void pop_Rear(){
        if(rear==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=rear;
        rear=rear->prev;
        delete temp;
        if(rear!=NULL)
            rear->next=NULL;
        else
            front=NULL; // If the queue becomes empty
    }

    int getFront(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return -1; // Return a sentinel value
        }
        return front->data;
    }

    int getRear(){
        if(rear==NULL){
            cout<<"Queue is empty"<<endl;
            return -1; // Return a sentinel value
        }
        return rear->data;
    }

    void display(){
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Dequeue dq;
    dq.push_Front(10);
    dq.push_Rear(20);
    dq.push_Front(5);
    dq.display(); // Output: 5 10 20
    cout<<"Front: "<<dq.getFront()<<endl; // Output: Front: 5
    cout<<"Rear: "<<dq.getRear()<<endl;   // Output: Rear: 20
    dq.pop_Front();
    dq.display(); // Output: 10 20
    dq.pop_Rear();
    dq.display(); // Output: 10
    return 0;
}