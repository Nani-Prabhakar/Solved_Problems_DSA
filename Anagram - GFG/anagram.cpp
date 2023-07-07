//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
         if (a.length() != b.length()) {
        return false;
    }
    
    unordered_map<char, int> m1, m2;
    
    for (char c : a) {
        m1[c]++;
    }
    
    for (char c : b) {
        m2[c]++;
    }
    
    for (auto pair : m1) {
        char c = pair.first;
        int count = pair.second;
        
        if (m2[c] != count) {
            return false;
        }
    }
    
    return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends