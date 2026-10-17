#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//unweighted undirected graph using adjacency matrix

int main(){
    int vertex, edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edges;
    vector<vector<bool>> graph(vertex, vector<bool>(vertex, false));

    int u, v;
    for(int i=0; i<edges; i++){
        cout<<"Enter the edge (u v): ";
        cin>>u>>v;
        graph[u][v] = true;
        graph[v][u] = true; // For undirected graph
    }
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}