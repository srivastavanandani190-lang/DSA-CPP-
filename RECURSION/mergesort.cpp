#include<iostream>
#include<vector>
using namespace std;
 void merge(int arr[], int start, int mid, int end) {
   vector<int>temp(end-start+1);
    int left = start, right= mid + 1, index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <=arr[right]) {
            temp[index++] = arr[left++];
        }
        else {
            temp[index++] = arr[right++];
        }
        
    }
    while (left <= mid) {
        temp[index++] = arr[left++];
    }
    while (right <= end) {
        temp[index++] = arr[right++];
    }
    index=0;
    while(start<=end){
        arr[start++]=temp[index++];
    }
}

void mergesort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergesort(arr, start , mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
//complexity of merge sort is O(n log n) and space complexity is O(n) because 
//we are using a temporary array to store the sorted elements.

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    mergesort(arr, 0, arr_size - 1);
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}