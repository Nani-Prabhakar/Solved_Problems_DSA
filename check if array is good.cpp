class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
       
        
       
        for(int i=0;i<n-1;i++){
            if(nums[i]==i+1){
                
            }
            else {
                
                
                return false;
            }
        }
        if(nums[n-1]!=n-1)return false;
        return true;
        
    }
};