#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//using linked list to implement queue
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    public:
    Node* front;
    Node* rear;
    int size;
    Queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }
    bool isEmpty(){
        return front==NULL;
    }
    void enqueue(int data){
        Node* newNode=new Node(data);
        if(front==NULL){
            front=newNode;
            rear=newNode;
        }
        else{
            rear->next=newNode;//link the new node to the end of the queue
            rear=newNode;//update the rear pointer to the new node
        }
        size++;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=front;
        front=front->next;//delete the old front node
        delete temp;
        size--;
    }
    int getFront(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    int getRear(){
        if(rear==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return rear->data;
    }
    int getSize(){
        return size;
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Rear: "<<q.getRear()<<endl;
    cout<<"Size: "<<q.getSize()<<endl;
    q.dequeue();
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Rear: "<<q.getRear()<<endl;
    cout<<"Size: "<<q.getSize()<<endl;
    q.dequeue();
    q.dequeue();
    q.isEmpty() ? cout<<"Queue is empty"<<endl : cout<<"Queue is not empty"<<endl;
    return 0;
}
