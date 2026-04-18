//multiset consists of multiple values of the same type.
//It is an associative container that contains a sorted set of objects of type Key.
//Unlike set, multiple keys with the same value are allowed in multiset.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for(auto it:s){
        cout<<it<<" ";
    }
 s.erase(1); //it will erase all the 1's from the multiset
 cout<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}
