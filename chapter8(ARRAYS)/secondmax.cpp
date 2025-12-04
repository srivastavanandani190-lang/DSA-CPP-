#include<iostream>
using namespace std;
int main(){
    
int arr[]={-10,-12,-8,-6,-9,-5};
int n=sizeof(arr)/4;
int mx = INT32_MIN;
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
}
int smx=INT32_MIN;
for(int i=0;i<n;i++){
    if(arr[i]!=mx) smx=max(smx,arr[i]);
}
cout<<smx;
    return 0;
}