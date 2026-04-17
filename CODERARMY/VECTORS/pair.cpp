#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p1;
    p1.first = 10;
    p1.second = 20;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string> p2;
    p2.first = 100;
    p2.second = "CODER ARMY";
    cout<<p2.first<<" "<<p2.second<<endl;
 
    pair<string ,pair<int,int>> p3; 
    p3.first = "CODER ARMY";
    p3.second.first = 1000;
    p3.second.second = 2000;
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

   pair<pair<string,int> ,int> p4;
   p4=make_pair(make_pair("CODER ARMY",100),200);
   cout<<p4.first.first<<" "<<p4.first.second<<" "<<p4.second<<endl;

   pair<pair<string,int> ,pair<int,string>> p5;
   p5=make_pair(make_pair("CODER ARMY",100),make_pair(200,"CODER ARMY"));
   cout<<p5.first.first<<" "<<p5.first.second<<" "<<p5.second.first<<" "<<p5.second.second<<endl;       
   

    return 0;
}