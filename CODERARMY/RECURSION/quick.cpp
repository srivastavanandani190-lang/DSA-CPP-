#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}
int quick(int arr[], int low, int high, int k){
    if(low < high){
        int pi = partition(arr, low, high);
        if(pi == k-1){
            return arr[pi];
        }
        else if(pi > k-1){
            return quick(arr, low, pi-1, k);
        }
        else{
            return quick(arr, pi+1, high, k);
        }
    }
    return -1; // Return -1 if k is out of bounds
}

int main(){
    int arr[] = {10, 4, 5, 8, 6, 11, 26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int result = quick(arr, 0, n-1, k);
    if(result != -1){
        cout << "The " << k << "rd smallest element is: " << result << endl;
    } else {
        cout << "k is out of bounds." << endl;
    }
    return 0;
}
