//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
    // int fib(int n,vector<int>&dp){
        
    //       if (n <= 1) {
    //         return n;
    //     }
    
        
    //     if (dp[n] != -1) {
    //         return dp[n];
    //     }
    
        
    //     dp[n] = fib(n - 1, dp) % MOD + fib(n - 2, dp) % MOD;
    
    //     return dp[n] % MOD;
    // }
  public:
    int mod = 1000000007;
    int nthFibonacci(int n){
        vector<int>dp(n+1,-1);
        
        //re;turn fib(n,dp);
        
      long long prev = 1;
      long long prev2 =0;
      
      for (int i = 2; i<=n; i++)
      {
          long long  curr = (prev + prev2)%mod;
          prev2 = prev;
          prev = curr;
      }
      return prev;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends