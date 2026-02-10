#include<iostream>
using namespace std;

void printnumber(int n,int num){
    if(n==num){
        cout<<num<<" ";
        return;
    }
    cout<<n<<" ";
    printnumber(n+1,num);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    cout<<"Natural numbers from 1 to "<<n<<" are: ";
    printnumber(1,n);
    return 0;
}