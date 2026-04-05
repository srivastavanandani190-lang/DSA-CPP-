#include<iostream>
using namespace std;
int main(){
int x=3,y,z;
y=x=10;//assignment operator(RIGHT TO LEFT)
z=x<10;//check from rightside(10<10-false)

cout<<x<<"\n"<<y<<"\n"<<z;

    return 0;
}