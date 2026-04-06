#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
//declare vector
vector<int>v;
vector<int>v1(5,1);
vector<int>v3={1,2,3};
cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";
//update value
v[1]=6;
cout<<"Size of v1:"<<v1.size()<<"\n";
cout<<"Capacity of v2:"<<v1.capacity()<<"\n";

v1.push_back(8);
cout<<"Size of v1:"<<v1.size()<<"\n";
cout<<"Capacity of v2:"<<v1.capacity()<<"\n";//double the initialised value

cout<<"Size of v3:"<<v3.size()<<"\n";
cout<<"Capacity of v3:"<<v3.capacity()<<"\n";

v.pop_back();
cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";

v.erase(v.begin()+2);
cout<<"Size of v:"<<v.size()<<"\n";
cout<<"Capacity of v:"<<v.capacity()<<"\n";

v.insert(v.begin()+3,8);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
 //remove all element (capacity same)v.clear();

cout<<"\n"<<v[0]<<"\n";
cout<<v.front()<<"\n";
cout<<v[v.size()-1]<<"\n";
cout<<v.back()<<"\n";

vector<int>arr;
arr=v;
cout<<"Size of arr:"<<arr.size()<<"\n";
cout<<"Capacity of arr:"<<arr.capacity()<<"\n";//s=c?

for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
}
cout<<"\n";
sort (arr.begin(),arr.end());//ascending
for(auto i:arr){
    cout<<i<<" ";
}
cout<<"\n";
sort (arr.begin(),arr.end(),greater<int>());//descending
for(auto i:arr){
    cout<<i<<" ";
}


    return 0;
}