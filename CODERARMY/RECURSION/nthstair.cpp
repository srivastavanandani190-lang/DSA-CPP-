#include<iostream>
using namespace std;

int countWays(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return countWays(n-1)+countWays(n-2);
}

int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"Number of ways to climb "<<n<<" stairs is: "<<countWays(n)<<endl;
    return 0;
}
