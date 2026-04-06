#include<iostream>
using namespace std;

int main(){

int arr[4][2];
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}