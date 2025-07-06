//author: Ghostyy :D

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int timer = 1;

    void dfs(int node, int parent, vector<bool>& vis, vector<vector<int>>& adj,
         vector<int>& tin, vector<int>& low, vector<pair<int, int>>& bridges) {
        vis[node] = true;
    tin[node] = low[node] = timer++;
    for(auto it : adj[node]) {
             if (it == parent) continue; 
                    if (!vis[it]) {
                    dfs(it, node, vis, adj, tin, low, bridges);
                        low[node] = min(low[node], low[it]);
            // agar bridge present hai to push kar denge 
            if (low[it] > tin[node]) {
                bridges.push_back({node, it});
            }
        } else {
            low[node] = min(low[node], tin[it]);
        }
    }
}

        void removeBridges(vector<vector<int>>& adj, vector<pair<int, int>>& bridges) {
    for (auto bridge : bridges) {
        int u = bridge.first;
        int v = bridge.second;

        adj[u].erase(remove(adj[u].begin(), adj[u].end(), v), adj[u].end());
            adj[v].erase(remove(adj[v].begin(), adj[v].end(), u), adj[v].end());
    }
}

int connectc(int node, vector<bool>& vis, vector<vector<int>>& adj) {
    int size = 1; 
    vis[node] = true;
    for (auto neighbor : adj[node]) {
        if (!vis[neighbor]) {
            size += connectc(neighbor, vis, adj);
        }
    }
    return size;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        timer = 1;
                int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);

        
        for (int i = 0; i < m; i++) {
            int v1, v2;
            cin >> v1 >> v2;
            v1--; 
            v2--; 
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

                 vector<bool> vis(n, false);
             vector<int> tin(n, 0);
        vector<int> low(n, 0);
        vector<pair<int, int>> bridges;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, -1, vis, adj, tin, low, bridges);
            }
        }

                removeBridges(adj, bridges);

       
        fill(vis.begin(), vis.end(), false); 
        int maxm = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                maxm = max(maxm, connectc(i, vis, adj));
            }
        }

        cout<< maxm << endl;
    }
    return 0;
}
