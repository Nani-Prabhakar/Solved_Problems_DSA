//2848. Points That Intersect With Cars

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=nums[i][0];j<=nums[i][1];j++){
                s.insert(j);
            }
        }
        return s.size();
            
    }
    
};