//2864. Maximum Odd Binary Number
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int ones=0;
        int zeros=0;
        for(char c:s){
            if(c=='1')ones++;
            else zeros++;
        }
        for(int i=1;i<ones;i++){
            ans.push_back('1');
        }
        for(int i=0;i<zeros;i++){
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }
};