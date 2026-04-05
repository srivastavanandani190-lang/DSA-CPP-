#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"ENTER THE VALUE OF a = ";
cin>>a;
cout<<"ENTER THE VALUE OF b= ";
cin>>b;
char ch;
cout<<"OPERATION->";
cin>>ch;
//break helping out of getting switch cases.
switch (ch)
{
case '+':
    cout<<a+b;
    break;
 case '-':
 cout<<a-b;
 break;
 case '*':
 cout<<a*b;
 break;
 case '/':
 cout<<a/b;
 break;

default:
cout<<"invalid operator";
    break;
}
    return 0;
}