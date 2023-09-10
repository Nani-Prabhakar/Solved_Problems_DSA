//2849. Determine if a Cell Is Reachable at a Given Time

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xdiff=abs(sx-fx);
        int ydiff=abs(sy-fy);
        if(xdiff==0 and ydiff==0 and t==1)return  false;
        return (abs(xdiff-ydiff)+min(xdiff,ydiff)<=t);
    }
};