#include <header.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    int **ans = (int **)malloc(sizeof(int *) * numRows);
    *returnSize = numRows;
    *returnColumnSizes = (int *)malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++)
    {
        ans[i] = (int *)malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        ans[i][0] = ans[i][i] = 1;
        for (int j = 1; j < i; j++)
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
    }

    return ans;
}