//796. Rotate String


class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)return true;
        if(s.size()!=goal.size())return false;
        // string check=s+s;
        // return check.find(goal) != string::npos;
        int n=s.size();

        queue<int>q1,q2;
        for(int i=0;i<n;i++){
            q1.push(s[i]);
            q2.push(goal[i]);
        }
       int i=0;
        while(i<n){
            q1.push(q1.front());
            q1.pop();
            if(q1==q2)return true;
            i++;
        }
        return false;
    }
};