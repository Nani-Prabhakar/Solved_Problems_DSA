//118. Pascal's Triangle


class Solution {
    vector<int>generateRow(int row){
        vector<int>ans;
        long long el=1;
        ans.push_back(el);
        for(int col=1;col<row;col++){
            el=el*(row-col);
            el=el/col;
            ans.push_back(el);
        }
        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};