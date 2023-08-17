/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
 */

// @lc code=start
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
class BSTIterator {
public:
    stack<TreeNode*> stack;
    TreeNode* curNode;
    BSTIterator(TreeNode* root):curNode(root) {
    }

    int next() {
        while(curNode != nullptr){
            stack.push(curNode);
            curNode = curNode->left;
        }
        curNode = stack.top();
        stack.pop();
        int result = curNode->val;
        curNode = curNode->right;
        return result;
    }

    bool hasNext() {
        return curNode != nullptr || !stack.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

