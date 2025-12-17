/*
 * @lc app=leetcode id=86 lang=c
 *
 * [86] Partition List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode small_head, big_head;
    small_head.next = NULL;
    big_head.next = NULL;
    struct ListNode *small = &small_head, *big = &big_head;
    while (head != NULL) {
        if (head->val < x) {
            small->next = head;
            small = small->next;
        } else {
            big->next = head;
            big = big->next;
        }
        head = head->next;
    }
    small->next = big_head.next;
    big->next = NULL;
    return small_head.next;
}
// @lc code=end

