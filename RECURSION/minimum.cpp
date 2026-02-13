#include<iostream>
using namespace std;

int minimum(int arr[], int index, int size) {
    if (index == size - 1) {
        return arr[index];
    }
   
    return min(arr[index], minimum(arr, index + 1, size));
}
int main() {
    int arr[] = {5, 2, 9, 12, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element in the array is: " << minimum(arr, 0, n) << endl;
    return 0;
}

