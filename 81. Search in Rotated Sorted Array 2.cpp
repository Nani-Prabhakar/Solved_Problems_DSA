//81. Search in Rotated Sorted Array II


class Solution {
    bool helper(vector<int>arr,int low,int high,int key){
        if(low>high)return 0;
        int mid=(low+high)/2;
        if(arr[mid]==key)return 1;
        if(arr[low]==arr[mid] and arr[mid]==arr[high])return helper(arr,low+1,high-1,key);
        if(arr[low]<=arr[mid]){
            if(arr[low]<=key and key<=arr[mid])return helper(arr,low,mid-1,key);
            else return helper(arr,mid+1,high,key);
        }
        else{
            if(arr[mid]<=key and key<=arr[high])return helper(arr,mid+1,high,key);
            else return helper(arr,low,mid-1,key);
        }
    }
public:
    bool search(vector<int>& nums, int key) {
       int low=0;
       int high=nums.size()-1;
       return helper(nums,low,high,key);
    }
};