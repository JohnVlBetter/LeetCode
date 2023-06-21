/*
 * @lc app=leetcode.cn id=2130 lang=cpp
 *
 * [2130] 链表最大孪生和
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
    int pairSum(ListNode* head) {
        ListNode* slow = head, * fast = head, * pre = nullptr;
        while (fast && fast->next) {
            fast = fast->next->next;
            ListNode* tmp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = tmp;
        }
        int max = 0;
        while (pre && slow) {
            if (pre->val + slow->val > max) max = pre->val + slow->val;
            pre = pre->next;
            slow = slow->next;
        }
        return max;
    }
};
// @lc code=end

