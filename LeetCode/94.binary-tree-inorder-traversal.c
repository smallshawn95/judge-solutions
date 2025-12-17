/*
 * @lc app=leetcode id=94 lang=c
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode *root, int *arr, int *returnSize) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, arr, returnSize);
    *(arr + (*returnSize)++) = root->val;
    inorder(root->right, arr, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = malloc(100 * sizeof(int));
    *returnSize = 0;
    inorder(root, arr, returnSize);
    return arr;
}
// @lc code=end

