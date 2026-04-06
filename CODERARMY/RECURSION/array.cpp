#include<iostream>
#include<vector>
using namespace std;

int print(int arr[],int index,int size){
    if(index==size){
        return 0;

    }
    // cout<<arr[index]<<" ";
    print(arr,index+1,size);
    cout<<arr[index]<<" ";
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,0,5);
    return 0;
}
