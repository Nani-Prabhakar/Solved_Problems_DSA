124. Binary Tree Maximum Path Sum

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int maxPath(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int leftsum=max(0,maxPath(root->left,maxi));
        int rightsum=max(0,maxPath(root->right,maxi));
        int val=root->val;
        maxi=max(maxi,val+leftsum+rightsum);
        return val+max(leftsum,rightsum);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
};
