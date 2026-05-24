#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);
    for (int i : l)
    cout<<i<<" ";
    cout<<endl;
  
    cout<<l.front();
    cout<<l.back()<<endl;
    l.pop_back();
    l.pop_front();
    l.push_back(4);
    l.push_front(-1);
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=l.rbegin(); it != l.rend(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
// implemented using doubly linked list and it is a sequence container that allows non-contiguous memory allocation.
// It provides fast insertion and deletion at both ends of the list, but slower access to elements in the middle compared to vectors.
//auto decides the type of the variable based on the initializer, which can simplify code and improve readability.