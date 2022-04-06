#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int mytest111(struct TreeNode *root);
int minDepth(struct TreeNode *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int min = __INT_MAX__;

    if (root->left != NULL)
        min = fmin(minDepth(root->left), min);

    if (root->right != NULL)
        min = fmin(minDepth(root->right), min);

    return min + 1;
}