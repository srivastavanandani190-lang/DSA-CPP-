#include<iostream>
using namespace std;

int main(){

int arr[]={1,23,38,402,589,60,78};
int n=(sizeof(arr))/4;
int mx=arr[0];
//int mn=INT_MIN;(SMALLEST INTEGER POSSIBLE IN INTEGER DATATYPE)
for(int i=1;i<n;i++){
    if(arr[i]>mx) mx=arr[i];
    //mx=max(mx,arr[i]);
    //same with minimum.
}
cout<<mx;

    return 0;
}