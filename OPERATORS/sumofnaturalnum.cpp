#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    };
    cout<<"SUM OF "<<n<<" NATURAL NUMBER IS:"<<sum;
    return 0;
}