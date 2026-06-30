class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        // last seen positions of 'a', 'b', 'c'
        int lastA = -1, lastB = -1, lastC = -1;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') lastA = i;
            else if (s[i] == 'b') lastB = i;
            else if (s[i] == 'c') lastC = i;

            // if all three have been seen, add min(lastA, lastB, lastC) + 1
            if (lastA != -1 && lastB != -1 && lastC != -1) {
                ans += min({lastA, lastB, lastC}) + 1;
            }
        }
        return ans;
    }
};
