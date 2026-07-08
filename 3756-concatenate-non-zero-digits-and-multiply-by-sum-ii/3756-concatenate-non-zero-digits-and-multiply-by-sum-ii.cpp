class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        int n = s.size();
        
        vector<long long> val(n+1, 0), pow10(n+1, 1);
        vector<int> cnt(n+1, 0), sumPre(n+1, 0);
        
        for (int i = 1; i <= n; i++) {
            int d = s[i-1] - '0';
            val[i] = val[i-1];
            cnt[i] = cnt[i-1];
            sumPre[i] = sumPre[i-1] + d;
            if (d != 0) {
                val[i] = (val[i-1] * 10 + d) % MOD;
                cnt[i] = cnt[i-1] + 1;
            }
            pow10[i] = (pow10[i-1] * 10) % MOD;
        }
        
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            int k = cnt[r+1] - cnt[l];
            long long x = (val[r+1] - (val[l] * pow10[k]) % MOD + MOD) % MOD;
            int sum = sumPre[r+1] - sumPre[l];
            ans.push_back((x * 1LL * sum) % MOD);
        }
        return ans;
    }
};
