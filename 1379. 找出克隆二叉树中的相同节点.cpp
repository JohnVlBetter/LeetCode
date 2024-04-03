/*
 * @lc app=leetcode.cn id=1379 lang=cpp
 *
 * [1379] 找出克隆二叉树中的相同节点
 */

// @lc code=start
class Solution {
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
        if (original == nullptr) return nullptr;
        if (original == target) return cloned;
        TreeNode *left = getTargetCopy(original->left, cloned->left, target);
        if (left != nullptr) return left;
        return getTargetCopy(original->right, cloned->right, target);
    }
};
// @lc code=end