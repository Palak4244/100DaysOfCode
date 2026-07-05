class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        const int MOD = 1e9 + 7;
        vector<vector<pair<int,int>>> dp(n, vector<pair<int,int>>(n, {-1,0}));
        
        dp[n-1][n-1] = {0,1}; // Start at 'S'
        
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(board[i][j] == 'X' || dp[i][j].second == 0) continue;
                for(auto [di,dj] : vector<pair<int,int>>{{-1,0},{0,-1},{-1,-1}}){
                    int ni = i+di, nj = j+dj;
                    if(ni<0 || nj<0) continue;
                    if(board[ni][nj] == 'X') continue;
                    
                    int val = (board[ni][nj]=='E' || board[ni][nj]=='S') ? 0 : board[ni][nj]-'0';
                    int newScore = dp[i][j].first + val;
                    
                    if(newScore > dp[ni][nj].first){
                        dp[ni][nj] = {newScore, dp[i][j].second};
                    } else if(newScore == dp[ni][nj].first){
                        dp[ni][nj].second = (dp[ni][nj].second + dp[i][j].second) % MOD;
                    }
                }
            }
        }
        
        if(dp[0][0].first == -1) return {0,0};
        return {dp[0][0].first, dp[0][0].second};
    }
};
