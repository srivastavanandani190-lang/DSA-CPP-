#include<iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //search for a specific element in the 2D array
    int target = 10;
    bool found = false;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == target) {
                cout << "Element " << target << " found at position (" << i << ", " << j << ")" << endl;
                found = true;
                break;
            }
        }
         
    }
    if(!found) {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}