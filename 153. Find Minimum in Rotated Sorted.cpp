//153. Find Minimum in Rotated Sorted Array

class Solution {
    int helper(vector<int>nums,int low,int high,int mini){
        if(low>high)return mini;
        int mid=(low+high)/2;
        if(nums[low]<=nums[mid]){
            mini=min(mini,nums[low]);
            return helper(nums,mid+1,high,mini);
        }
        else{
            mini=min(nums[mid],mini);
            return helper(nums,low,mid-1,mini);
        }
    }
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=INT_MAX;
        return helper(nums,low,high,mini);
    }
};