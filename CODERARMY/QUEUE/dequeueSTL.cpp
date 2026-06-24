#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(2);
    cout<<"Deque elements are: ";
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<" "<<dq.back()<<endl;
    return 0;
}
//deque is used mostly in competitive programming because it is faster than vector and list.
//It is a double-ended queue that allows insertion and deletion of elements from both ends.
//internally it is implemented using dynamic array and map.
//Time complexity of deque is O(1) for insertion and deletion at both ends.