#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;

        if (left > right)
            return -1;
        else if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        else
        return binarySearch(arr, mid + 1, right, x);

}
int main() {
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched:";
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";
    return 0;
}

