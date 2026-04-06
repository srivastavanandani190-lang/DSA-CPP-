#include<iostream>
using namespace std;
void func(int a[],int n){//address
   // cout<<sizeof(a);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
int arr[5]={23,25,27,29,31};//real array

cout<<sizeof(arr)<<"\n";
func(arr,5);

    return 0;
}