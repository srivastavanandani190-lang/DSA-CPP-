#include<iostream>
using namespace std;
int main(){
int a[3][2];
cout<<"enter the elements of matrix:\n";
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cin>>a[i][j];
    }
}
cout<<"transpose of matrix is:\n";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<a[j][i]<<" ";
    }
    cout<<"\n";
}
    return 0;
}