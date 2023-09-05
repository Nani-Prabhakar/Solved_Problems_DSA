//678. Valid Parenthesis String


class Solution {
public:
    bool checkValidString(string s) {
        int open=0,close=0;
        for(auto x:s){
            if(x==')')open--;
            else open++;
            if(open<0)return false;
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='(')close--;
            else close++;
            if(close<0)return false ;
        }
        return true;
    }
};