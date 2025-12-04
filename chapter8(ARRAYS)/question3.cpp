#include<iostream>
using namespace std;
int main(){
int n,x;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
cout<<"ENTER THE VALUE OF x = ";
cin>>x;
int arr[n];
int mx=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
if(arr[i]>x){
     mx++;
cout<<arr[i];}
}
    return 0;
}