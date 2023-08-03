//recursion-03::Fbonocchi Number of N
#include <iostream>

using namespace std;
int fibonocchi(int n){
    if(n<=1)return n;
    return fibonocchi(n-1)+fibonocchi(n-2);
}

int main()
{
   int n;
   cin>>n;
   cout<<fibonocchi(n);

    return 0;
}