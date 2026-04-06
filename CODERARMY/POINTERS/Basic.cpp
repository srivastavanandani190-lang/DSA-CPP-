#include<iostream>
using namespace std;
int main(){

    int a=10;
    int *ptr=&a;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";
    cout<<sizeof(ptr)<<"\n";
    float b=30.23;
    float *p=&b;
    cout<<p<<"\n";
    cout<<*p<<"\n";
    cout<<sizeof(p)<<"\n";
    b=45.2;
    cout<<*p<<"\n";
    return 0;
}
