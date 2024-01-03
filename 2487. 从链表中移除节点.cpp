/*
 * @lc app=leetcode.cn id=2487 lang=cpp
 *
 * [2487] 从链表中移除节点
 */

// @lc code=start
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0, nullptr);
        vector<ListNode*> stack;
        while(head){
            while(stack.size() && stack.back()->val < head->val){
                stack.pop_back();
            }
            if(stack.size()){
                stack.back()->next = head;
            }else{
                dummy->next = head;
            }
            stack.push_back(head);
            head = head->next;
        }
        return dummy->next;
    }
};
// @lc code=end

