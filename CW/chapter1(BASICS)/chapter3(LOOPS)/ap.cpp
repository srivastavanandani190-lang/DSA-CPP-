#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
//1,3,5,7,9,11,13,15,17,19......
for (int i=1;i<=(2*n-1);i=i+2){
    cout<<i<<"\n";
}

    return 0;
}