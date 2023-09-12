//Perfect Numbers

class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long sum=0;
        for(long long i=1;i<=sqrt(N);i++){
            if(N%i==0){
                sum+=i;
                if(N/i!=i)sum+=N/i;
            }
        }
        return (sum-N)==N;
    }
};