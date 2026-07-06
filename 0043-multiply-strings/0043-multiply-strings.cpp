class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int m = num1.size(), n = num2.size();
        vector<int> res(m + n, 0);
        
        // Traverse from rightmost digit
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = res[i + j + 1] + mul;
                
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        
        // Convert to string
        string ans;
        for (int digit : res) {
            if (!(ans.empty() && digit == 0)) {
                ans.push_back(digit + '0');
            }
        }
        
        return ans.empty() ? "0" : ans;
    }
};
