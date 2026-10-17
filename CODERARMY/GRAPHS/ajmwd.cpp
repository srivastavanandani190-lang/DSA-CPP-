#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//weighted directed graph using adjacency matrix

int main(){
    int vertex, edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edges;
    vector<vector<int>> graph(vertex, vector<int>(vertex, 0));
    //for unweighted directed graph, we can use bool instead of int and initialize the graph with false instead of 0
    int u, v,w;
    for(int i=0; i<edges; i++){
        cout<<"Enter the edge (u v w): ";
        cin>>u>>v>>w;
        graph[u][v] = w;
        
    }
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}