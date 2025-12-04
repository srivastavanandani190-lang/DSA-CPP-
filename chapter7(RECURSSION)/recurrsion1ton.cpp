#include<iostream>
using namespace std;\
//recurssion substitute of for loop.

void print(int x,int n){
    //base condition(condition of recurssion).
    if(x>n)  return;//after return rest line won't excute.
    cout<<x<<"\n";//work
    print(x+1,n);//function calling itself.(call)
}

int main(){
    int n;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
print(1,n);

    return 0;
}