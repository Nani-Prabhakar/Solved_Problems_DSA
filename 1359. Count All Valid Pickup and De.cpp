//1359. Count All Valid Pickup and Delivery Options


#define mod 1000000007;
class Solution {
public:
long long fact(int n){
    if(n==1||n==0)
        return 1;
    return (n*(2*n-1)*fact(n-1))%mod;
}
int countOrders(int n) {
    return fact(n);
}
};