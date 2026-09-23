#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate_90(vector<vector<int>>& matrix, int n){
//transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][n-1-j]);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int k;
    cout<<"Enter the number of times to rotate: ";
    cin>>k;
    k=k%4;
    for(int i=0;i<k;i++){
        rotate_90(matrix,n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}