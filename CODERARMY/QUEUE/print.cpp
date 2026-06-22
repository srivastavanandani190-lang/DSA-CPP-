#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   queue<int> q;
   q.push(78);
   q.push(89);
   q.push(52);
   q.push(23);
   q.push(88);
   
   int n=q.size();
   while (n--)
   {
    cout<<q.front()<<" ";
    q.push(q.front());
    q.pop();

   }
    return 0;
}
