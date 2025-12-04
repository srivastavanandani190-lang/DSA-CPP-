#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
    cout<<"ENTER THE VALUE OF r = ";
    cin>>r;
    
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    cout<<"COMBINATION = "<<a/(b*c)<<"\n";
    cout<<"PERMUTATION = "<<a/c<<"\n";
    
return 0;
}