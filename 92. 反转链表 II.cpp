/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
 */

// @lc code=start
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        stack<int> s;
        ListNode* tmp = head;
        int idx = 1;
        while(tmp!=nullptr){
            if(idx >= left && idx <= right){
                s.push(tmp->val);
            }
            tmp = tmp ->next;
            ++idx;
            if(idx > right) break;
        }
        tmp = head;
        idx = 1;
        while(tmp!=nullptr){
            if(idx >= left && idx <= right){
                tmp->val = s.top();
                s.pop();
            }
            tmp = tmp ->next;
            ++idx;
            if(idx > right) break;
        }
        return head;
    }
};
// @lc code=end

