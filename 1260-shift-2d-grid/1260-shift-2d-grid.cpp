#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        int total = m * n;

        // Flatten grid into 1D vector
        vector<int> flat;
        for (auto &row : grid) {
            flat.insert(flat.end(), row.begin(), row.end());
        }

        // Compute effective shift
        k %= total;
        rotate(flat.begin(), flat.end() - k, flat.end());

        // Rebuild into 2D grid
        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < total; i++) {
            result[i / n][i % n] = flat[i];
        }
        return result;
    }
};
