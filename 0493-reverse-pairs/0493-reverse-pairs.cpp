class Solution {
public:
    int mergeSort(vector<int>& a, int l, int r) {
        if (l >= r) return 0;

        int mid = l + (r - l) / 2;
        int ans = mergeSort(a, l, mid) + mergeSort(a, mid + 1, r);

        int j = mid + 1;

        for (int i = l; i <= mid; i++) {
            while (j <= r && (long long)a[i] > 2LL * a[j])
                j++;
            ans += j - (mid + 1);
        }

        sort(a.begin() + l, a.begin() + r + 1);

        return ans;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};