#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// all methods are implemented in O(1) time complexity
//1.push()-->to add an element at the rear end of the queue
//2.pop()-->to remove an element from the front end of the queue
//3.front()-->to get the front element of the queue
//4.back()-->to get the rear element of the queue
//5.size()-->to get the number of elements in the queue
//6.empty()-->to check if the queue is empty or not
//7.swap()-->to swap the contents of two queues
//8.emplace()-->to add an element at the rear end of the queue without creating a temporary object
//9.emplace_front()-->to add an element at the front end of the queue without creating a temporary object
//10.emplace_back()-->to add an element at the rear end of the queue without creating a temporary object

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Rear element: "<<q.back()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;

    cout<<"Is queue empty? "<<q.empty()<<endl; 
    return 0;
}
