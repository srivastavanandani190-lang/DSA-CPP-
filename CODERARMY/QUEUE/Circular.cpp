#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//circular queue implementation using array-->space utilization is better than linear queue
class CircularQueue{
    int front;
    int rear;
    int size;
    int *arr;
    public:
    CircularQueue(int s){
        front = -1;
        rear = -1;
        size = s;
        arr = new int[s];
    }

    bool isFull(){
        return (front == 0 && rear == size-1) || ((rear+1)%size == front);
    }

    bool isEmpty(){
        return front == -1;
    }

    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty()){
            front = rear = 0;
            arr[rear] = value;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = value;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        int data = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front+1)%size;
        }
    }

    int getFront(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[rear];
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        cout<<"Queue elements are: ";
        if(rear >= front){
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            for(int i=front; i<size; i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    
      ~CircularQueue() {
        delete[] arr;
    }
};

int main(){
    CircularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    cout<<"Rear element: "<<q.getRear()<<endl;
    cout<<"Front element: "<<q.getFront()<<endl;
    q.enqueue(6);
    q.display();
    return 0;
}
