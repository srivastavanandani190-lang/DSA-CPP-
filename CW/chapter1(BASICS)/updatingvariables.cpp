#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<"THE VALUE OF x:"<<x;

    x=6;//UPDATION OR OVERWRITE!
    cout<<"\nTHE VALUE OF x:"<<x;

    x=x+7;//(x += 7;)
    //(=)ASSIGNMENT OPERATOR NOT AN EQUAL TO OPERATOR
    cout<<"\nTHE VALUE OF x:"<<x;

    x=x-2;//(x -= 2;)
    cout<<"\nTHE VALUE OF x:"<<x;

    x=x*10;//(x *= 10;)
    cout<<"\nTHE VALUE OF x:"<<x; 

    x += 5;//(x+5)
     cout<<"\nTHE VALUE OF x:"<<x; 
    return 0;
}