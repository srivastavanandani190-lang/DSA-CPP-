#include<iostream>
using namespace std;
 
int main(){
int n;
cout<<"ENTER THE VALUE OF NUMBER = ";
cin>>n;
int sum=0;
while(n!=0){

int ld=n%10;
   n= n/10;
   sum += ld;//sum=sum+ld.
  
}
cout<<sum;//last result display.

    return 0;
}