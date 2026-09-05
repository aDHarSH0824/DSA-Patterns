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
    void Sum(TreeNode*& root,int& TargetSum,int sum,bool& res){
        if(root==NULL) return;
        sum+=(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==TargetSum) res=true;
            return;
        }
        Sum(root->left,TargetSum,sum,res);
        Sum(root->right,TargetSum,sum,res);
        return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool res = false;
        int sum = 0;
        Sum(root,targetSum,sum,res);
        return res;
    }
};