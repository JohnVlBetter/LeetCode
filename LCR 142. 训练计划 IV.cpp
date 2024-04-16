/*
 * @lc app=leetcode.cn id=LCR 142 lang=cpp
 *
 * [LCR 142] 训练计划 IV
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
    ListNode* trainningPlan(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        else if (l2 == nullptr) return l1;
        else if (l1->val >= l2->val) {
            l2->next = trainningPlan(l2->next, l1);
            return l2;
        } else {
            l1->next = trainningPlan(l2, l1->next);
            return l1;
        }
    }
};
// @lc code=end

