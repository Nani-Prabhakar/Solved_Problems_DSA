//70. Climbing Stairs
class Solution {
    int helper(int n){
        if(n==0 or n==1)return 1;
        int l=helper(n-1);
        int r=helper(n-2);
        return l+r;
    }
public:
    int climbStairs(int n) {
        //return helper(n);
        //vector<int>dp(n+1);
        //dp[0]=dp[1]=1;
        if(n==1 or n==0)return 1;
        int prev=1;
        int prev2=1;
        int cur;
        for(int i=2;i<=n;i++){
            cur=prev2+prev;
            prev=prev2;
            prev2=cur;
        }
        return cur;
    }
};