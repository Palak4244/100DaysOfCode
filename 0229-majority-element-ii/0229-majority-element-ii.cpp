class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0, n = nums.size();
        int a = 0, b = 1;

        for (int x : nums) {
            if (x == a) c1++;
            else if (x == b) c2++;
            else if (c1 == 0) a = x, c1 = 1;
            else if (c2 == 0) b = x, c2 = 1;
            else c1--, c2--;
        }

        c1 = c2 = 0;
        for (int x : nums) {
            if (x == a) c1++;
            if (x == b) c2++;
        }

        vector<int> ans;
        if (c1 > n / 3) ans.push_back(a);
        if (b != a && c2 > n / 3) ans.push_back(b);

        return ans;
    }
};