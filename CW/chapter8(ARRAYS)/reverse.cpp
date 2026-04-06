#include<iostream>
using namespace std;

int main(){

    int arr[]={12,14,56,89,78};
    int n=sizeof(arr)/4;
    int i=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";}
    return 0;
}