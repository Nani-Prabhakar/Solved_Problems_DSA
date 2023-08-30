//2366. Minimum Replacements to Sort the Array

lass Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
       long long  nextmaxMin=nums[n-1];
       for(int i=n-2;i>=0;i--){
           long long parts=ceil(nums[i]/(double)nextmaxMin);
           res+=parts-1;
           nextmaxMin=nums[i]/parts;
       }
       return res;
    }
};