class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, s = 0;
        long long p = 1; // place value for constructing x

        while (n > 0) {
            int v = n % 10; // current digit
            if (v != 0) {
                s += v;       // add to sum
                x += p * v;   // add to constructed number
                p *= 10;      // shift place value
            }
            n /= 10;
        }
        return x * s;
    }
};
