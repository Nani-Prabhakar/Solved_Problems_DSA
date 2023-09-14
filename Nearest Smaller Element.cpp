//Nearest Smaller Element

vector<int> Solution::prevSmaller(vector<int> &A) {
    
    vector<int>ans;
    stack<int>st;
    for(int i=0;i<A.size();i++){
        while(!st.empty()&&st.top()>=A[i])st.pop();
        if(!st.empty()){
            ans.push_back(st.top());
        }
        else ans.push_back(-1);
        st.push(A[i]);
    }
    
    return ans;
}