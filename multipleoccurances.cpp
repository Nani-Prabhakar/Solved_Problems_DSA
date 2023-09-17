#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> findAll(int target,vector<int>arr,int i,vector<int>ans){
        if(i==arr.size()){
            return ans;
        }
        if(arr[i]==target){
            ans.push_back(i);
        }
        return findAll(target,arr,i+1,ans);
    }

};
int main(){
    solution s;
    vector<int>v={1,1,2,3,3,3,3,5,6,8,9,10};
    vector<int>ans;
    vector<int>a=s.findAll(3,v,0,ans);
    for(auto i:a)cout<<i<<" ";
    return 0;
}