#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 //set
set<int> s;
s.insert(5);    
s.insert(3);
s.insert(8);
s.insert(5); //duplicate element, will not be added
s.erase(3); //removes the element 3 from the set
cout<<"Elements in the set: ";
for(auto it : s){
    cout<<it<<" ";
}
cout<<endl;
if(s.find(8) != s.end()){
    //s.end returns an iterator to the element following the last element of the set, so if find returns s.end(), it means the element was not found in the set 
    
    cout<<"Element 8 found in the set."<<endl;  
}else{
    cout<<"Element 8 not found in the set."<<endl;
}
if(s.count(3) > 0){
    //count returns the number of elements in the set that are equal to the given value, so if count returns a value greater than 0, it means the element is present in the set
    cout<<"Element 3 is present in the set."<<endl;
}else{
    cout<<"Element 3 is not present in the set."<<endl;     
}
cout<<s.count(3)<<endl; //returns 0 because 3 is not present in the set 
    return 0;
}
//implemented using avl tree logn for insertion and deletion not by array.
//set is a collection of unique elements
//sorted in ascending order by default
//red-black tree is used to implement set in c++ 
//logn making them fast for most use cases(search,insertion, deletion)
//we can sort in descending order by using greater<int> as a comparator
//we can also use custom comparator to sort in any order we want
//we can also use set to store pairs and sort them based on the first element of the pair