#include<iostream>
using namespace std;

//using continue to print odd number from 1-100.

int main(){
for(int i=1;i<100;i++){
    if(i%2==0) continue;
    cout<<i<<"\n";
}
    return 0;
}