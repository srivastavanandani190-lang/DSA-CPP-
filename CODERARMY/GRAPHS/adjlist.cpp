#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//unweighted AND undirected graph using adjacency list representation   
int main(){
    int vertex,edges;
    cout<<"Enter vertex and edges: ";
    cin>>vertex>>edges;
    vector<int> adj[vertex];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}