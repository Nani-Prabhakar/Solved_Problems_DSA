//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		 int left=0, right=m-1;
         int top=0,button=n-1;
         while(left<=right && top<=button){
           for(int i=left;i<=right;i++){
               k-=1;
              if(k==0)
              return a[top][i];
           }
           top+=1;
           for(int i=top;i<=button;i++){
               k-=1;
               if(k==0)
               return a[i][right];
           }
           right-=1;
           if(left<=right)
           {
               for(int i=right;i>=left;i--){
                   k-=1;
                   if(k==0)
                   return a[button][i];
               }
               
           }
           button-=1;
           if(top<=button){
               for(int i=button;i>=top;i--){
                   k-=1;
                   if(k==0)
                   return a[i][left];
               }
           }
           left+=1;
         }
         return -1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends