


class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        
        if(n<3)return true;
        for(int i = 1;i<n;i++){
            if(nums[i]+nums[i-1]>=m){return true;}
        }
        return false;
        
        
       
    }
};
