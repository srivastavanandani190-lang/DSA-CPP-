#include<iostream>
using namespace std;
 
int main(){
int n;
cout<<"ENTER THE VALUE OF NUMBER = ";
cin>>n;
int product=1;
while(n!=0){

int ld=n%10;
   n= n/10;
   product *= ld;//sum=sum+ld.
  
}
cout<<product;//last result display.

    return 0;
}