//1535. Find the Winner of an Array Game
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int ans= arr[0];
        int count = 0;
        for(int i = 1 ; i < n ; i++){
           if(arr[i]>ans){
               ans=arr[i];
               count=0;
           }
           count++;
           if(count==k)break;
        }
        return ans;
    }
};