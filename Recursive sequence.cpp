//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
   
public:
    int mod=1e9+7;
    long long sequence(int n){
        // code here
        if(n==1){
            return 1;
        }
        long long tempCur=(n*(n+1))/2;
        int  temp=n;
        long long tempSum=1;
        while(temp>0){
            tempSum=tempCur*tempSum%mod;
            temp--;
            tempCur--;
        }
        long long int ans=(tempSum+sequence(n-1))%mod;
        
        return ans;
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends