#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //graph using adjacency matrix
    int n,e;
    cin>>n>>e;
    int adj[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j]=0;
        }
    }   
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1; //for undirected graph
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}