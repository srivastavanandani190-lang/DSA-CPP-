#include<iostream>
using namespace std;
  
void heapify(int arr[], int n, int i){
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void BuildMaxHeap(int arr[], int &n){
   //stepdown
   for(int i = n/2 - 1; i >= 0; i--){
       heapify(arr, n, i);
   }
}
void printHeap(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//756 ,89,90,30,45,78,85,22,10,12,40,15,56,23,67,20
void sortarray(int arr[], int n){
    for(int i = n - 1; i >= 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
int arr[]={10, 20, 15, 30, 40,56,85,22,756,12,45,78,90,23,67,89};
int n = 16;
BuildMaxHeap(arr, n);
sortarray(arr, n);
printHeap(arr, n);
return 0;
}
//space complexity is O(1) and time complexity is O(nlogn)
