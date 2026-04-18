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
    m.insert(make_pair("pqr",6));
    m.insert(make_pair("abc",7));//not inserted as key is already present
    m["mno"]=10;//update
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count("abc");
    m.erase("def");
     for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }   
    if(m.count("def")==0)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found";
    }
    return 0;
}

//sorted order-->key value
//key should be unique
//implementation-->balanced binary search tree,avl,red black tree
//search,insertion,delete-->>O(log(n))
//real life application-->dictionary,phone book,student record,employee record
//password manager,cache memory,hash table-->unordered map