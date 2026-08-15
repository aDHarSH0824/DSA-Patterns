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
    TreeNode* makeTree(vector<int>& nums,int low,int high){
        if(low>high) return NULL;
        int id = low+((high-low)/2);
        TreeNode* node = new TreeNode(nums[id]);
        node->left = makeTree(nums,low,id-1);
        node->right = makeTree(nums,id+1,high);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low = 0,high = nums.size()-1;
        return makeTree(nums,low,high);
    }
};