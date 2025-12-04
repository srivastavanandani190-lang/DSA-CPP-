//In ARRAYS continous memory allocation take place.
//This makes initialisation ,declaration ,updation ,excution faster.
#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=9;
}
int main(){
    int arr[]={12,13,14,15,16};
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    change(arr);//here no pass by value in case of arrays it is pass by reference.
    //same memory location (even if different name).
    cout<<"\n";
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}