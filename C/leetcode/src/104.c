#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int mytest104(struct TreeNode *root);
int ans1(struct TreeNode *root);

int maxDepth(struct TreeNode *root)
{
    return mytest104(root);
}
// 官方给的简洁版本
int ans1(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    return fmax(ans1(root->left), ans1(root->right)) + 1;
}
// end

// 我自己想的
int mytest104(struct TreeNode *root)
{
    int n = 0;
    return check(root, n);
}
int check(struct TreeNode *root, int n)
{
    if (root == NULL)
        return n;
    n++;

    return fmax(check(root->left, n), check(root->right, n));
}
// end