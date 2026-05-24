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
    // l.pop_back();
    // l.pop_front();
    cout<<l.front();
    cout<<l.back();
     return 0;
}
// implemented using doubly linked list and it is a sequence container that allows non-contiguous memory allocation.
// It provides fast insertion and deletion at both ends of the list, but slower access to elements in the middle compared to vectors.