//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = sizeOfStack / 2 ;            
        stack<int> ans ;
        
        int i = 0 ;
        while( i < mid){
            int temp = s.top() ;
            s.pop() ;
            ans.push(temp) ;
            i++ ;   
        }
        
        s.pop(); 
        
        while( !ans.empty()) {
            int temp = ans.top() ;
            ans.pop() ;
            s.push(temp) ;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends