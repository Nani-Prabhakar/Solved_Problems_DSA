//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
   
    int longestPalinSubseq(string A) {
        int n=A.size();
        string B=A;
        reverse(B.begin(),B.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int ind1=n-1;ind1>=0;ind1--){
            for(int ind2=n-1;ind2>=0;ind2--){
                int len=0;
                if(A[ind1]==B[ind2]){
                    len=1+dp[ind1+1][ind2+1];
                }
                else {
                    len=max(dp[ind1][ind2+1],dp[ind1+1][ind2]);
                }
                dp[ind1][ind2]=len;
            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends