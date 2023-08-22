// polyndrome alphanumeric String

//recursion approach::
class Solution {
public:
    bool rec(vector <char> &s, int st) {
        if (st >= s.size()/2) return true;        
        if (s[st] == s[s.size() - 1 - st]) 
            return rec(s, st + 1);
        else 
            return false;
    }
    
public:
    bool isPalindrome(string s) {
        vector <char> str;
        for (auto &i : s) {
            i = tolower(i); 
            if (ispunct(i) or i == ' ') 
                continue;
            str.push_back(i);
            cout << i;
        }
        return rec(str, 0);
    }
};


//two pointer approach::

lass Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(!isalnum(s[l]))
                l++;
            else if(!isalnum(s[r]))
                r--;
            else if(tolower(s[l])!=tolower(s[r]))
                return false;
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};