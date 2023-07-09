/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmpHead = new ListNode(0,head), *tmpHead2 = tmpHead;
        while(tmpHead2->next){
            if(tmpHead2->next->val == val){
                tmpHead2->next = tmpHead2->next->next;
            }else{
                tmpHead2 =tmpHead2->next;
            }
        }
        return  tmpHead->next;
    }
};
// @lc code=end

