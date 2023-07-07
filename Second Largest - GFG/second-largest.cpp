//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	
	//int first=0;
	int print2largest(int arr[], int n) {
	    int second=INT_MIN;
	    int first=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>first){
	            second=first;
	            first=arr[i];
	        }
	        if(arr[i]<first&&arr[i]>second)second=arr[i];
	    }
	    return second;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends