#include<iostream>
using namespace std;

int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
for(int i=1;i<=n;i++){
    if(i==8) continue;
    //continue (escape this and print rest).
    cout<<i<<"\n";
}
    return 0;
}