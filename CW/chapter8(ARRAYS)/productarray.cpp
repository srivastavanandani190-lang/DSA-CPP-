#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7};
int n=(sizeof(arr))/4;
int product=1;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    product=product*arr[i];
}
cout<<"\n";
cout<<product;

    return 0;
}