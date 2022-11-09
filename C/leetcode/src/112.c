#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool mytest112(struct TreeNode *root, int targetSum);
bool hasPathSum(struct TreeNode *root, int targetSum)
{
    return mytest112(root, targetSum);
}

bool mytest112(struct TreeNode *root, int targetSum)
{
    if (root == NULL)
        return false;

    if (root->left == NULL && root->right == NULL)
        return targetSum == root->val;

    return mytest112(root->left, targetSum - root->val) || mytest112(root->right, targetSum - root->val);
}
