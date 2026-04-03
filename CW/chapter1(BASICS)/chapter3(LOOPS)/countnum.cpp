#include<iostream>
using namespace std;
 
int main(){
int n;
cout<<"ENTER THE VALUE OF NUMBER = ";
cin>>n;
int count=0;
while(n!=0){
   n= n/10;
   count++;
  
}
cout<<count;//last result display.

    return 0;
}