#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE VALUE OF n:";
cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    for(int k=1;k=(2*n)-(2*i);k++){
        cout<<" ";
    }
    for(int z=1;z<=i;z++) {
        cout<<"* ";
    }
    cout<<"\n";
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    for(int k=1;k<=(2*n)-(2*i);k++){
        cout<<" ";
    }
    for(int z=1;z<=i;z++) {
        cout<<"* ";
    }
    cout<<"\n";
}
    return 0;
}