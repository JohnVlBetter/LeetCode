/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/*
 * Definition for singly-linked list.*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 /**/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        ListNode *hA = headA, *hB = headB;
        while(hA != hB){
            hA = hA == nullptr ? headB : hA->next;
            hB = hB == nullptr ? headA : hB->next;
        }
        return hA;
    }
};
// @lc code=end

