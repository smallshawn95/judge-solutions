/*
 * @lc app=leetcode id=203 lang=c
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *cur = &dummy;
    while (cur->next != NULL) {
        if (cur->next->val == val) {
            cur->next = cur->next->next;
        } else {
            cur = cur->next;
        }
    }
    return dummy.next;
}
// @lc code=end

