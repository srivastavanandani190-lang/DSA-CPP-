#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr(3,vector<int>(3,2));
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Number of rows: "<<arr.size()<<endl;
    cout<<"Number of columns: "<<arr[0].size()<<endl;

}