//2900. Longest Unequal Adjacent Groups Subsequence I
class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int i=0,j=1;
        ans.push_back(words[i]);
        for(int k=1;k<n;k++){
            if(groups[i]!=groups[j]){
                //ans.push_back(words[i]);
                ans.push_back(words[j]);
                i=j;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};