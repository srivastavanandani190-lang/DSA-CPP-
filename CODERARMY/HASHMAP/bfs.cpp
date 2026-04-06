#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        vector<bool>visited(n,false);
        queue<int>Q;
        vector<int>res;
        Q.push(0);
        visited[0]=true;
        while(!Q.empty()){
            int f=Q.front();
            Q.pop();
            res.push_back(f);
            visited[f]=true;
            for(auto x:adj[f]){
                if(!visited[x]){
                    Q.push(x);
                    visited[x]=true;
                }
            }
        }
        return res;
    }
};
int main() {
    int tc;//
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution ob;
        vector<int> ans = ob.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} 
