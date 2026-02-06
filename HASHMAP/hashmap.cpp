#include<iostream>
// #include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<string,int> m;
m.insert({"Honey",100});
m.insert({"Navya",200});
m.insert({"Nandani",300});
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl; 
}
if(m.find("Navya")!=m.end()){
    cout<<"Found "<<m["Navya"]<<endl;
}
for(auto x:m){
if(x.second>150){
    cout<<x.first<<" "<<x.second<<endl;
}
}

    return 0;
}