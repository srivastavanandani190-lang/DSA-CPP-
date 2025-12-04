#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"ENTER THE VALUE OF ELEMENTS = ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<"\n";
    cout<<sum;
return 0;
}