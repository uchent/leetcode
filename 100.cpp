class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p != NULL && q != NULL && (p->val == q->val)){
            bool l = isSameTree(p->left, q->left);
            bool r = isSameTree(p->right, q->right);
            return (l&&r)?true:false;
        }
        else if(p == NULL && q == NULL)
            return true;
        else
            return false;
    }
};