#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// pair<string,int> p;
// int total=0;
// for(int i=0;i<3;i++){
//     string name;
//     int marks;
//     cin>>name>>marks;
//     p={name,marks};
//     total+=p.second;
// }
// cout<<"Average marks: "<<total/3<<endl;
vector<pair<string,int>> v;
for(int i=0;i<3;i++){
    string name;
    int marks;
    cin>>name>>marks;
    v.push_back({name,marks});
}
//sort the vector of pairs based on the marks in ascending order
sort(v.begin(),v.end());
for(auto x:v){
    cout<<x.first<<" "<<x.second<<endl;
}
    return 0;
}