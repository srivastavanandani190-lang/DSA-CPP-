#include<iostream>
using namespace std;\
//recurssion substitute of for loop.

void print(int n){
    //base condition(condition of recurssion).
    if(n==0)  return;//after return rest line won't excute.
    cout<<n<<"\n";
    print(n-1);//function calling itself.
}

int main(){
    int n;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
print(n);

    return 0;
}