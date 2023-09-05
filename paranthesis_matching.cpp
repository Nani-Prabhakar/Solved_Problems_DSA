#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool balance(string s){
        stack<char>st;
        for(auto x:s){
            if(x=='(')st.push(x);
            if(x==')')st.pop();
        }
        return (st.empty())?1:0;
    }
};

int main(){
    int n;
    cout<<"enter number of test cases:";
    cin>>n;
    
    while(n--){
        string str;
        cout<<"enter string:"<<endl;
        cin>>str;
        solution obj;
        if(obj.balance(str))cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
    return 0;
}