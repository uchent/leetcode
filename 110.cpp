class Solution {
public:
    bool isBalanced(TreeNode *root) {
        return height(root) != -1;
    }
    int height(TreeNode *root) {
        if (!root) return 0;
        int l = height(root->left);
        int r = height(root->right);
        int d = abs(l - r);
        if (l == -1 || r == -1 || d > 1) 
            return -1;
        else 
            return 1 + max(l, r);
    }
};