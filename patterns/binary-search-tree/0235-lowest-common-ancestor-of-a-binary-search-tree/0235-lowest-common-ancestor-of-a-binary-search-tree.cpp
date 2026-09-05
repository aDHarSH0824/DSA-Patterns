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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return 0;
        int mini = min(p->val,q->val);
        int maxi = max(p->val,q->val);
        if(root->val==mini || root->val==maxi) return root;
        else if(root->val<mini) return lowestCommonAncestor(root->right,p,q);
        else if(root->val>maxi) return lowestCommonAncestor(root->left,p,q);
        else return root;
    }
};