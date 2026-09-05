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
    void Sum(TreeNode*& root,int& Target,vector<vector<int>>& arr,vector<int> ans,int sum){
        if(root==NULL) return;
        sum+=(root->val);
        ans.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==Target) arr.push_back(ans);
            return;
        }
        Sum(root->left,Target,arr,ans,sum);
        Sum(root->right,Target,arr,ans,sum);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> arr;
        vector<int> ans;
        int sum = 0;
        Sum(root,targetSum,arr,ans,sum);
        return arr;
    }
};