// 动态规划
// 贪心
// 中心扩散
#include <string.h>
#include <header.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void show(bool **dp, int num);
char *test3(char *s);

int check2(char *s, int left, int right);
char *test2(char *s);

int checkStr(char *check, int left, int right);
char *test1(char *s);

char *longestPalindrome(char *s)
{
    return test3(s);
}
// 动态规划法
char *test3(char *s)
{
    int sSize = strlen(s);
    if (sSize < 2)
        return s;
    char *returnStr = NULL;
    bool dp[sSize][sSize];

    for (int i = 0; i < sSize; i++)
        for (int j = 0; j < sSize; j++)
            dp[i][j] = false;
    for (int i = 0; i < sSize; i++)
        dp[i][i] = true;

    int begine = 0;
    int maxSize = 1;

    for (int j = 1; j < sSize; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (s[i] != s[j])
                dp[i][j] = false;
            else
            {
                if ((j - i < 3))
                    dp[i][j] = true;
                else
                    dp[i][j] = dp[i + 1][j - 1];
            }
            if (dp[i][j] && j - i + 1 > maxSize)
            {
                maxSize = j - i + 1;
                begine = i;
            }
        }
    }

    returnStr = (char *)malloc(sizeof(char) * maxSize + 1);
    strncpy(returnStr, s + begine, maxSize);
    returnStr[maxSize] = '\0';

    return returnStr;
}
void show(bool **dp, int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
            printf("%d ", dp[i][j]);
        putchar('\n');
    }
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