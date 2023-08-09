//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
    

class Solution{
public: 
    long long int largestPrimeFactor(int N)
    {
        long long num = 2;
        // loop till sqrt(N)
        while ((num * num) <=N)
        if (N % num == 0) // if num divides N evenly
            N /= num; // divide N by num
        else
            num++; // increase num if it don't divide N
        return N;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends