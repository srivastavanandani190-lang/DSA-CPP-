#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"ENTER THE NUMBER OF ROWS = ";
cin>>n;
cout<<"ENTER THE NUMBER OF COLUMNS = ";
cin>>m;
for(int i=1; i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<"*";
    //for square pattern m=n;
    }
   cout<<"\n";
}
    return 0;
}