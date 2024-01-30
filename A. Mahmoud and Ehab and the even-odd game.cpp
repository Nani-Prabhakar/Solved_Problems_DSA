#include<bits/stdc++.h>
using namespace std;
int main(){
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        for(int j=0;j<n;j++){
                cin>>brr[j];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
                cout<<brr[i]<<" ";
        }
        cout<<endl;
       }
    
}