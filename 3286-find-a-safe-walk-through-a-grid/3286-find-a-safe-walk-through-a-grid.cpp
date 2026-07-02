#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        dist[0][0] = grid[0][0];
        
        queue<pair<int,int>> q;
        q.push({0,0});
        
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        
        while (!q.empty()) {
            auto [x,y] = q.front(); q.pop();
            for (auto& d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if (nx>=0 && nx<m && ny>=0 && ny<n) {
                    int newCost = dist[x][y] + grid[nx][ny];
                    if (newCost < dist[nx][ny]) {
                        dist[nx][ny] = newCost;
                        q.push({nx,ny});
                    }
                }
            }
        }
        
        return dist[m-1][n-1] < health;
    }
};
