//1759. Count Number of Homogenous Substrings
class Solution {
public:
    int countHomogenous(string s) {
        long long a = 0;
        int j =0;
        long long r= 0;
        for(int i =0 ; i<s.size() ; i++){
            for(j= i ; j<s.size() ; j++){
                if(s[j]!=s[i]){
                    break;
                }
                r++;
            }
            i =j-1;
            a = a + r*(r+1)/(2);
            r= 0;
        }
        return a%1000000007;
            
    }
};