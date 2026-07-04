class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        // adjacency list: city -> {neighbor, weight}
        vector<vector<pair<int,int>>> adj(n+1);
        for (auto &r : roads) {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }

        vector<bool> visited(n+1, false);
        int ans = INT_MAX;

        // BFS from city 1
        queue<int> q;
        q.push(1);
        visited[1] = true;

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto &p : adj[u]) {
                int v = p.first, w = p.second;
                ans = min(ans, w); // track minimum edge weight
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return ans;
    }
};
