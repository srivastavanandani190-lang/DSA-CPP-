#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);

    cout << "The top element is: " << pq.top() << endl; // Should print 20

    pq.pop();
    cout << "After popping, the top element is: " << pq.top() << endl; // Should print 15

    cout << "The size of the priority queue is: " << pq.size() << endl; // Should print 2
    
    return 0;
}