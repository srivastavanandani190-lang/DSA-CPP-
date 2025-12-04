#include<iostream>
using namespace std;

int main(){

int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
int sum=0;

for(int i=1;i<=n;i++){
    sum=i+sum;
}
cout<<sum;
    return 0;
}