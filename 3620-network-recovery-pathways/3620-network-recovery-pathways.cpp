class Solution {
public:
    bool canPath(int n, vector<vector<int>>& edges, vector<bool>& online, long long k, int minEdge) {
        vector<vector<pair<int,int>>> adj(n);
        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            if (w >= minEdge && online[u] && online[v]) {
                adj[u].push_back({v, w});
            }
        }

        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
        pq.push({0,0});

        while (!pq.empty()) {
            auto [d,u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;
            for (auto [v,w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist[n-1] <= k;
    }

    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();
        if (!online[0] || !online[n-1]) return -1; // start/end offline → no path

        int maxEdge = 0;
        for (auto &e : edges) maxEdge = max(maxEdge, e[2]);

        int lo = 0, hi = maxEdge, ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (canPath(n, edges, online, k, mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
};
