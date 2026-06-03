#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,string> m;
    m.insert({1,"abc"});
    m.insert({2,"def"});
    m.insert({3,"ghi"});
    m.insert({1,"xyz"});
    // m[1]="pqr";//this will update the value of key 1 to pqr not allowed
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
//multimap is a associative container that contains a sorted list of key-value pairs, 
//where multiple pairs can have the same key. It is similar to a map, but it allows duplicate keys
