#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mytest69(int x);
int doubleCheck(int x);

int mySqrt(int x)
{
    return mytest69(x);
}

int doubleCheck(int x)
{
    int left, right;
    left = 0;
    right = x;
    int ans = -1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if ((long long)middle * middle <= x)
        {
            ans = middle;
            left = middle + 1;
        }
        else
            right = middle - 1;
    }

    return ans;
}
// 自己的暴力解法
int mytest69(int x)
{
    unsigned int num = 1;

    while (pow(num, 2) < x)
    {
        num++;
    }

    num *num > x ? num-- : num;

    return (int)num;
}