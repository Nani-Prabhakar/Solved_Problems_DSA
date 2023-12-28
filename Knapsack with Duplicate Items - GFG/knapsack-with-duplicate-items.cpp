//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int w, int val[], int wt[])
    {
        // code here
        vector<int> curr(w+1, 0);
        vector<int> next(w+1, 0);
        for(int i=N-1; i>=0; i--){
            for(int W=0; W<=w; W++){
                int include = 0;
                if(wt[i] <= W){
                    include = val[i] + curr[W-wt[i]];
                }
                int exclude = next[W];
                curr[W] = max(include, exclude);
            }
            next = curr;
        }
        return curr[w];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends