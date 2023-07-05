/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        buildMaxHeap(nums, n);
        for(int i = nums.size() - 1; i >= nums.size() - k + 1; --i){
            swap(nums[0],nums[i]);
            maxHeapify(nums, 0, --n);
        }
        return nums[0];
    }

    void buildMaxHeap(vector<int>& a, int heapSize) {
        for (int i = heapSize / 2; i >= 0; --i) {
            maxHeapify(a, i, heapSize);
        } 
    }

    void maxHeapify(vector<int>& nums, int largest, int heapSize) {
        int l = largest * 2 + 1, r = l + 1, curLargest = largest;
        if (l < heapSize && nums[l] > nums[curLargest]) curLargest = l;
        if (r < heapSize && nums[r] > nums[curLargest]) curLargest = r;
        if (curLargest != largest) {
            std::swap(nums[largest], nums[curLargest]);
            maxHeapify(nums, curLargest, heapSize);
        }
    }
};
// @lc code=end

