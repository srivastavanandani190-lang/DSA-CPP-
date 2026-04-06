#include<iostream>
using namespace std;

int power(int a, int b){
if(b==0) return 1;
return a*power(a,b-1);
 }

int main(){
    int a;
    cout<<"ENTER THE BASE a= ";
    cin>>a;
    int b;
    cout<<"ENTER THE POWER b= ";
    cin>>b;
   cout<<power(a,b);
    return 0;
}