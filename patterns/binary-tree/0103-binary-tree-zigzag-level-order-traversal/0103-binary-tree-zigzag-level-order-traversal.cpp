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
    void zigZag(TreeNode* root,vector<vector<int>>& ans){
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        int lr = 1;
        while(!q.empty()){
            int levelSize = q.size();
            vector<int> arr(levelSize);
            int first = 0;
            int last = levelSize-1;
            while(levelSize--){
                TreeNode* node = q.front();
                if(lr){
                    arr[first]=node->val;
                    first++;
                }else{
                    arr[last]=node->val;
                    last--;
                }
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            lr=1-lr;
            ans.push_back(arr);
        }
        return;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigZag(root,ans);
        return ans;
    }
};