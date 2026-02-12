#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n*fact(n-1); // Recursive case: n! = n * (n-1)!
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return 0; // Exit with an error code
    }

    int result = fact(n);
    cout<<"Factorial of "<<n<<" is:"<<result<<endl;
    return 0;
}
//only works for small values of n due to integer overflow. 
//For larger values, consider using a larger data type or 
//implementing a more efficient algorithm.