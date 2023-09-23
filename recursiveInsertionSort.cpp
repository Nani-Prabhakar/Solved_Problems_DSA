#include<bits/stdc++.h>
using namespace std;
void is(vector<int>&v,int i,int j){
    if(i==v.size()){
        return;
    }
    if(j>0 and v[j-1]>v[j]){
        swap(v[j-1],v[j]);
        is(v,i,j-1);
    }
    else{
        is(v,i+1,i+1);
    }
}
int main(){
    vector<int>v={9,8,7,6,5,4,3,2,1,0};
    int n=v.size();
    is(v,0,0);
    for(int i:v)cout<<i<<" ";
    return 0;
}