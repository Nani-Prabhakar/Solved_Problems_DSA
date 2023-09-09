//1475. Final Prices With a Special Discount in a Shop


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    stack<int> s;
    s.push(0);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = prices[i];
        
        
        while(s.top() > curr){
            s.pop();
        }
        
        
        ans[i] = curr - s.top();
        s.push(curr);
    }
    return ans;
    }
};