//ArmstrongNumber
#include <math.h>
#include <stdio.h>
bool checkArmstrong(int n){
	int dup=n;
	int res=0;
	int n_d=(int)(log10(n)+1);
	while(n){
		res+=pow(n%10,n_d);
		n/=10;
	}
	return (dup==res);
}