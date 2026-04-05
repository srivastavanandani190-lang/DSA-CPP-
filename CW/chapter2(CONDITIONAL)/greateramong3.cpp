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
if(x>z && x>y) cout<<x<<" is greatest among three number";
else if(y>z && y>x) cout<<y<<" is greatest among three number";
else cout<<z<<" is greatest among three number";

    return 0;
}