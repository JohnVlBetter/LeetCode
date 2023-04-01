/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
/**
  Definition for a binary tree node.*/
#include <stack>
using namespace std;
/*struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (q == nullptr && p == nullptr) return true;
    stack<TreeNode*> s1, s2;
    s1.push(p);
    s2.push(q);
    while (s1.size() && s2.size()) {
        TreeNode* cur1 = s1.top();
        TreeNode* cur2 = s2.top();
        if (s1.size() != s2.size()) return false;
        if (cur1 == nullptr || cur2 == nullptr) return false;
        if (cur1->val != cur2->val) return false;

        s1.pop();
        s2.pop();

        if ((cur1->left != nullptr && cur2->left == nullptr) || (cur1->left == nullptr && cur2->left != nullptr)) {
            return false;
        }
        if ((cur1->right != nullptr && cur2->right == nullptr) || (cur1->right == nullptr && cur2->right != nullptr)) {
            return false;
        }

        if (cur1->left != nullptr && cur2->left != nullptr) {
            s1.push(cur1->left);
            cur1->left = nullptr;
            s2.push(cur2->left);
            cur2->left = nullptr;
        }
        

        if (cur1->right != nullptr && cur2->right != nullptr) {
            s1.push(cur1->right);
            cur1->right = nullptr;
            s2.push(cur2->right);
            cur2->right = nullptr;
        }
    }
    return true;
}
};
// @lc code=end

