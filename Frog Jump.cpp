//Frog Jump
#include <bits/stdc++.h> 
//memorization
int helper(int i,vector<int>arr,vector<int>&dp){
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];
    int l=helper(i-1,arr,dp)+abs(arr[i]-arr[i-1]);
    int r=INT_MAX;
    if(i>1){
        r=helper(i-2,arr,dp)+abs(arr[i]-arr[i-2]);
    }
    return dp[i]=min(l,r);
}
int frogJump(int n, vector<int> &arr)
{
    //tabulation
    // vector<int>dp(n,0);
    // for(int i=1;i<n;i++){
    //     int l=dp[i-1]+abs(h[i]-h[i-1]);
    //     int r=INT_MAX;
    //     if(i>1)r=dp[i-2]+abs(h[i]-h[i-2]);
    //     dp[i]=min(l,r);
    // }
    // return dp[n-1];
    

    //space optimization
    int prev=0;
    int prev2=0;
    //int cur;
    for(int i=1;i<n;i++){
        int l=prev+abs(arr[i]-arr[i-1]);
        int r=INT_MAX;
        if(i>1){
            r=prev2+abs(arr[i]-arr[i-2]);
        }
        int cur=min(l,r);
        prev2=prev;
        prev=cur;
        
    }
    return prev;
}