//recursion-1::sum of N natural numbers
#include <iostream>

using namespace std;
int fn(int n){
    if(n==0)return 0;
    return fn(n-1)+n;
}

int main()
{
   int n;
   cin>>n;
   int sum=fn(n);
   cout<<sum;

    return 0;
}