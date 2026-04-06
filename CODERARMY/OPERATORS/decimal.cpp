#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter the binary number:";
cin>>num;
int mul=1,ans=0,rem;
while(num>0){
    num=num/10;
    rem =num%10;
    ans =mul*rem+ans;
    mul*=2;
}
cout<<ans<<"\n";

    return 0;
}