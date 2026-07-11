class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                int nodes = 0, edgesCount = 0;
                queue<int> q;
                q.push(i);
                vis[i] = true;

                while (!q.empty()) {
                    int u = q.front(); q.pop();
                    nodes++;
                    edgesCount += adj[u].size();
                    for (int v : adj[u]) {
                        if (!vis[v]) {
                            vis[v] = true;
                            q.push(v);
                        }
                    }
                }

                edgesCount /= 2; // undirected graph
                if (edgesCount == nodes * (nodes - 1) / 2) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
