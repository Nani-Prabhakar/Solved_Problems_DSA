//2873 and \2874. Maximum Value of an Ordered Triplet II 
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n=nums.size();
        long long sum=0;
        vector<int>prefixMax=nums;
        vector<int>sufixMax=nums;
        for(int i=1;i<n;i++){
            prefixMax[i]=max(prefixMax[i-1],prefixMax[i]);
        }
        for(int i=n-2;i>=0;i--){
            sufixMax[i]=max(sufixMax[i+1],sufixMax[i]);
        }
        for(int j=1;j<n-1;j++){
            long long vali=prefixMax[j-1];
            long long valj=nums[j];
            long long valk=sufixMax[j+1];
            long long cur=(vali-valj)*valk;
            sum=max(sum,cur);
        }
        return sum;
    }
};