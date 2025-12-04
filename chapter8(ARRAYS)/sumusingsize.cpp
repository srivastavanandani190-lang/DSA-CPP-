#include<iostream>
using namespace std;

int main(){

int arr[]={12,14,16,18,20,1};
int n=(sizeof(arr))/4;
int sum=0;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    sum=sum+arr[i];
}
cout<<"\n";
cout<<sum;

    return 0;
}