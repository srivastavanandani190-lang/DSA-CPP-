#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["abc"]=1;
    m["def"]=2;
    m["ghi"]=3;
    m["abc"]=4;//overwrites the previous value of key "abc"
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
//unique keys and no order of keys
//not necessary sorted order of keys
//unordered map is implemented using hash table
//average time complexity of search, insert and delete is O(1) in unordered map
//unordered map is not implemented using balanced binary search tree like map
