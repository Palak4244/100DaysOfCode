class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        queue<int> q;
        
        // Start with digits 1 to 9
        for (int i = 1; i <= 9; i++) {
            q.push(i);
        }
        
        while (!q.empty()) {
            int num = q.front();
            q.pop();
            
            if (num >= low && num <= high) {
                result.push_back(num);
            }
            
            int lastDigit = num % 10;
            if (lastDigit < 9) {
                int nextNum = num * 10 + (lastDigit + 1);
                if (nextNum <= high) {
                    q.push(nextNum);
                }
            }
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};
