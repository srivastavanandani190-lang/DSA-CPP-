#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class Queue{
    int front;
    int rear;
    int size;
    int *arr;
    public:
    Queue(int s){
        front = -1;
        rear = -1;
        size = s;
        arr = new int[s];
    }
    bool isFull(){
        return (front == 0 && rear == size-1);
    }
    bool isEmpty(){
        return front == -1;
    }
    int enqueue(int value){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return -1;
        }
        else if(isEmpty()){
            front = rear = 0;
            arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int data = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
        return data;
    }
    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
     ~Queue() {
        delete[] arr;
    }
};
int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    q.enqueue(60);   // Will show "Queue is full" in linear queue

    cout << "Front: " << q.getFront() << endl;

    return 0;
}

 

   
 

