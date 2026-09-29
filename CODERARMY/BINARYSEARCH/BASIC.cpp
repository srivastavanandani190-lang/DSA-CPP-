#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid,start=0,end=n-1;
    cout<<"Enter the element to be searched:";
    int key;
    cin>>key;
   
    while(start<=end){
          mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"Element found at index:"<<mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(start>end){
        cout<<"Element not found";
    }
    return 0;
}