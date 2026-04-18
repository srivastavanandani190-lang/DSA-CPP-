//map-->key value pair
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    m["abc"]=1;
    m["def"]=2;
    m["ghi"]=3;
    m["jkl"]=4;
    m["mno"]=5;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
//sorted order-->key value
//implementation-->balanced binary search tree,avl,red black tree
//search,insertion,delete-->>O(log(n))
//real life application-->dictionary,phone book,student record,employee record
