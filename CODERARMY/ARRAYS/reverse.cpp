#include<iostream>
using namespace std;
int main(){
int arr[6];
cout<<"Enter the elements of array: "<<"\n";
for(int i=0;i<6;i++){
    cin>>arr[i];
}
for(int i=0,j=5;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int j=0;j<6;j++){
    cout<<arr[j]<<" ";
}
    return 0;
}