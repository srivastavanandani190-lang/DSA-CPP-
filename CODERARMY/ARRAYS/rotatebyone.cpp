#include<iostream>
using namespace std;
int main(){
int arr[6]={12,25,63,56,89,2};
int temp=arr[5];
for(int i=5;i>=0;i--){

    arr[i]=arr[i-1];
}
arr[0]=temp;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}