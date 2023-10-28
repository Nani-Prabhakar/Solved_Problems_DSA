class Solution {
//memorization::
    int f(int i,vector<int>arr,vector<int>&dp){
        if(i==0)return dp[i]=arr[i];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int pick=arr[i]+f(i-2,arr,dp);
        int not_pick=f(i-1,arr,dp);
        return dp[i]=max(pick,not_pick);
    }
public:
//space optimization::
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
           int cur=max(prev2+nums[i],prev);
           prev2=prev;
           prev=cur;
        }
        return prev;
    }
};