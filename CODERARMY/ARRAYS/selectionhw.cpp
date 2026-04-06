#include<iostream>
using namespace std;
int main(){
int arr[6]={10,11,22,30,15,24};

for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){//rounds(6-1=5->4)
        int index=i;
        if(arr[j]>arr[i]){
           index=j;
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
        
    }
}

for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}