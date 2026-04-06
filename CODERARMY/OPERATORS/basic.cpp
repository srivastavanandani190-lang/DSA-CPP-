#include<iostream>
using namespace std;
int main(){
    //BODMAS.
    //urnary operator-> a++(post increament),++a(pre increament),a--,--a.
    //BINARY OPERATOR->{/,*,%}>>{+,-}; Associativity.(left to right).
    //jis datatype ka precedence jda hoga wahi result ayega.cout<<13/2<<"\n";
    //comparison operator{==,<,>,<=,>=,!=}
    //{>,<,<=,>=}>>{==,!=} precedence.
    //logical operator->(||{if anyone is true then print true},&&{both condition true then only true},!{opposite});
    //(0 && 4)->0;(2 && 9)->1.
    //(0||0)->0;(0||8)->1.
    //(!4)->0;(!0)->1
    //bitwise operator->{&(bwand),|(bwor),^(bwexor),~(bwcomplement),<<(leftshift),>>(rightshift)}.
    //assignment operator a*=3(a=a*3);
    cout<<13/2<<"\n";
    cout<<13.2/2<<"\n";
    int a=5;
    cout<<a++<<"\n";
    cout<<++a<<"\n";
    int b=3==4;
    cout<<b<<"\n";
    int c=3>4>5!=1;//(left to right precedence).
    cout<<c;
        return 0;
}