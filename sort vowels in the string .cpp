class Solution {
public:
    string sortVowels(string s) {
        string vowel="AEIOUaeiou";
        unordered_map<char,int>mp;
        for(int i=0;i<vowel.size();i++){
            mp[vowel[i]]++;
        }
        string s2="";
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                s2.push_back(s[i]);
                s[i]='#';
            }
            
            
            
        }
        sort(s2.begin(),s2.end());
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                s[i]=s2[k++];
            }
        }
        return s;
    }
};