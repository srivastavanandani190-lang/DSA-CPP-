#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }
    cout << endl;
    for(auto it = l.rbegin(); it != l.rend(); it++){
        cout<<*it<<" ";
    }   
    cout << endl;

    list<int> l2(l);
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> l3(l2.begin(), l2.end());
    for (int i : l3)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> l4(5, 100);
    for (int i : l4)
    {
        cout << i << " ";
    }
    cout << endl;

    // pop back
    l4.pop_back();

    for (int i : l4)
    {
        cout << i << " ";
    }
    // pop front
    l4.pop_front();
    cout << endl;
    for (int i : l4)
    {
        cout << i << " ";
    }

    // push back
    l4.push_back(200);
    cout << endl;
    for (int i : l4)
    {
        cout << i << " ";
    }
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout << l.size() << endl;
    return 0;




}
// implemented using doubly linked list and it is a sequence container that allows non-contiguous memory allocation.
// It provides fast insertion and deletion at both ends of the list, but slower access to elements in the middle compared to vectors.