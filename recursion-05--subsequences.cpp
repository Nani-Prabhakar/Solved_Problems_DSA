
//recursion-06-subsequences
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
//#include<vector>
void subSequence(int i,int n,int arr[],vector <int> &ans){
    if(i>=n){
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
        return;
    
    }
    ans.push_back(arr[i]);
    subSequence(i+1,n,arr,ans);
    ans.pop_back();
    subSequence(i+1,n,arr,ans);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans;
    subSequence(0,n,arr,ans);
    return 0;
}