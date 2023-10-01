//557. Reverse Words in a String III
class Solution {
    void reverse(string &s,int i,int j){
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.size();
        while(s[i]==' ')i++;
        for(int j=i;j<n;j++){
            if(s[j]==' '){
                reverse(s,i,j-1);
                i=j+1;
            }
            if(j==n-1){
                reverse(s,i,n-1);
            }
        }
        return s;
    }
};