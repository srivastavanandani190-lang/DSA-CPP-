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
        return (front == -1 || front > rear);
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
            rear++;
            arr[rear] = value;
        }
    }
    
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        int data = arr[front];
        // if(front == rear){
        //     front = rear = -1;
        // }
            front++;
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


    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
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

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);   
    cout << "Rear: " << q.getRear() << endl;
    cout << "Front: " << q.getFront() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();  
    q.isEmpty() ? cout << "Queue is empty" << endl : cout << "Queue is not empty" << endl;

    return 0;
}

 

   
 

