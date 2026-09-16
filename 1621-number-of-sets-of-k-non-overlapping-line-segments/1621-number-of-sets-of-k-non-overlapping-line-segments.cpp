class Solution {
public:
    static const long long MOD = 1000000007;

    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b & 1)
                ans = ans * a % MOD;

            a = a * a % MOD;
            b >>= 1;
        }

        return ans;
    }

    int numberOfSets(int n, int k) {
        int m = n + k - 1;
        int r = 2 * k;

        long long ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (m - r + i) % MOD;
            ans = ans * power(i, MOD - 2) % MOD;
        }

        return ans;
    }
};