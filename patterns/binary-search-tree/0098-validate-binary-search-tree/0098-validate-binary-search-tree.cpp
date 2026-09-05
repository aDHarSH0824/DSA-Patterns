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
    void Check(TreeNode* root,TreeNode*& prev,bool& ans){
        if(root==NULL) return;
        Check(root->left,prev,ans);
        if(prev==NULL) prev=root;
        else{
            if(root->val<=prev->val) ans=false;
            prev=root;
        }
        Check(root->right,prev,ans);

    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        bool ans = true;
        Check(root,prev,ans);
        return ans;
    }
};