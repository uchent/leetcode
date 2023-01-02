class Solution {
 public:
  int minDepth(TreeNode *root) { return minDepth(root, 0); }
  int minDepth(TreeNode *root, int depth) {
    if (!root) return depth;
    if (root->left && root->right)
      return min(minDepth(root->left, depth + 1),
                 minDepth(root->right, depth + 1));
    else if (root->left)
      return minDepth(root->left, depth + 1);
    else if (root->right)
      return minDepth(root->right, depth + 1);
    else
      return depth + 1;
  }
};