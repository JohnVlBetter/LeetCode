/*
 * @lc app=leetcode.cn id=2807 lang=cpp
 *
 * [2807] 在链表中插入最大公约数
 */

// @lc code=start
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* node = head;
        while(node->next != nullptr){
            node->next = new ListNode(gcd(node->val, node->next->val), node->next);
            node = node->next->next;
        }
        return head;
    }
};
// @lc code=end

