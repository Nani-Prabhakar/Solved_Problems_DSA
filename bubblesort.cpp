#include<bits/stdc++.h>
using namespace std;
void bs(vector<int>&v,int n,int m){
    if(n==0){
        return;
    }
    if(m<n){
        if(v[m]>v[m+1])swap(v[m],v[m+1]);
        bs(v,n,m+1);
    }
    else{
        bs(v,n-1,0);
    }
}
int main(){
    vector<int>v={9,8,7,6,5,4,3,2,1,0};
    int n=v.size();
    bs(v,n-1,0);
    for(int i:v)cout<<i<<" ";
    return 0;
}