#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
    return 0;
}
