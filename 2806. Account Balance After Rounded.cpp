2806. Account Balance After Rounded Purchase
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int left=purchaseAmount;
       int  right=purchaseAmount;
        int cnt=0,cnt2=0;
        while(left%10!=0){
            left--;
            cnt++;
        }
        while(right%10!=0){
            right++;
            cnt2++;
        }
        if(cnt<cnt2)return abs(100-left);
        else if(cnt==cnt2){
        if(left>right)return abs(100-left);
        return abs(100-right);
        }
        else return abs(100-right);
        
    }
};