class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256, -1); // store last index of each char
    int maxLen = 0, left = 0;
    
    for (int right = 0; right < s.size(); right++) {
        if (index[s[right]] >= left) {
            left = index[s[right]] + 1; // move left pointer
        }
        index[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
        
    }
};