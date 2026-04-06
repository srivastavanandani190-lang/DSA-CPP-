#include<iostream>
using namespace std;
int main(){

int a=2&3;
int b=2|3;
int c=(5<<3);
int d=(8>>2);
int e=(~(-6));
//bitwise operator-> binary operation first.
//(ex or->same hua toh zero or different hua toh one).
//left shift->(6<<2)-6*2power2==24
//(5<<3)5*2power3==40
//in c++ leftshift for negative num is not defined.
//rightshift->(6>>2)->6/2power2
//(16>>3)->16/8=2
//complement(~5=-6;~8=-9)or(~(-6)=5)(~(-9)=8).
cout<<a<<"\n";
cout<<b<<"\n";
cout<<c<<"\n";
cout<<d<<"\n";
cout<<e<<"\n";
cout<<(~5)<<"\n";
cout<<(5<<2)<<"\n";
cout<<(6|3);
    return 0;
}