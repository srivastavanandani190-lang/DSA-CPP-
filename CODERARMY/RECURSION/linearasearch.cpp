#include<iostream>
using namespace std;

bool linearSearch(int arr[], int index, int key,int N) {
    if(index == N) {
        return false;
    }
    if(arr[index] == key) {
        return true;
    }
    return linearSearch(arr, index + 1, key,N);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    if(linearSearch(arr, 0, key,size)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}