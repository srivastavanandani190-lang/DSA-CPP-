#include<iostream>
#include<bits/stdc++.h>
using namespace std;    
//bottom up approach
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"Number of ways to climb "<<n<<" stairs: ";
vector<int> dp(n+2);
dp[n]=1;
dp[n+1]=0;
for(int i=n-1;i>=0;i--){
    dp[i]=dp[i+1]+dp[i+2];
}
cout<<dp[0]<<endl;
return 0;
}