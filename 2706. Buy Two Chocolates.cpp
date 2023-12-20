//2706. Buy Two Chocolates
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int buy=money-(prices[0]+prices[1]);
        return buy>=0?buy:money;
    }
};