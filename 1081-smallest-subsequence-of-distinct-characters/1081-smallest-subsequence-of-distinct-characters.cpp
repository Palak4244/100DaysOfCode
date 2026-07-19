class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);
        
        // Count frequency of each char
        for(char c : s) freq[c - 'a']++;
        
        string result = "";
        
        for(char c : s) {
            freq[c - 'a']--; // one occurrence used
            
            if(visited[c - 'a']) continue; // already in result
            
            // Greedy removal
            while(!result.empty() && result.back() > c && freq[result.back() - 'a'] > 0) {
                visited[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            result.push_back(c);
            visited[c - 'a'] = true;
        }
        
        return result;
    }
};
