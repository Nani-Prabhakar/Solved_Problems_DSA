//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int k, vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n=a.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<a.size();i++){
            pq.push(make_pair(a[i]+b[n-1],n-1));
            
        }
        vector<int>ans;
        while(!pq.empty() and k--){
            int sum=pq.top().first;
            int idx=pq.top().second;
            pq.pop();
            ans.push_back(sum);
            if(idx-1>=0){
                pq.push(make_pair(sum-b[idx]+b[idx-1],idx-1));
            }
        }
        return ans;
            
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends