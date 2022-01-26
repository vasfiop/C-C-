#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

bool myTest(int x);
bool changeStr(int x);

bool isPalindrome(int x)
{
    return myTest(x);
}
// 数字转换字符串
bool changeStr(int x)
{
}
// 自己尝试的方法
bool myTest(int x)
{
    if (x < 0)
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