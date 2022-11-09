#include <stdio.h>
#include <header.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int returnSize;
    int *ans;

    ans = getRow(3, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}