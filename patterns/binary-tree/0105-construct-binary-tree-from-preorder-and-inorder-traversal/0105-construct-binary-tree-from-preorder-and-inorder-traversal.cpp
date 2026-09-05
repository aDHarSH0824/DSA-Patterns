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
    TreeNode* preOrder(vector<int>& preorder,unordered_map<int,int>& mpp,int& index,int low,int high){
        if(low>high) return NULL;
        TreeNode* node = new TreeNode(preorder[index]);
        int id = mpp[node->val];
        index++;
        node->left = preOrder(preorder,mpp,index,low,id-1);
        node->right = preOrder(preorder,mpp,index,id+1,high);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        unordered_map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]] = i;
        }
        int low = 0,high = inorder.size()-1;
        return preOrder(preorder,mpp,index,low,high);
    }
};