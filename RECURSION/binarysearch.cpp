#include<iostream>
using namespace std;

int binarysearch(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;//integer overflow can be avoided by this method
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarysearch(arr, low, mid - 1, key);
    }
    else{
        return binarysearch(arr, mid + 1, high, key);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int result = binarysearch(arr, 0, n - 1, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
// class Solution {
//   public:
//     bool searchInSorted(vector<int>& arr, int k) {
//         int start = 0;
//         int end = arr.size() - 1;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             if (arr[mid] == k)
//                 return true;
//             else if (arr[mid] > k)
//                 end = mid - 1;
//             else
//                 start = mid + 1;
//         }
//         return false;
//     }
// };
