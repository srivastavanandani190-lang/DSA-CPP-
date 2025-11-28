#include<iostream>
using namespace std;
int main(){
//Dynamic Memory Allocation!
int *ptr=new int;
*ptr=5;
cout<<"ADDRESS:"<<ptr<<"\n";
cout<<"VALUE:"<<*ptr<<"\n";
float *ptr1=new float;
*ptr1=52.5;
cout<<"ADDRESS:"<<ptr1<<"\n";
cout<<"VALUE:"<<*ptr1<<"\n";
int n;
cout<<"Enter value of n:";
cin>>n;
int *p=new int[n];
for(int i=0;i<n;i++){
    p[i]=i+1;
}
for(int i=0;i<n;i++){
    cout<<p[i]<<" ";
}
delete ptr;
delete ptr1;
delete[] p;

    return 0;
}
