//1342. Number of Steps to Reduce a Number to Zero


class Solution {
    int helper(int n,int s){
        if(n==0)return s;
        if(n%2==0)return helper(n/2,s+1);
        return helper(n-1,s+1);
    }
public:
    int numberOfSteps(int n) {
        
       return helper(n,0);
    }
};