// 动态规划
// 贪心
// 中心扩散
#include <string.h>
#include <header.h>
#include <stdio.h>
#include <stdlib.h>
int check2(char *s, int left, int right);
char *test2(char *s);

char *test1(char *s);
int checkStr(char *check, int left, int right);

char *longestPalindrome(char *s)
{
    return test2(s);
}
// 中心扩散法
char *test2(char *s)
{
    int sSize = strlen(s);
    if (sSize < 2)
        return s;
    char *returnStr = NULL;

    int begine = 1;
    int maxSize = 0;

    for (int i = 0; i < sSize - 1; i++)
    {
        int oddNum = check2(s, i, i);
        int evenNum = check2(s, i, i + 1);

        int max = oddNum > evenNum ? oddNum : evenNum;
        if (maxSize < max)
        {
            maxSize = max;
            begine = i - (maxSize - 1) / 2;
        }
    }
    returnStr = (char *)malloc(sizeof(char) * maxSize + 1);
    strncpy(returnStr, s + begine, maxSize);
    returnStr[maxSize] = '\0';

    return returnStr;
}
int check2(char *s, int left, int right)
{
    int size = strlen(s);
    int i, j;
    i = left;
    j = right;
    while (i >= 0 && j < size)
    {
        if (s[i] == s[j])
        {
            i--;
            j++;
        }
        else
            break;
    }
    return j - i - 1;
}
// 暴力解法
char *test1(char *s)
{
    int sSize = strlen(s);
    int begine = 0;
    int maxLen = 1;
    char *returnSize = NULL;

    for (int i = 0; i < sSize - 1; i++)
    {
        for (int j = i + 1; j < sSize; j++)
        {
            if (j - i + 1 > maxLen && checkStr(s, i, j))
            {
                maxLen = j - i + 1;
                begine = i;
            }
        }
    }
    returnSize = (char *)malloc(sizeof(char *) * maxLen + 1);
    strncpy(returnSize, s + begine, maxLen);
    returnSize[maxLen] = '\0';

    return returnSize;
}
int checkStr(char *check, int left, int right)
{
    while (left < right)
    {
        if (check[left] != check[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}