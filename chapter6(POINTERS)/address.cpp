#include<iostream>
using namespace std;

int main(){
int x=4;
int* p;//(int*-> integer pointer)
p=&x;

cout<<x<<"\n";
cout<<&x<<"\n";
cout<<p<<"\n";
cout<<*p<<"\n";
cout<<&p<<"\n";//p also occupies space in memory.

*p=25;
cout<<x<<"\n";

//address in memory of this variable i.e int datatype (hexadecimal format).
//can be different at different run.
//in order to store address datatype we use pointers.
//POINTERS can also be used to access value of the variables which is stored in given address.
//using dereference operator.
//we can also change value of variable using pointer.

    return 0;
}