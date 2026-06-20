//IMPLEMENTING QUEUE USING ARRAY
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front,rear,size;
    int *arr;
    public:
    Queue(int n){
        front=rear=-1;
        size=n;
        arr=new int[n];
    }   
bool isFull(){
    return (rear==size-1 && front==0);
}
bool isEmpty(){
    return (front==-1 || front>rear);
}
int push(int x){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return -1;
    }
    else{
        if(front==-1) front=0;//if queue is empty, set front to 0
        rear++;
        arr[rear]=x;
        cout<<x<<" pushed into queue"<<endl;
    }
}
int pop(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else if(front==rear){
        int x=arr[front];
        front=rear=-1;
        cout<<x<<" popped from queue"<<endl;
        return x;
    }

    else{
        int x=arr[front];
        front++;
        cout<<x<<" popped from queue"<<endl;
        return x;
    }
}
int peek(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
        return arr[front];
    }
}
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element is: "<<q.peek()<<endl;
    q.pop();
    cout<<"Front element is: "<<q.peek()<<endl;
    q.isEmpty() ? cout<<"Queue is empty"<<endl : cout<<"Queue is not empty"<<endl;
    return 0;
}



