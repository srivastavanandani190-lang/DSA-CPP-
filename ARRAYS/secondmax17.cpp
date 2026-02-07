#include<iostream>
using namespace std;
int main(){

    int arr[6]={25,89,56,23,76,78};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    cout<<"MAXIMUM ELEMENT:"<<max<<"\n";
 int max2=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }
    cout<<"SECOND MAXIMUM ELEMENT:"<<max2<<"\n";

    return 0;
}