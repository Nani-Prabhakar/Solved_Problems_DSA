//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
  stack<int>st;
  int val=arr[0];
  for(int i=0;i<n;i++){
     val=min(val,arr[i]);
     st.push(val);
  }
  
  return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends