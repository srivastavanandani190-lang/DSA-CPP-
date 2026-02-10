// 1: Print all odd numbers from 1 to n using recursion.
// #include<iostream>
// using namespace std;

// void printodd(int n){
//     if(n==0){
//         return;
//     }
//     printodd(n-1);
//     if(n%2!=0){
//         cout<<n<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     printodd(n);
//     return 0;
// }

// 2: Print all numbers from 10 to n using recursion, where n will be greater than 10.
// #include<iostream>
// using namespace std;
// void print(int n,int num){
//         if(n>num){
//             return;
//         }
//         cout<<n<<" ";
//         print(n+1,num);
    
// }
// int main(){
//     int n;
//     cout<<"Enter a number greater than 10: ";
//     cin>>n;
//     print(10,n);
//     return 0;
// }

// 3: Write a Table program using recursion. Take input number n, and print its table. 
#include<iostream>
using namespace std;
void table(int n,int i){
    if(i>10){
        return;
    }
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    table(n,i+1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    table(n,1);
    return 0;
}