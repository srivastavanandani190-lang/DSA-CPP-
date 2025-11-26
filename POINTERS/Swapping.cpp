#include<iostream>
using namespace std;
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    //same location as a and b!
    cout<<p1<<"\n";
    cout<<p2<<"\n";
}
int main(){
    int a=10;
    int b=45;
    cout<<&a<<"\n";
    cout<<&b<<"\n";
      cout<<"BEFORE SWAPPING:"<<a<<","<<b<<"\n";
    swap(&a,&b);
    cout<<"AFTER SWAPPING:"<<a<<","<<b;
    return 0;
}