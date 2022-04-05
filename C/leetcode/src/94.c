#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int *mytest94(struct TreeNode *root, int *returnSize);

void INOtree(struct TreeNode *tree, int *ans, int *returnSize)
{
    if (tree)
    {
        INOtree(tree->left, ans, returnSize);
        ans[(*returnSize)++] = tree->val;
        INOtree(tree->right, ans, returnSize);
    }
    return;
}
int *inorderTraversal(struct TreeNode *root, int *returnSize)
{
    return mytest94(root, returnSize);
}
int *mytest94(struct TreeNode *root, int *returnSize)
{
    int *ans;
    ans = (int *)malloc(100 * sizeof(int));
    memset(ans, 0, 100);
    *returnSize = 0;

    INOtree(root, ans, returnSize);
    return ans;
}