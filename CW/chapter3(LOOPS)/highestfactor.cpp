#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
int f=1;//stores all factors.
for(int i=1;i<n;i++){
    if(n%i==0) f=i;
//cout<<i<<" ";//all factors are displayed
}
cout<<f;
    return 0;
}