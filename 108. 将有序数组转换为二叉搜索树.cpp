class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return b(nums, 0, nums.size());
    }

    TreeNode* b(vector<int>& nums,int start, int end){
        if(start >= end) return nullptr;
        int mid = (start + end) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = b(nums, start, mid);
        node->right = b(nums, mid+1, end);
        return node;
    }
};
//108. 将有序数组转换为二叉搜索树