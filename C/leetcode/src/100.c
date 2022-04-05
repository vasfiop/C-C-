#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

bool mytest100(struct TreeNode *p, struct TreeNode *q);

bool isSameTree(struct TreeNode *p, struct TreeNode *q)
{
    return mytest100(p, q);
}
// 官方深搜
bool Ans1(struct TreeNode *p, struct TreeNode *q)
{
    if (p == NULL && q == NULL)
        return true;
    else if (p == NULL || q == NULL)
        return false;
    else if (p->val != q->val)
        return false;
    else
        return Ans1(p->left, q->left) && Ans1(p->right, q->right);
}
bool mytest100(struct TreeNode *p, struct TreeNode *q)
{
    bool ans;
    ans = true;

    Tree100(p, q, &ans);

    return ans;
}
void Tree100(struct TreeNode *p, struct TreeNode *q, bool *ans)
{
    if (p && q)
    {
        Tree100(p->left, q->left, ans);
        if ((*ans) && p->val != q->val)
            (*ans) = false;
        Tree100(p->right, q->right, ans);
    }
    else if (p || q)
        (*ans) = false;

    return;
}