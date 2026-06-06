#include<iostream>
#include<bits/stdc++.h>
using namespace std;    
int main(){
    //fibonacci 0 1 1 2 3 5 8 13 21
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;
    return 0;
}
//up to down approach
// int fib(int n,vector<int>& dp){
//     if(n<=1){    
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     return dp[n]=fib(n-1,dp)+fib(n-2,dp
//     );
// }

//bottom up approach
// int fib(int n){
//     vector<int> dp(n+1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

//space optimization
// int fib(int n){
//     int a=0;
//     int b=1;
//     for(int i=2;i<=n;i++){
//         int c=a+b;
//         a=b;
//         b=c;
//     }
//     return b;
// }
