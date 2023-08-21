//sum of Divisors 
int sumOfDivisors(int n){
	int res=0;
	for(int i=1;i<=sqrt(n);i++){
          if (n % i == 0) {
            res += i;
			if(n/i!=i){
				res+=n/i;
			}
          }
        }
	return res;
}
int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=sumOfDivisors(i);
		
	}
	return sum;	
}