#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

//declaration and initialisation of vector
vector<int>v1(5,1);
cout<<"Size of v1:"<<v1.size()<<"\n";
cout<<"Capacity of v1:"<<v1.capacity()<<"\n";
v1.push_back(10);
cout<<"Size of v1:"<<v1.size()<<"\n";
cout<<"Capacity of v1:"<<v1.capacity()<<"\n";//5+5=10

vector<int>v3={1,2,3,5,6};
cout<<"Size of v3:"<<v3.size()<<"\n";
v3.push_back(10);
cout<<"Capacity of v3:"<<v3.capacity()<<"\n";//5+5=10

vector<int>v;
cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);

cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";
//update value

v.pop_back();
cout<<"Size of v:"<<v.size()<<"\n";
// v.clear();
// cout<<"Size of v:"<<v.size()<<"\n";
// v.erase(v.begin(),v.begin()+2);
// cout<<"Size of v:"<<v.size()<<"\n";
 v[0]=60;
 cout<<v.front()<<"\n";
 cout<<v.back()<<"\n";//v.size()-1
 cout<<v.at(1)<<"\n";
 cout<<v.empty()<<"\n";

for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}
sort(v.begin(),v.end());//ascending order
cout<<"\nAfter sorting\n";
for(auto it=v.rbegin();it!=v.rend();it++){
    cout<<*it<<" ";//descending order
    //sort(v.rbegin(),v.rend());
}
//copying vector
vector<int>v2(v);

//search in vector
cout<<"\n";
cout<<"binary search for 30:"<<binary_search(v.begin(),v.end(),30)<<"\n";
cout<<find(v.begin(),v.end(),40)-v.begin()<<"\n";//returns index of 30
//find just returns iterator to 30


    return 0;
}