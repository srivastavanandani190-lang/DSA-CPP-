#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxsum=INT_MIN;
    int rowindex=-1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            rowindex=i;
        }
    }
    cout<<rowindex<<" "<<maxsum<<endl;
}
