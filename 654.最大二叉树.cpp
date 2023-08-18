/*
 * @lc app=leetcode.cn id=654 lang=cpp
 *
 * [654] 最大二叉树
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
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size());
    }

    TreeNode* build(vector<int>& nums,int left,int right){
        if(left>=right) return nullptr;
        int maxIdx = left;
        for(int i = left + 1;i<right;++i){
            if(nums[i] > nums[maxIdx]) maxIdx = i;
        }
        TreeNode* node = new TreeNode(nums[maxIdx]);
        node->left = build(nums,left,maxIdx); 
        node->right = build(nums,maxIdx + 1,right); 
        return node;
    }
};
// @lc code=end

