#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 主要思路 计算左子树和右子树最大深度差值的绝对值
// 并且递归以左子树为跟和右子树为根节点进行判断
int check(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    else
        return fmax(check(root->left), check(root->right)) + 1;
}
bool isBalanced(struct TreeNode *root)
{
    if (root == NULL)
        return true;
    else
        return fabs(check(root->left) - check(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}
// end