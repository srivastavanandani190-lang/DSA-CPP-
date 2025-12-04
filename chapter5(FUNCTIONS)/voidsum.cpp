#include<iostream>
using namespace std;
void sum(int a,int b){//formal parameters(dabbe).
    cout<<a+b;
}
int main(){
int a,b;//actual parameters.
cout<<"ENTER THE VALUE OF a = ";
cin>>a;
cout<<"ENTER THE VALUE OF b = ";
cin>>b;
sum(a,b);//pass by value.

    return 0;
}