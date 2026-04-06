#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"ENTER THE VALUE OF x= ";
    cin>>x;
    cout<<"ENTER THE VALUE OF y= ";
    cin>>y;
   
    /*x=x+y;
    y=x-y;
    x=x-y;*/
    swap(x,y);//call by value (just value is going to formal arguments from actual arguement but both 
    //occupying different space in memory so won't swap the value)
    cout<<x<<" "<<y;
    return 0;
}
