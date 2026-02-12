#include<iostream>
using namespace std;

int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
}


int main(){
    int n;
    cout<<"Enter the power of 2: ";
    cin>>n;
    cout<<"2^"<<n<<" = "<<pow(n)<<endl;
    return 0;
}
 