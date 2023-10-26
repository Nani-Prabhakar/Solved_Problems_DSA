//236. LCA of a Binary Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* dfs(TreeNode* root, TreeNode* p,TreeNode* q){
        if(root==NULL or root==p or root==q)return root;
        TreeNode* l=dfs(root->left,p,q);
        TreeNode* r=dfs(root->right,p,q);
        if(l==NULL)return r;
        else if(r==NULL)return l;
        else return root;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root,p,q);
    }
};