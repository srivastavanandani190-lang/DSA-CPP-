#include<iostream>
using namespace std;
 //I DID IT!    
int main(){
int n;
cout<<"ENTER THE VALUE OF NUMBER = ";
cin>>n;
int sum=0;

while(n!=0){
 int ld=n%10;
 n=n/10;

 if(ld%2==0){
sum += ld;//sum=sum+ld
   }
  
}
cout<<sum;
    return 0;
}