//naughty geek
//{ Driver Code Starts
//Initial Template for C++

#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int totalWays(int N)
    {
        long long int ans =1;
        for(int i=N;i>1;i--){
            ans*=i;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution ob;
        long long int ans=ob.totalWays(n);
        cout<<ans<<endl;
    }
}

// } Driver Code Ends