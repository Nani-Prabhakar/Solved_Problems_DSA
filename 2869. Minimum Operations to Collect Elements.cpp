




//2869. Minimum Operations to Collect Elements
class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int n = nums.size() ;  
        set<int> st ;
        int i = n-1; 
        for( ; i>=0; i--)
        {
            if( nums[i] <= k ) st.insert( nums[i] ) ;   
            if( st.size() == k ) break ;
        }
        return n-i;
    }
};





