#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"THE VALUE OF x:";
cin>>x;
cout<<"THE VALUE OF y:";
cin>>y;
cout<<"THE VALUE OF z:";
cin>>z;
if(x+y>z && y+z>x && x+z>y) cout<<"TRIANGLE IS POSSIBLE";
else cout<<"TRIANGLE IS NOT POSSIBLE";
//&& or and
    return 0;
}