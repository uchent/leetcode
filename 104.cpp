class Solution {
public:
    int maxDepth(TreeNode* root) {
        return depth(0, root); 
    }
    int depth(int level, TreeNode* node){
        if(!node)
            return level;
        return max(depth(level+1, node->left), depth(level+1, node->right));
    }
};