#include<iostream>
using namespace std;
int main(){
int a[2][2];
int b[2][2];
int sum[2][2];
cout << "Enter the elements of the first matrix:" << endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>a[i][j];
    }
}
cout<<"\n";
cout << "Enter the elements of the second matrix:" << endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>b[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
cout << "\nSum of the two matrices:" << endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<< sum[i][j] <<" ";
    }
    cout << endl;
}

    return 0;
}