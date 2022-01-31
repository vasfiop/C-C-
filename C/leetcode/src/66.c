#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int *myTest_66(int *digits, int digitsSize, int *returnSize);

int *ans_1(int *digits, int digitsSize, int *returnSize);

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    return myTest_66(digits, digitsSize, returnSize);
}
// 官方答案
int *ans_1(int *digits, int digitsSize, int *returnSize)
{
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            for (int j = i + 1; j < digitsSize; j++)
                digits[j] = 0;
            returnSize[0] = digitsSize;
            return digits;
        }
    }

    int *returnNum = (int *)malloc(sizeof(int) * (digitsSize + 1));
    memset(returnNum, 0, sizeof(int) * (digitsSize + 1));
    returnSize[0] = digitsSize + 1;

    returnNum[0] = 1;

    return returnNum;
}
// 自己尝试优化
int *myTest_66(int *digits, int digitsSize, int *returnSize)
{
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        digits[i] = digits[i] + 1;
        if (digits[i] != 10)
        {
            returnSize[0] = digitsSize;
            return digits;
        }
        else
            digits[i] = 0;
    }

    int *returnNum = (int *)malloc(sizeof(int) * (digitsSize + 1));
    memset(returnNum, 0, sizeof(int) * (digitsSize + 1));
    returnSize[0] = digitsSize + 1;

    returnNum[0] = 1;

    return returnNum;
}