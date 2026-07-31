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
    TreeNode* search(TreeNode* root, int value){
        if(root==NULL) return NULL;
        if(root->val==value) return root;
        else if(root->val>value) return search(root->left,value);
        return search(root->right,value);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* Node = NULL;
        Node = search(root,val);
        return Node;
    }
};