#include<iostream>
using namespace std;
int main(){
int arr[5]={17,34,12,31,25};
for(int i=1;i<=4;i++){//rounds 
    for(int j=i;j>0;j--){
        if(arr[j]>arr[j-1]){
     int temp=arr[j];
     arr[j]=arr[j-1];
     arr[j-1]=temp;
        }
        else{
            break;
        }
    }
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}