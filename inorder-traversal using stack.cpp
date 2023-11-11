//inorder-traversal using stack
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    //if(!root)return ans;
    stack<TreeNode*>st;
    //st.push(root);
    TreeNode *n=root;
    while(true){
        if(n){
            st.push(n);
            n=n->left;
        }
        else{
        if(st.empty())break;
        n=st.top();
        st.pop();
        ans.push_back(n->data);
        n=n->right;
       }
    }
    return ans;
}