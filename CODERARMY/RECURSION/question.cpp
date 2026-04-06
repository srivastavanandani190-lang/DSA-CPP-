
// 1: Sum of cubes of N natural numbers using Recursion.
// #include <iostream>
// using namespace std;

// int sumOfCubes(int n) {
//     if (n == 1) {
//         return 1; // Base case: sum of cubes of first 1 natural number is 1^3 = 1
//     }
//     return sumOfCubes(n - 1) + n * n * n; // Recursive case

// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int result = sumOfCubes(n);
//     cout << "The sum of cubes of first " << n << " natural numbers is: " << result << endl;
//     return 0;
// }

 
// 2: Power of 4
// #include<iostream>
// #include<cmath>
// using namespace std;

// void power(int n,int p){
//     if(p==0){
//         cout<<"1"<<endl;
//         return;
//     }
//     if(p==1){
//         cout<<n<<endl;
//         return;
//     }
//     power(n,p-1);
//     cout<<n<<"^"<<p<<" = "<<pow(n,p)<<endl;
// }

// int main(){
//     int n,p;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Enter the power: ";
//     cin>>p;
//     power(n,p);
//     return 0;
// }


// 3: Given a Number N, check whether it is prime or not using Recursion.
#include<iostream>
using namespace std;

bool isPrime(int n, int i=2){
    if(n<=2){
        return (n==2); // 2 is prime, 1 and 0 are not
    }
    if(n%i==0){
        return false; // n is divisible by i, hence not prime
    }
    if(i*i>n){
        return true; // No need to check beyond sqrt(n)
    }
    return isPrime(n, i+1); // Check for next divisor
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    } else {
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}