#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

bool mytest101(struct TreeNode *root);
bool isSymmetric(struct TreeNode *root)
{
    return mytest101(root);
}
bool check(struct TreeNode *left, struct TreeNode *right)
{
    if (left == NULL && right == NULL)
        return true;
    else if (left == NULL || right == NULL)
        return false;

    return left->val == right->val && check(left->left, right->right) && check(left->right, right->left);
}
bool mytest101(struct TreeNode *root)
{
    return check(root, root);
}
