//9. Palindrome Number

1st::approach
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x!=0&&x%10==0)return false;
        long long rev=0;
        long long dup=x;
        while(x){
            rev=rev*10+x%10;
            x/=10;
        }
        return (rev==dup);
    }
};



2nd::approach
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x!=0&&x%10==0)return false;
        int rev=0;
        while(x>rev){
            rev=rev*10+x%10;
            x/=10;
        }
        return (rev==x||x==rev/10);
    }
};