2125. Number of Laser Beams in a Bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         int prev=0;
         int ans=0;
         int cnt=0;
         for(int i=0;i<bank.size();i++){
             
             for(int j=0;j<bank[0].size();j++){
                 if(bank[i][j]=='1')cnt++;
             }
            if(cnt){
                ans+=prev*cnt;
                prev=cnt;
                cnt=0;
            }
         }
         return ans;
    }
};