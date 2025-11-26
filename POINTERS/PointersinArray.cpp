#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,15,16,18,19};
    int *ptr=arr;
    //address of zeroth index
    cout<<arr<<"\n";
    cout<<arr+0<<"\n";
    cout<<&arr[0]<<"\n";
    cout<<ptr<<"\n";
 //address of 1 index
    cout<<arr+1<<"\n";
    cout<<&arr[1]<<"\n";
    //value at zeroth index
    cout<<arr[0]<<"\n";
    cout<<*arr<<"\n";
    cout<<*(arr+0)<<"\n";
    cout<<*ptr<<"\n";
    //address for all element
    for(int i=0;i<5;i++){
        cout<<arr+i<<"\n";
    }
    //value of array
  for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
//address for all element
    for(int i=0;i<5;i++){
        cout<<ptr+i<<"\n";
    }
    //value of array
  for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
//data of symbol table can't be changed(arr--,arr++ not allowed)



    return 0;
}