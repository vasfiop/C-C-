#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool myTest(int x);
bool changeStr(int x);
bool returnNumber(int x);

bool isPalindrome(int x)
{
    return returnNumber(x);
}
// 将数字本身进行翻转
bool returnNumber(int x)
{
    if ((x < 0 || (x % 10 == 0)) && x != 0)
        return false;
    if (x >= 0 && x <= 9)
        return true;
    int returnNum = 0;

    while (x > returnNum)
    {
        returnNum = returnNum * 10 + x % 10;
        x /= 10;
    }

    return x == returnNum / 10 || x == returnNum;
}
// 数字转换字符串(效果不是很好 空间换时间)
bool changeStr(int x)
{
    if (x < 0 || (x % 10 == 0) && x != 0)
        return false;
    if (x >= 0 && x <= 9)
        return true;

    int count = 0;
    int temp = x;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    char *numStr = (char *)malloc(sizeof(char) * count);
    temp = x;
    count = 0;
    while (temp != 0)
    {
        numStr[count++] = temp % 10;
        temp /= 10;
    }
    int left, right;
    left = 0;
    right = count - 1;
    while (left < right)
        if (numStr[left++] != numStr[right--])
            return false;

    return true;
}
// 自己尝试的方法(有bug 数字会溢出)
bool myTest(int x)
{
    if ((x < 0 || (x % 10 == 0)) && x != 0)
        return false;
    if (x >= 0 && x <= 9)
        return true;

    int temp = x;
    double count = 0;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = x;
    int num = 0;
    while (temp != 0)
    {
        num += temp % 10 * round(pow(10, --count));
        temp /= 10;
    }

    return num == x ? true : false;
}