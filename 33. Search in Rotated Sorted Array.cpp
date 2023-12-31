//33. Search in Rotated Sorted Array

class Solution {
    int helper(vector<int>arr,int low,int high,int key){
        if(low>high)return -1;
        int mid=(low+high)/2;
        if(arr[mid]==key)return mid;
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
    int search(vector<int>& nums, int key) {
       int low=0;
       int high=nums.size()-1;
       return helper(nums,low,high,key);
    }
};