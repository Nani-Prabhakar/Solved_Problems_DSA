//2899. Last Visited Integers
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>v;
        vector<int>ans;
        int prev=0;
        for(int i=0;i<words.size();i++){
            if(words[i]!="prev"){
                prev=0;
                v.push_back(stoi(words[i]));
            }
            else{
                prev++;
                if(v.size()>=prev){
                    ans.push_back(v[v.size()-prev]);
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};