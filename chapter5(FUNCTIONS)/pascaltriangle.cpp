#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
   return f;
}
int ncr(int x,int y){
    int a=factorial(x);
    int b=factorial(y);
    int c=factorial(x-y);
    return a/(b*c);
}
int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i-1 ;j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<ncr(i,j)<<" ";

    }
cout<<"\n";
}
    return 0;
}