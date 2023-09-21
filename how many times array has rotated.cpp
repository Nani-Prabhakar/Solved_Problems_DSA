//how many times array has rotated
#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.
        int index=-1;
        int low=0;
        int high=arr.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if (arr[low] <= arr[mid]) {
                if (arr[low] < ans){
                index = low;
                ans = arr[low];
                }
                low=mid+1;
            }
            else{
                if (arr[mid] < ans) {
                    index = mid;
                    ans=arr[mid];
                }
                high=mid-1;
            }
        }
        return index;
}