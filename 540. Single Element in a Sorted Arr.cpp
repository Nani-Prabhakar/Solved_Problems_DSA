//540. Single Element in a Sorted Array

class Solution {
    int helper(vector<int>nums,int low,int high){
        if(low>high)return -1;
        int mid=(low+high)/2;
        if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1])return nums[mid];
        if((mid%2==0 and nums[mid+1]==nums[mid] )or (mid%2==1 and nums[mid-1]==nums[mid])){
            return helper(nums,mid+1,high);

        }
        else return helper(nums,low,mid-1);
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        return helper(nums,1,n-2);
    }
};