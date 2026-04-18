#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//stores unique elements in no particular order
//average time complexity for search, insert and delete is O(1)
//implemented using hash table

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(10);

    for(auto it : s)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    if(s.find(5) != s.end())
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    unordered_multiset<string> ms;
    ms.insert("hello");
    ms.insert("world");
    ms.insert("hello");
    for(auto it : ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}
