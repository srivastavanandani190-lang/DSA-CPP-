#include<iostream>
using namespace std;
int main(){
int num;
cout<<"ENTER THE NUMBER:";
cin>>num;
int rem,ans=0,mul=1;

while(num>0){
rem= num&1;
num=num>>1;
ans += rem*mul;
mul*=10;
}
cout<<ans<<"\n";

    return 0;
}