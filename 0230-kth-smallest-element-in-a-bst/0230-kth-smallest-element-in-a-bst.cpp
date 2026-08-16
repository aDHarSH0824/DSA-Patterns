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
public:
    void find(TreeNode* root,int k,int& var,TreeNode*& ans){
        if(root==NULL) return;
        find(root->left,k,var,ans);
        var++;
        if(var==k){
            ans = root;
            return;
        }
        find(root->right,k,var,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int var = 0;
        TreeNode* ans = NULL;
        find(root,k,var,ans);
        return ans->val;
    }
};