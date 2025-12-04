#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
//4,7,10,13,16,19,22,25,28,31,34,37...
for (int i=4;i<=(3*n+1);i=i+3){
    cout<<i<<"\n";
}

    return 0;
}