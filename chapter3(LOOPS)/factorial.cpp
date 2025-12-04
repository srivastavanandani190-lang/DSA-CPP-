#include<iostream>
using namespace std;

int main(){

int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
int product=1;
if(n==0 && n==1) cout<<"FACTORIAL OF "<<n<<" is 1";
else {
for(int i=1;i<=n;i++){
     product=i*product;
     cout<<"FACTORIAL OF "<<i<<" is "<<product<<"\n";//hw
}
}
//cout<<"FACTORIAL OF "<<i<<" is "<<product;//just factorial of given number.
    return 0;
}