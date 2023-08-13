//String Matching

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    int calculate_difference(const string &str1, const string &str2) {
    int diff = 0;
    for (int i = 0; i < str1.length(); ++i) {
        diff += abs(int(str1[i]) - int(str2[i]));
    }
    return diff;
}
  public:
    int minimum_difference(int n, vector<string> &words) {
    int min_diff=INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = calculate_difference(words[i], words[j]);
            min_diff = min(min_diff, diff);
        }
    }

    return min_diff;
    }
   
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.minimum_difference(n, words) << endl;
    }
}

// } Driver Code Ends