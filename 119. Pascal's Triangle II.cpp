//119. Pascal's Triangle II


class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>ans;
        long long el=1;
        ans.push_back(el);
        for(int col=1;col<=rowIndex;col++){
            el=el*(rowIndex-col+1);
            el=el/col;
            ans.push_back(el);
        }
        return ans;
    }
};