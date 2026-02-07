#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,25,6,18,29};
     bool swap=0;
    for(int i=3;i>=0;i--){
    for(int j=i;j>=0;j--){
        if(arr[j]>arr[j+1]){
            swap=1;
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
    if(swap==0){
        break;
    }
}
cout<<swap<<"\n";
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
    
    return 0;
}