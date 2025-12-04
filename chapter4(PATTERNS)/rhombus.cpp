#include<iostream>
using namespace std;

int main(){
int n;
cout<<"ENTER THE NUMBERS OF ROWS = ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=n;j++){
        cout<<"*";
    }//j or (char)(j+64).
    cout<<"\n";
}
    return 0;
}