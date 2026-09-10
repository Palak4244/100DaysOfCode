class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int current = 0;
        int usedDays = 1;

        for (int weight : weights) {
            if (current + weight > capacity) {
                usedDays++;
                current = 0;
            }

            current += weight;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;

        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};