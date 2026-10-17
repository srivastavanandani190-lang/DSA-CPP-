#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//weighted AND undirected graph using adjacency list representation   
int main(){
    int vertex,edges;
    cout<<"Enter vertex and edges: ";
    cin>>vertex>>edges;
    vector<pair<int,int>> adj[vertex];
    int u,v,w;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back({u,w});
    }
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j].first<<"("<<adj[i][j].second<<")"<<" ";
        }
        cout<<endl;
    }
    return 0;
}