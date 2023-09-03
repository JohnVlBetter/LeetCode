/*
 * @lc app=leetcode.cn id=382 lang=cpp
 *
 * [382] 链表随机节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* headPtr;
    ListNode* curPtr;
    Solution(ListNode* head) {
        headPtr = head;
        curPtr = head;
        srand((unsigned)time(NULL));
    }
    
    int getRandom() {
        int num = rand() % 5;
        for(int i = 0;i <num;++i){
            if(curPtr->next){
                curPtr = curPtr ->next;
            }else{
                curPtr = headPtr;
            }
        }
        return curPtr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
// @lc code=end

