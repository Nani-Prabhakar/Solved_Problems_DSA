#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void ss(int arr[],int maxi,int r,int c){
        if(r==0)return;
        if(c<r){
            if(arr[maxi]<arr[c]){
            ss(arr,c,r,c+1);}
            else ss(arr,maxi,r,c+1);
        }
        else{
            swap(arr[maxi],arr[r-1]);
            ss(arr,0,r-1,0);
        }
    }
};
int main(){
    
    solution s;
    int arr[]={9,8,5,3,4,2,1,7,0,6};
    s.ss(arr,0,10,0);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}