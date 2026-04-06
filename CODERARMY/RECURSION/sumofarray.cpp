#include<iostream>
using namespace std;

int sum(int arr[], int index,int size){
    if(index==size){
        return 0;
    }
    return arr[index] + sum(arr,index+1,size);  
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of array is: " << sum(arr, 0, n) << endl;
    return 0;
}
