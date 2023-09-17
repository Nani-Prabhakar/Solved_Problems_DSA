#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int  rev(int n,int d){
    
    if(n%10==n){
        
        return n;
    }
    int rem=n%10;
    return rem*pow(10,d-1)+rev(n/10,d-1);
}
int main(){
    int n;
    cout<<"enter the number you want to reverse"<<endl;
    cin>>n;
    int digits=(int)(log10(n))+1;
    cout<<rev(n,digits);
    return 0;
}