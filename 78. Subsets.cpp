//78. Subsets
class Solution {
    void helper(int ind,vector<int>nums,vector<vector<int>>&ans,vector<int>&row){
        if(ind==nums.size()){
            ans.push_back(row);
            return;
        }
        row.push_back(nums[ind]);
        helper(ind+1,nums,ans,row);
        row.pop_back();
        helper(ind+1,nums,ans,row);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>row;
       helper(0,nums,ans,row);
       return ans;
    }
};