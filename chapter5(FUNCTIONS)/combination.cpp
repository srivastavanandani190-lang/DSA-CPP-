#include<iostream>
using namespace std;

int main(){

int n,r;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
cout<<"ENTER THE VALUE OF r = ";
cin>>r;

int a=1;
for(int i=1;i<=n;i++){
     a=i*a;   
}
int b=1;
for(int i=1;i<=r;i++){
     b=i*b;   
}
int c=1;
for(int i=1;i<=n-r;i++){
     c=i*c;   
}
cout<<a<<"\n";
cout<<b<<"\n";
cout<<a/(c*b);

    return 0;
}