//74. Search a 2D Matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();//number of rows
        int m=matrix[0].size();//number of coloumns
        int low=0,high=n*m-1;
        int row,col,mid;
        while(low<=high){
            mid=(low+high)/2;
            row=mid/m;
            col=mid%m;
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]>target)high=mid-1;
            else low=mid+1;
        }
    return false;
    }
};