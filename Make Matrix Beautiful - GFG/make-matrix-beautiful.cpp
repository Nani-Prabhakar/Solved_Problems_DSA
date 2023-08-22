//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        
        int sum=0;
        int rs=0;
        int cs=0;
        for(int i=0;i<n;i++){
            int curRsum=0;
            for(int j=0;j<n;j++){
                sum+=matrix[i][j];
                curRsum+=matrix[i][j];
            }
            rs=max(rs,curRsum);
            int curCsum=0;
            for(int j=0;j<n;j++){
                curCsum+=matrix[j][i];
            }
            cs=max(cs,curCsum);
        }
        int  maxSum=max(cs,rs);
        return maxSum*n-sum;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends