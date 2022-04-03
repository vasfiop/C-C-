#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mytest70(int n);

int climbStairs(int n)
{
    return mytest70(n);
}
// 动态规划
int mytest70(int n)
{
    int q, p, r;
    q = 0, p = 0, r = 1;
    for (int i = 0; i < n; i++)
    {
        q = p;
        p = r;
        r = q + p;
    }

    return r;
}