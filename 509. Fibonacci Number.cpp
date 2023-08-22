//509. Fibonacci Number
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        int prev=0;
        int prev2=1;
        for(int i=2;i<=n;i++){
            int res=prev2+prev;
            prev=prev2;
            prev2=res;
        }
        return prev2;
    }
};