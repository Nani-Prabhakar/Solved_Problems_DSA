#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool l_serach(vector<int>v,int t,int i){
        return i==v.size()?false:v[i]==t or l_serach(v,t,i+1);
    }
};
int main(){
    solution s;
    vector<int>v={1,2,3,4,5,6,7,8,9,0};
    cout<<s.l_serach(v,1,0);
}