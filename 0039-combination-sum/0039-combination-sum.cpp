class Solution {
public:
    set<vector<int>> s; // to track unique combinations
    void helper(vector<int>& arr , int idx , vector<int>& comb , vector<vector<int>>& ans , int target){
        int n = arr.size();
        if(idx ==n || target<0){
            return;
        }
        if(target == 0){
            if(s.find(comb) == s.end()){  // for getting unique combinations
            ans.push_back(comb);
            s.insert(comb);
            }
            return;
        }
        comb.push_back(arr[idx]);
        helper(arr , idx+1 , comb , ans , target - arr[idx]);
        helper(arr , idx , comb , ans , target - arr[idx]);
        
        comb.pop_back();
        helper(arr , idx+1 , comb , ans , target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
      vector<vector<int>> ans;
      vector<int> comb;
      
      helper(arr , 0 , comb , ans , target);
      return ans;
        
    }
};
