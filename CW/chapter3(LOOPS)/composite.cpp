#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
//if n has a factor apart from n and 1 it is composite.

bool flag=true;// true means number is prime.
for(int i=2;i<=n/2;i++){//i<=n/2
    if(n%i==0) {
  flag =false;//false means composite.
  break;//to get out out of loop.
    }
}
    if(n==1) cout<<"NEITHER PRIME NOR COMPOSITE";
    else if(flag==true) cout<<"NUMBER IS prime";
    else cout<<"NUMBER IS COMPOSITE";
    
    return 0;
}