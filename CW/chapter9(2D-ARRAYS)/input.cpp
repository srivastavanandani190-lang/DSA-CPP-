#include<iostream>
using namespace std;
//2d-array is also called grid or matrix.
//it is also known as array of array.
//many ways to initialise .
int main(){
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}