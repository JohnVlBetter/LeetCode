/*
 * @lc app=leetcode.cn id=2095 lang=cpp
 *
 * [2095] 删除链表的中间节点
 */

// @lc code=start
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr) return nullptr;
        ListNode *r = head, *l = head;
        bool isFirst = true;
        while(r && r->next){
            if(isFirst) isFirst = false;
            else l = l->next;
            r = r->next->next;
        }
        l->next = l->next->next;
        return head;
    }
};
// @lc code=end

