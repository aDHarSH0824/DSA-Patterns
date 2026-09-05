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
    void Sum(TreeNode* root,vector<string>& arr,string ans){
        if(root==NULL) return;
        ans+=('0'+root->val);
        if(root->left==NULL && root->right==NULL){
            arr.push_back(ans);
            return;
        }
        Sum(root->left,arr,ans);
        Sum(root->right,arr,ans);
        return;
    }
    int sumNumbers(TreeNode* root) {
        vector<string> arr;
        string ans = "";
        Sum(root,arr,ans);
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            int num = stoi(arr[i]);
            sum+=num;
        }
        return sum;
    }
};