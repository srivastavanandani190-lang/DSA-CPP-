//using circular array 
#include<iostream>
using namespace std;

class Dequeue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    Dequeue(int s){
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    bool isempty(){
        return (front==-1);
    }
    bool isfull(){
        return ((rear+1)%size==front);
    }
    void push_front(int val){
        if(isfull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(isempty()){
            front=rear=0;
        }
        else{
            front=(front-1+size)%size;
        }
        arr[front]=val;
    }
    void push_back(int val){
        if(isfull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(isempty()){
            front=rear=0;
        }
        else{
            rear=(rear+1)%size;
        }
        arr[rear]=val;
    }
    void pop_front(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }
    void pop_back(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front==rear){
            front=rear=-1;
        }
        else{
            rear=(rear-1+size)%size;
        }
    }
    int getFront(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return -1; // Return a sentinel value
        }
        return arr[front];
    }
    int getRear(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return -1; // Return a sentinel value
        }
        return arr[rear];
    }
    void display(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        int i=front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==rear)
                break;
            i=(i+1)%size;
        }
        cout<<endl;
    }
};
int main(){
    Dequeue dq(5);
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(0);
    dq.display();
    cout<<"Front: "<<dq.getFront()<<endl;
    cout<<"Rear: "<<dq.getRear()<<endl;
    dq.pop_front();
    dq.display();
    dq.pop_back();
    dq.display();
    return 0;
}