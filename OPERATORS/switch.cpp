#include<iostream>
using namespace std;
int main(){
//float and double not allowed for switch case.
int n;
cout<<"ENTER THE VALUE OF n:";
cin>>n;
switch (n){
    case 1:
    cout<<"good morning";
    break;
    case 2:
    cout<<"good afternoon";
    break;
    case 3:
    cout<<"good evening";
    break;
    case 4:
    cout<<"good night";
    break;
    default:
    cout<<"none";
    break;
}
//if you don't mention break it will execute condition till last.
//scope of variable within block only.(top to bottom detection of variable)
//within block same name two variable is not declared.
    return 0;
}