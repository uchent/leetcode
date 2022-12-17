class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
    TreeNode *sortedArrayToBST(vector<int> &nums, int l, int r) {
        if(l > r) return nullptr;
        int m = l + (r-l)/2;
        TreeNode *t = new TreeNode(nums[m]);
        t->left = sortedArrayToBST(nums, l, m-1);
        t->right = sortedArrayToBST(nums, m+1, r);
        return t;
    }
};