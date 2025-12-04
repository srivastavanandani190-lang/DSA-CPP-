#include<iostream>
using namespace std;
int main(){
int a[3][3];
int b[3][3];
int c[3][3];
int sum[3][3];
cout << "Enter the elements of the first matrix:" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"\n";
cout << "Enter the elements of the second matrix:" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>b[i][j];
    }
}
cout<<"\n";
cout << "Enter the elements of the third matrix:" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>c[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum[i][j]=a[i][j]+b[i][j]+c[i][j];
    }
}
cout << "\nSum of the three matrices:" << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<< sum[i][j] <<" ";
    }
    cout << endl;
}

    return 0;
}