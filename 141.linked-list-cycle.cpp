/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        do {
            if (!fast || !fast->next) {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        } while (fast && fast != slow);
        return fast && fast == slow;
    }
};
// @lc code=end

