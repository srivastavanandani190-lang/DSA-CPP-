#include<iostream>

using namespace std;

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    // cout<<*x<<" "<<*y;
}
int main(){
    int x,y;
    cout<<"ENTER THE VALUE OF x= ";
    cin>>x;
    cout<<"ENTER THE VALUE OF y= ";
    cin>>y;
    cout<<x<<" "<<y<<"\n";
    swap(&x,&y);//pass by reference.
    cout<<x<<" "<<y;
    return 0;
}
