#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<arr[i];
    cout<<" ";
    if(i%2==0){
        cout<<arr[i]*10<<" ";
    }
   else cout<<arr[i]*2<<" ";
}


    return 0;
}