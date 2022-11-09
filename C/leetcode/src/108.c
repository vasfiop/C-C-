#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode *mytest108(int *nums, int numsSize);
struct TreeNode *helper(int *nums, int left, int right);

struct TreeNode *sortedArrayToBST(int *nums, int numsSize)
{
    return mytest108(nums, numsSize);
}

struct TreeNode *mytest108(int *nums, int numsSize)
{
    return helper(nums, 0, numsSize - 1);
}
struct TreeNode *helper(int *nums, int left, int right)
{
    if (left > right)
        return NULL;

    int mid = (left + right) / 2;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = helper(nums, left, mid - 1);
    root->right = helper(nums, mid + 1, right);

    return root;
}