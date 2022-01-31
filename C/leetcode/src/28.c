#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int myTest_28(char *haystack, char *needle);
int answer_1(char *haystack, char *needle);

int strStr(char *haystack, char *needle)
{
    return myTest_28(haystack, needle);
}
// Knuth-Morris-Pratt 算法
int answer_2(char *haystack, char *needle)
{
    int n = strlen(haystack), m = strlen(needle);

    if (m == 0) // 题干要求
        return 0;

    int pi[m];
    pi[0] = 0;

    for (int i = 1, j = 0; i < m; i++) // 遍历needle 得到KMP函数值
    {
        while (j > 0 && needle[i] != needle[j])
            j = pi[j - 1];
        if (needle[i] == needle[j])
            j++;
        pi[i] = j;
    }
// TODO 下面的循环还没看明白
    for (int i = 0, j = 0; i < n; i++) // 遍历haystack
    {
        while (j > 0 && haystack[i] != needle[j])
            j = pi[j - 1];
        if (haystack[i] == needle[j])
            j++;
        if (j == m)
            return i - m + 1;
    }
    return -1;
}
// 官方暴力匹配
int answer_1(char *haystack, char *needle)
{
    int n = strlen(haystack), m = strlen(needle);

    for (int i = 0; i + m <= n; i++)
    {
        bool flag = true;
        for (int j = 0; j < m; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return i;
    }
    return -1;
}
// 我自己尝试
int myTest_28(char *haystack, char *needle)
{
    int haystackSize = strlen(haystack);
    int needleSize = strlen(needle);

    if (needleSize == 0)
        return 0;

    if (needleSize > haystackSize)
        return -1;

    int needlePos = 0;
    for (int haystackPos = 0; haystackPos < haystackSize; haystackPos++)
    {
        if (haystack[haystackPos] == needle[needlePos])
        {
            needlePos++;
            if (needlePos == needleSize)
                return haystackPos - needleSize + 1;
        }
        else
        {
            haystackPos -= needlePos;
            needlePos = 0;
        }
    }

    return -1;
}