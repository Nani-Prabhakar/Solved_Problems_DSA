//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string reverse(string s,int start,int end){
	    while(start<=end){
	        swap(s[start],s[end]);
	        start++;
	        end--;
	    }
	    
	    
	    return s;
	}
	int isPalindrome(string S)
	{
	    string rev=reverse(S,0,S.length()-1);
	    return (rev==S);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends