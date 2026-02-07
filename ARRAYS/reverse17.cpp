#include<iostream>
using namespace std;
int main(){
int arr[6]={12,11,10,17,8,9};
int i=0,j=5;
while(i<j){
    //swap(arr[i],arr[j]);
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(int j=0;j<6;j++){
    cout<<" "<<arr[j];
}

    return 0;
}