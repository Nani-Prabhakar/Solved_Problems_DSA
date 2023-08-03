//recursion-04--check if the string is polyndrome or not?
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPolyndrome(string s,int i,int n){
    //int n=s.size();
    if(i>=n/2)return true;
    if(s[i]!=s[n-i-1])return false;
    return isPolyndrome(s,i+1,n);
}



int main()
{
   string s;
   cin>>s;
   int n=s.size();
   cout<<isPolyndrome(s,0,n);
   return 0;
}