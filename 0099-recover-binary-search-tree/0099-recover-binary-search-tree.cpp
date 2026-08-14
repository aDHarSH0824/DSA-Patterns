class Solution {
public:
    void solve(TreeNode* root, TreeNode*& prev, TreeNode*& g1f, TreeNode*& g1s, TreeNode*& g2f, TreeNode*& g2s, int& g) {
        if (root == NULL) return;

        solve(root->left, prev, g1f, g1s, g2f, g2s, g);

        if (prev != NULL && prev->val >= root->val) {
            if (g == 0) {
                g1f = prev;
                g1s = root;
                g++;
            } else {
                g2f = prev;
                g2s = root;
                g++;
            }
        }
        prev = root; 
        solve(root->right, prev, g1f, g1s, g2f, g2s, g);
    }
    void recoverTree(TreeNode* root) {
        TreeNode* prev = NULL;
        TreeNode* g1first = NULL;
        TreeNode* g1second = NULL;
        TreeNode* g2first = NULL;
        TreeNode* g2second = NULL;
        int g = 0;

        solve(root, prev, g1first, g1second, g2first, g2second, g);

        if (g == 1) {
            if (g1first && g1second) swap(g1first->val, g1second->val);
        } else {
            if (g1first && g2second) swap(g1first->val, g2second->val);
        }
    }
};
