#include<iostream>
using namespace std;

int main(){
int n;
cout<<"ENTER THE NUMBERS OF ROWS = ";
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    for(int j=0 ;j<=i ;j++){
        cout<<"*"<<" ";
    }//j or (char)(j+64).
    cout<<"\n";
}
    return 0;
}