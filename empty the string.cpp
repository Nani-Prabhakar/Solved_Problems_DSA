//empty the string

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeStringEmpty(string s) {
        // code here
        stack<char> st;
        int cnt = 0;
        int n = s.size();
        int i=0;
        
        while(i < n){
            while(i<n and s[i] !='k')
                st.push(s[i++]);
            if(st.empty() or st.top() != 'e')
                return -1;
            st.pop();
            
            if(st.empty() or st.top() != 'e')
                return -1;
            st.pop();
            
            if(st.empty() or st.top() != 'g')
                return -1;
            st.pop();
            
            cnt++;
            i++;
        }
        if(!st.empty()) return -1;
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        
        cin>>s;

        Solution ob;
        cout << ob.makeStringEmpty(s) << endl;
    }
    return 0;
}
// } Driver Code Ends