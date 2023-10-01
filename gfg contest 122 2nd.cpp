//gfg contest 122 2nd
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int solve(int N, string S) {
        set<char>s;
        for(int i=0;i<N;i++){
            s.insert(S[i]);
        }
        return s.size()-1;
    }
};


//{ Driver Code Starts.
//Position this line where user code will be pasted.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin>>S;
        Solution ob;
        cout << ob.solve(N, S) << "\n";
    }
    return 0;
}

// } Driver Code Ends