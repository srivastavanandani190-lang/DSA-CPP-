#include<iostream>
using namespace std;
int main(){
int a[5][4];
int sum=0;
cout<<"Enter the elements of the first matrix:";
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
    }
}
cout<<"\n";
cout << "Sum of the elements within the matrices:";
for(int i=1;i<5;i++){
    for(int j=1;j<3;j++){
        sum=a[i][j]+sum;
    }
}
cout<<sum;
    return 0;
}