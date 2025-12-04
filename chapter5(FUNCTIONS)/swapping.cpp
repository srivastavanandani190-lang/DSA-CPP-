#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"ENTER THE VALUE OF x= ";
    cin>>x;
    cout<<"ENTER THE VALUE OF y= ";
    cin>>y;
    /*int temp=x;
    x=y;
    y=temp;*/
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
    return 0;
}
