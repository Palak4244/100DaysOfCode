class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;  // base cases

        int low = 1, high = x, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2; // avoid overflow
            if (mid * mid == x) return mid;         // perfect square
            if (mid * mid < x) {
                ans = mid;      // store possible answer
                low = mid + 1;  // move right
            } else {
                high = mid - 1; // move left
            }
        }
        return ans; // floor value of sqrt(x)
    }
};
