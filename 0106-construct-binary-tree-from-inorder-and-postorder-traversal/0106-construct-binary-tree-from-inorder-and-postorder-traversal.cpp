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
    TreeNode* postOrder(vector<int>& postorder,unordered_map<int,int>& mpp,int& index,int low,int high){
        if(low>high) return NULL;
        TreeNode* node = new TreeNode(postorder[index]);
        int id = mpp[node->val];
        index++;
        node->right = postOrder(postorder,mpp,index,id+1,high);
        node->left = postOrder(postorder,mpp,index,low,id-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        reverse(postorder.begin(),postorder.end());
        unordered_map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        int index = 0;
        int low = 0,high = inorder.size()-1;
        return postOrder(postorder,mpp,index,low,high);
    }
};