//Complete the Staircase


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int completeRows(int n) {
        int cnt=0;
        int i=1;
        while(n>=i){
            n-=i;
            i++;
            cnt++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        int res = obj.completeRows(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends