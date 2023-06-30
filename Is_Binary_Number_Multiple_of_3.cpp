//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isDivisible(string s){
	    int n=s.size();
    reverse(s.begin(),s.end());
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if((i+1)%2==0 && s[i]=='1')even++;
            else if((i+1)%2==1 && s[i]=='1')odd++;
        }
        int count=abs(even-odd);
        return (count%3==0);
	}
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends