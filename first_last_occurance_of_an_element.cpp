class Solution {
public:
    int lower_Bound(vector<int>& arr, int n, int x){
        int low = 0, high = n - 1, lb = n;
        while (low <= high){
            int mid = (low + high) / 2;
            if (arr[mid] >= x){
                lb = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return lb;
    }
    
    int upper_Bound(vector<int>& arr, int n, int x){
        int low = 0, high = n - 1, ub = n;
        while (low <= high){
            int mid = (low + high) / 2;
            if (arr[mid] > x){
                ub = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ub;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_Bound(nums, nums.size(), target);
        if (lb == nums.size() || nums[lb] != target){
            return {-1, -1};
        }
        else{
            return {lb, upper_Bound(nums, nums.size(), target) - 1};
        }
    }
};