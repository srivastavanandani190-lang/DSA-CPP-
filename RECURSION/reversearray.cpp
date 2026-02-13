#include<iostream>
using namespace std;

int print(int arr[],int index){
    if(index==-1){
        return 0;

    }
    // cout<<arr[index]<<" ";//reverse order
     print(arr,index-1);
     cout<<arr[index]<<" "; 
        return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,4);
    return 0;
}