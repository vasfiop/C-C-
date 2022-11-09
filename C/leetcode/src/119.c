#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *getRow(int rowIndex, int *returnSize)
{
    int **sanjiao = (int *)malloc(sizeof(int *) * rowIndex + 1);

    for (int i = 0; i < rowIndex + 1; i++)
    {
        sanjiao[i] = (int *)malloc(sizeof(int) * (i + 1));
        sanjiao[i][0] = sanjiao[i][i] = 1;
        for (int j = 0; j < i; j++)
            sanjiao[i][j] = sanjiao[i - 1][j] + sanjiao[i - 1][j - 1];
    }

    *returnSize = rowIndex + 1;
    // FIXME 项目出现了问题

    return sanjiao[rowIndex];
}